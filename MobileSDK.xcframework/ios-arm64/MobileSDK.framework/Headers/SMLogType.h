/*
* COPYRIGHT © 2024 RIBBON COMMUNICATIONS OPERATING COMPANY, INC. ALL RIGHTS RESERVED.
* This publication and the information contained herein is the property of Ribbon
* and may not be copied, reproduced or distributed in any form or by any means without
* the prior written permission of Ribbon.
*
* THIS PUBLICATION IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
* PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
* FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
* OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE PUBLICATION OR ITS USE.
*
* SMLogType.h
*
* @version: 6.27.0
*
*/

/**
 * @brief Utility class for LogType.
 *
 * @since 2.0.0
 **/

/**
 * Enum values for LogLevel
 *
 * ERROR --> events that will presumably lead the application to abort
 * WARNING --> potentially harmful situations
 * INFO --> informational messages that highlight the progress of the application at coarse-grained level
 * TRACE --> finer-grained informational events
 * TRACE_WEBRTC --> enables webrtc sensitive logging
 *
 * @since 2.0.0
 **/
typedef NS_ENUM(NSInteger, SMLogLevel) {
    
    /** Events that will presumably lead the application to abort */
    ERROR NS_SWIFT_NAME(error),
    
    /** Potentially harmful situations */
    WARNING NS_SWIFT_NAME(warning),
    
    /** Informational messages that highlight the progress of the application at coarse-grained level */
    INFO NS_SWIFT_NAME(info),
    
    /** Finer-grained informational events */
    TRACE NS_SWIFT_NAME(trace),
    
    /** Enables webrtc sensitive logging */
    TRACE_WEBRTC NS_SWIFT_NAME(traceWebRTC)
};
