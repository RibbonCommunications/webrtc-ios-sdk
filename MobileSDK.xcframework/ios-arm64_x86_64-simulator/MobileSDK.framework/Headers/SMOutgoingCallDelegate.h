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
* SMOutgoingCallDelegate.h
*
* @version: 6.41.0
*
*/

#import <Foundation/Foundation.h>


@protocol SMCallDelegate;

/**
 * Call object, which is used for outgoing calls.
 *
 * @since 2.0.0
 */
@protocol SMOutgoingCallDelegate <SMCallDelegate>

/**
 * Starts call establishment on created outgoing call
 * 
 * @param isVideoEnabled indicates video is enabled or not in the call
 * @since 2.0.0
 */
- (void) establishCall :(BOOL) isVideoEnabled;

/**
 * Establishes an outgoing call with single audio m-line. The related call backs are done through the
 * application listener interface instance defined in the call service.
 *
 * @since 3.0.5
 */
- (void) establishAudioCall;

/**
 * Establishes an outgoing call with custom parameters dictionary
 *
 * @param videoEnabled indicates local video sending is enabled or not
 * @param customParameters indicates custom call properties like emergency etc.
 *
 * @since 4.3.1
 */
- (void) establishCall:(BOOL)isVideoEnabled withCustomParameters:(NSDictionary *)customParameters;

/**
 * Establishes an audio only outgoing call with custom parameters dictionary
 *
 * @param customParameters indicates custom call properties like emergency etc.
 *
 * @since 4.3.1
 */
- (void) establishAudioCallWithCustomParameters:(NSDictionary *)customParameters;
@end
