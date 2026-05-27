# Security Audit Notes

This file records the distribution and metadata controls that should remain true for this package.

## Verified Dependency Metadata

- `Package.swift` must not depend on the floating `master` branch of `RibbonWebRTC`.
- `Package.swift` must pin `RibbonWebRTC` with `exact: "0.118.0"` until a newer published dependency is available and reviewed.
- `RibbonWebRTCSDK.podspec` must pin `RibbonWebRTC` with `= 0.118.0`.
- `README.md` must not describe the WebRTC M142 changelog entry as an effective dependency upgrade unless the package metadata is updated to a matching published dependency.
- `RibbonWebRTCSDK.podspec` must align with `LICENSE.md` and must not point to the old `mit-license.txt` metadata.

## Artifact Integrity Baseline

These hashes intentionally make artifact changes visible in CI. If a binary or zip is rebuilt legitimately, update this file and `.github/workflows/security-metadata-check.yml` in the same review.

| Path | SHA256 |
| --- | --- |
| `dist/MobileSDK_6.43.0.zip` | `18205775D64214FB36BDA49388783EA9B7F42303C67E15FCF7ED1BED64AC29F9` |
| `MobileSDK.xcframework/ios-arm64/MobileSDK.framework/MobileSDK` | `3FC30BF8CA89E090B4B1D50573FD5683DC59C10B280D1EF6DB144D6AED9A8516` |
| `MobileSDK.xcframework/ios-arm64_x86_64-simulator/MobileSDK.framework/MobileSDK` | `613E7ADF2002CB23CCD2FE587966FD82C3F2B58510BE1F1FD9CECFEC27F033D1` |

## Operational Guardrails

- Keep the `Security metadata check` workflow required on pull requests before merging.
- Enable branch protection or repository rulesets for `master`.
- Require pull requests for changes to package metadata, `MobileSDK.xcframework`, `dist/`, and logging code.
- Prefer squash merge for this pull request.
- Do not enable `TRACE_WEBRTC` logging in production unless logs are routed through `PIIRedactingLoggingDelegate` or an equivalent redactor.

## Current Review Limit

The public headers and packaging metadata were reviewed. The implementation inside `MobileSDK.framework` is a binary artifact, so source-level safety claims for the internal implementation require source code or a dedicated binary security review.
