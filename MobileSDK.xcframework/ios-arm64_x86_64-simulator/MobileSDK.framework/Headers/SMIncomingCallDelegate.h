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
* SMIncomingCallDelegate.h
*
* @version: 6.25.2
*
*/

#import <Foundation/Foundation.h>
#import "SMCallDelegate.h"

/**
 * @brief Call object, which is used for incoming calls.
 * @since 2.0.0
 */
@protocol SMIncomingCallDelegate <SMCallDelegate>

/**
 * @brief Gets custom SIP headers which comes from incoming call notification.
 * @return NSDictionary which contains custom SIP headers if exist
 * @since 4.4.5
 * @updated 5.0.0
 */
- (NSDictionary *)getCustomSIPHeaders;

/**
 * @brief Indicates if the call can be rejected or not
 * @return YES if the call can be rejected otherwise returns NO
 * @since 2.0.0
 */
- (BOOL) canReject;

/**
 * @brief Accepts the incoming call
 * @param isVideoEnabled indicates if video is allowed or not
 * @since 2.0.0
 */
- (void) acceptCall: (BOOL)isVideoEnabled;

/**
 * @brief Accepts the incoming call and sends the given custom SIP headers to SPiDR server.
 * @param isVideoEnabled indicates if video is allowed or not
 * @param customParameters key-value pairs of custom SIP headers to send
 * @since 4.5.0
 */
- (void) acceptCall: (BOOL)isVideoEnabled withCustomParameters:(NSDictionary *) customParameters;

/**
 * @brief Ignores the incoming call
 * @since 2.0.0
 */
- (void) ignoreCall;

/**
 * @brief Rejects the incoming call
 * @since 2.0.0
 */
- (void) rejectCall;

/**
 * @brief Forwards incoming call
 * @since 2.0.0
 */
- (void) forwardCall:(SMUriAddress*)address;

/**
 * @brief Sets Id value of Incoming call
 *
 * @param Id Indicates custom identifier  which is not related with Spidr Session Id
 *
 * @since 4.2.1.1
 */
//- (void) setId:(NSString *)Id;

/**
 * @brief Sends the ringing feedback to SPiDR. Needs to be called if Ringing feedback enabled.
 * @since 4.3.2
 */
- (void) sendRingingFeedback;



@end
