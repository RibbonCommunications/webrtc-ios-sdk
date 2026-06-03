import Foundation
import MobileSDK

/// Logging delegate wrapper that redacts common contact and credential values before forwarding SDK logs.
public final class PIIRedactingLoggingDelegate: NSObject, SMLoggingDelegate {
    public typealias LogSink = (_ logLevel: SMLogLevel, _ logContext: String, _ methodName: Selector?, _ message: String) -> Void

    private let sink: LogSink

    public init(sink: @escaping LogSink) {
        self.sink = sink
    }

    public func log(_ logLevel: SMLogLevel,
                    withLogContext logContext: String,
                    withMethodName methodName: Selector?,
                    withMessage logMessage: String) {
        sink(logLevel, logContext, methodName, Self.redact(logMessage))
    }

    public static func redact(_ message: String) -> String {
        var redacted = message
        redacted = replace(#"(?i)\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}\b"#, in: redacted, with: "<redacted-email>")
        redacted = replace(#"(?i)\b(bearer\s+)[A-Z0-9._~+/\-=]+"#, in: redacted, with: "$1<redacted-token>")
        redacted = replace(
            #"(?i)\b([A-Z0-9_]*(?:password|passcode|token|secret|authorization|auth|api[_-]?key)[A-Z0-9_]*)\s*[:=]\s*[^\s,;\]\}\)]+"#,
            in: redacted,
            with: "$1=<redacted>"
        )
        redacted = replace(
            #"(?i)\b(firstName|lastName|nickName|userName|emailAddress|homePhone|mobilePhone|workPhone|pager|fax|photoUrl|primaryContact)\s*[:=]\s*[^\s,;\]\}\)]+"#,
            in: redacted,
            with: "$1=<redacted>"
        )
        redacted = replace(#"(?<![\w@])\+?\d[\d\s().-]{7,}\d(?![\w@])"#, in: redacted, with: "<redacted-phone>")
        return redacted
    }

    private static func replace(_ pattern: String, in value: String, with template: String) -> String {
        guard let regex = try? NSRegularExpression(pattern: pattern, options: []) else {
            return value
        }
        let range = NSRange(value.startIndex..<value.endIndex, in: value)
        return regex.stringByReplacingMatches(in: value, options: [], range: range, withTemplate: template)
    }
}
