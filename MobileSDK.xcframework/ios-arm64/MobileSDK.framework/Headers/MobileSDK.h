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
* MobileSDK.h
*
* @version: 6.24.0
*
*/

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MobileSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char MobileSDKVersionString[];

//Call
#import <MobileSDK/SMCallDelegate.h>
#import <MobileSDK/SMCallServiceDelegate.h>
#import <MobileSDK/SMIncomingCallDelegate.h>
#import <MobileSDK/SMOutgoingCallDelegate.h>
#import <MobileSDK/SMCallApplicationDelegate.h>
#import <MobileSDK/SMCallState.h>
#import <MobileSDK/SMCallTypes.h>
#import <MobileSDK/SMMediaAttributes.h>
#import <MobileSDK/SMVideoSourceTypes.h>
#import <MobileSDK/SMAudioSourceTypes.h>

//ServiceProvider
#import <MobileSDK/SMServiceProvider.h>

//Registration
#import <MobileSDK/SMRegistrationApplicationDelegate.h>
#import <MobileSDK/SMServiceTypes.h>
#import <MobileSDK/SMNotificationStates.h>
#import <MobileSDK/SMRegistrationStates.h>
#import <MobileSDK/SMRegistrationService.h>

//Utilities
#import <MobileSDK/SMMobileError.h>
#import <MobileSDK/SMConfiguration.h>
#import <MobileSDK/SMScalingType.h>
#import <MobileSDK/SMCameraModes.h>
#import <MobileSDK/SMLoggingDelegate.h>
#import <MobileSDK/SMUriAddress.h>
#import <MobileSDK/SMICEServers.h>
#import <MobileSDK/SMCodecSet.h>
#import <MobileSDK/SMCodecToReplace.h>
#import <MobileSDK/SMICEOptions.h>
#import <MobileSDK/SMSlowStartCallPolicy.h>
#import <MobileSDK/SMAudioSessionConfiguration.h>
#import <MobileSDK/SMAudioCodecConfiguration.h>
#import <MobileSDK/SMCallReceiveBandwidthLimit.h>

//AddressBook
#import <MobileSDK/SMContact.h>
#import <MobileSDK/SMAddressBookApplicationDelegate.h>
#import <MobileSDK/SMAddressBookServiceDelegate.h>

// Push
#import <MobileSDK/SMPushService.h>
#import <MobileSDK/SMPushSubscriptionDelegate.h>

//Call Log
#import <MobileSDK/SMCallLogServiceDelegate.h>

//Public Request
#import <MobileSDK/SMPublicRequestService.h>
