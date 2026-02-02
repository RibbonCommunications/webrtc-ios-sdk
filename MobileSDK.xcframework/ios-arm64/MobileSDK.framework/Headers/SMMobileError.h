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
* SMMobileError.h
*
* @version: 6.41.0
*
*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SMErrorTypes.h"

#define MOBILE_ERROR_DOMAIN @"MobileErrorDomain"
#define SPIDR_ERROR_DOMAIN  @"SPiDRErrorDomain"

/**
 * @brief Defines the cause of an error
 *
 * @since 2.0.0
 **/
//__attribute__((objc_runtime_name("SWIFTSMMobileError")))
@interface SMMobileError : NSError

/**
 * Time(second) value for retrying erroneous action
 *
 * @since 3.0.5
 */
@property(nonatomic) CGFloat retryAfter;

/**
 * Creates an error message with specified description message
 * 
 * @param domain specific error domain of the object
 * @param code specific error code of the error
 * @param descriptionString specify error with this message string
 *
 * @return new MobileError object
 *
 * @since 2.0.0
 */
- (nonnull id)initWithDomain:(NSString *_Nonnull)domain code:(SMErrorTypes)code description:(NSString *_Nullable) descriptionString ;

/**
 * Creates an error message with specified description message using a raw status code.
 *
 * This initializer is useful when SPiDR returns a numeric `statusCode` that is not
 * represented in `SMErrorTypes` (e.g. `REST_REQUEST_PENDING_NOTIFICATION` = 49).
 */
- (nonnull id)initWithDomain:(NSString *_Nonnull)domain statusCode:(NSInteger)statusCode description:(NSString *_Nullable)descriptionString;

@end
