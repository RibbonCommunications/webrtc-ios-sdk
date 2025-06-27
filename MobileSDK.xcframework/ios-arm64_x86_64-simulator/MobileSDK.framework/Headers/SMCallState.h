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
* SMCallState.h
*
* @version: 6.35.0
*
*/

#import <Foundation/Foundation.h>
#import "SMCallTypes.h"

// Reason codes defined on MobileSDK
#define STATUS_CODE_NOT_PROVIDED 9900
#define ENDED_BY_LOCAL 9901
#define REJECTED_BY_LOCAL 9902
#define IGNORED_BY_LOCAL 9903
#define RESPONDED_FROM_ANOTHER_DEVICE 9904
#define SESSION_COMPLETED 9905
#define ENDED_BY_ERROR 9906
#define ENDED_BY_UNREGISTER 9907

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_runtime_name("SWIFTSMCallState")))
@interface SMCallState : NSObject

/**
 * @brief Enum type of CallState
 * @since 3.0.5
 */
@property (nonatomic, readonly) SMCallStates type;

/**
 * @brief Reason of state transition
 * @since 3.0.5
 */
@property (strong, nonatomic, readonly) NSString *reason;

/**
 * @brief HTTP status code
 * @since 3.0.5
 */
@property (nonatomic, readonly) NSInteger statusCode;

/**
 * Creates an CallState oject with specified type
 *
 * @param type of CallState
 * @return SMCallState object
 * @since 3.0.5
 */
- (id) initWithType:(SMCallStates) type;

/**
 * Creates an CallState oject with specified type and reson
 *
 * @param type of CallState
 * @param reason of CallState transition
 * @return SMCallState object
 * @since 3.0.5
 */
- (id) initWithType:(SMCallStates) type andReason:(NSString *) reason;

/**
 * Creates an CallState oject with specified type and reson and http code
 *
 * @param type of CallState
 * @param reason of CallState transition
 * @param statusCode HTTP code comes from SPiDR for state transition
 * @return SMCallState object
 * @since 3.0.5
 */
- (id) initWithType:(SMCallStates) type andReason:(NSString *) reason andStatusCode: (NSInteger) statusCode;

@end

NS_ASSUME_NONNULL_END
