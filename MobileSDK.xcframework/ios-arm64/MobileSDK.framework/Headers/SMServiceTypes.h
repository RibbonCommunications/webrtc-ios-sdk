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
* SMServiceTypes.h
*
* @version: 6.28.0
*
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Class for getting service names for registration
 * @since 2.0.0
 */
__attribute__((objc_runtime_name("SWIFTSMServiceTypes")))
@interface SMServiceTypes : NSObject

/**
 * Retrive name of the call service to registration
 * @return name of the call Service
 * @since 2.0.0
 */
+(NSString *) getCallService;

/**
 * Retrive name of the callMe service to registration
 * @return name of the callMe service
 * @since 2.0.0
 */
+(NSString *) getCallMeService;
@end

NS_ASSUME_NONNULL_END
