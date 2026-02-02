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
* SMCallTypes.h
*
* @version: 6.41.0
*
*/

#import <AVFoundation/AVFoundation.h>

/**
 * @brief enum class for Call States
 *
 * - CALLSTATES_INITIAL,
 * - CALLSTATES_IN_CALL,
 * - CALLSTATES_ON_HOLD,
 * - CALLSTATES_UNHOLDING,
 * - CALLSTATES_ON_DOUBLE_HOLD,
 * - CALLSTATES_REMOTE_HOLD,
 * - CALLSTATES_JOINING,
 * - CALLSTATES_ENDED,
 * - CALLSTATES_DIALING,
 * - CALLSTATES_RINGING,
 * - CALLSTATES_ANSWERING,
 * - CALLSTATES_UNKNOWN
 *
 *
 * @since 2.0.0
 */

typedef NS_ENUM(NSInteger, SMCallStates) {
    /** Call object is initialized */
    CALLSTATES_INITIAL NS_SWIFT_NAME(initial) = 1,
    
    /** Call is active. */
    CALLSTATES_IN_CALL NS_SWIFT_NAME(inCall) = 3,
    
    /** Outgoing call is ringing */
    CALLSTATES_RINGING NS_SWIFT_NAME(ringing) = 7,
    
    /** Call is held */
    CALLSTATES_ON_HOLD NS_SWIFT_NAME(onHold) = 8,
    
    /** Remote side is on hold */
    CALLSTATES_REMOTELY_HELD NS_SWIFT_NAME(remotelyHeld) = 9,
    
    /** ThreeWay Call is merging the other calls */
    CALLSTATES_JOINING NS_SWIFT_NAME(joining) = 10,
    
    /** Call is ended completely */
    CALLSTATES_ENDED NS_SWIFT_NAME(ended) = 11,
    
    /** Originator is dialing a number */
    CALLSTATES_DIALING NS_SWIFT_NAME(dialing) = 12,
    
    /** Ringing call is answering */
    CALLSTATES_ANSWERING NS_SWIFT_NAME(answering) = 13,
    
    /** Unknown */
    CALLSTATES_UNKNOWN NS_SWIFT_NAME(unknown) = 19,
    
    /**  Call is held and remote side is on hold simultaneously */
    CALLSTATES_ON_DOUBLE_HOLD NS_SWIFT_NAME(onDoubleHold) = 20,
    
    /** 183 event came */
    CALLSTATES_SESSION_PROGRESS NS_SWIFT_NAME(sessionProgress) = 21
};


