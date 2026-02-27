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
* SMServiceProvider.h
*
* @version: 6.42.0
*
*/


#import <Foundation/Foundation.h>


@class SMPushService;
@class SMRegistrationService;
@class SMPublicRequestService;

@protocol SMCallServiceDelegate;
@protocol SMAddressBookServiceDelegate;
@protocol SMPresenceServiceDelegate;
@protocol SMIMServiceDelegate;
@protocol SMCallLogServiceDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class is needed for calling the services.
 * @since 2.0.0
 */
@interface SMServiceProvider : NSObject

/**
 * This method returns an instance of ServiceProvider using Singleton Pattern
 * @return ServiceProvider
 * @since 2.0.0
 */
+ (SMServiceProvider *) getInstance;


/**
 * This method returns (creates if necessary) an instance of AddressBookService using Singleton Pattern
 * @return AddressBookServiceDelegate
 * @since 2.0.0
 */
- (id<SMAddressBookServiceDelegate>) getAddressBookService;


/**
 * This method returns (creates if necessary) an instance of RegistrationService using Singleton Pattern
 * @return RegistrationServiceDelegate
 * @since 2.0.0
 */
- (SMRegistrationService *) getRegistrationService;


/**
 * This method returns (creates if necessary) an instance of CallService using Singleton Pattern
 * @return CallServiceDelegate
 * @since 2.0.0
 */
- (id<SMCallServiceDelegate>) getCallService;


/**
 * This method returns (creates if necessary) an instance of CallLogService using Singleton Pattern
 * @return CallLogServiceDelegate
 * @since 2.0.0
 */
- (id<SMCallLogServiceDelegate>) getCallLogService;

/**
 * This method returns (creates if necessary) an instance of PushService using Singleton Pattern
 * @return PushService
 * @since 3.0.5
 * @updated 4.6.0
 */
- (SMPushService *) getPushService;


/**
 * This method returns the version information about the SDK
 * @return NSString
 * @since 2.0.0
 */

- (SMPublicRequestService *) getPublicRequestService;
/**
 * This method returns (creates if necessary) an instance of PublicRequestService using Singleton Pattern
 * @return PublicRequestService
 * @since 5.24.0
 */



- (NSString *) getVersion;

NS_ASSUME_NONNULL_END

@end
