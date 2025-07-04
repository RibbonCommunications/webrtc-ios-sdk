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
* SMRegistrationService.h
*
* @version: 6.35.0
*
*/

#import <Foundation/Foundation.h>

@protocol SMRegistrationApplicationDelegate;
@class SMMobileError;
@class SMNotificationEngine;

__attribute__((objc_runtime_name("SWIFTSMRegistrationService")))
@interface SMRegistrationService : NSObject

/**
 * @brief The delegate object that must be implement the callbacks.
 * @see SMRegistrationApplicationDelegate
 */
@property(nonatomic, strong, nonnull) id<SMRegistrationApplicationDelegate> registrationApplicationDelegate;


/**
 * @brief Hold the notification engine object for reusing.
 */
@property (readonly, nonnull) SMNotificationEngine *notificationEngine;

/**
 * @brief This method registers user to server with values set in configuration and valid parameters,
 * Failure and success calls will be transmitted to completion block which can be null.
 * After registration request succeeded and notification channel is connected completion block will be called without error.
 * During registration process, registration registrationStateChanged of RegistrationApplicationDelegate will be triggered after registration request and notificationConnectionStateChanged of RegistrationApplicationDelegate will be triggered after notification connection is established.
 *
 * @param expirationTime, Expiration time for registration in seconds. This value is sent to WebRTC GW server to set the registration expiration value and WebRTC GW sends the suitable expiration value back in registration request response. If this value exceeds the maximum supported expiration time in WebRTC GW, it will send the maximum value of WebRTC GW server that is set. This value is generally 3600sec and the final value can be gathered by calling getExpirationTime method.
 * @param completionBlock, block implementation that will be used by the registration service to trigger callback events. Listener can be null if user don't care the callbacks or failure reasons.
 *
 * @since 5.14.0
 */
- (void) registerToServer:(NSInteger) expiration completionHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * @brief This method registers user to server with values set in configuration and valid parameters,
 * Failure and success calls will be transmitted to completion block which can be null.
 * After registration request succeeded and notification channel is connected completion block will be called without error.
 * During registration process, registration registrationStateChanged of RegistrationApplicationDelegate will be triggered after registration request and notificationConnectionStateChanged of RegistrationApplicationDelegate will be triggered after notification connection is established.
 *
 * @param expirationTime, Expiration time for registration in seconds. This value is sent to WebRTC GW server to set the registration expiration value and WebRTC GW sends the suitable expiration value back in registration request response. If this value exceeds the maximum supported expiration time in WebRTC GW, it will send the maximum value of WebRTC GW server that is set. This value is generally 3600sec and the final value can be gathered by calling getExpirationTime method.
 * @param hmacToken, HMAC token to authorize subscription request to the WebRTC GW server. This token must be a valid token obtained from the WebRTC GW server.
 * @param completionBlock, block implementation that will be used by the registration service to trigger callback events. Listener can be null if user don't care the callbacks or failure reasons.
 *
 * @since 5.19.0
 */
- (void) registerToServer:(NSInteger) expiration hmacToken:(nonnull NSString *)token completionHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * @brief This method registers user to server with given subscription id and notification channel id
 * Failure and success calls will be transmitted to completion block which can be null.
 * After registration request succeeded and notification channel is connected completion block will be called without error.
 * During registration process, registration registrationStateChanged of RegistrationApplicationDelegate will be triggered after registration request and notificationConnectionStateChanged of RegistrationApplicationDelegate will be triggered after notification connection is established.
 *
 * @param serviceTypes, service list that application will be registered to
 * @param expirationTime, Expiration time for registration in seconds. This value is sent to WebRTC GW server to set the registration expiration value and WebRTC GW sends the suitable expiration value back in registration request response. If this value exceeds the maximum supported expiration time in WebRTC GW, it will send the maximum value of WebRTC GW server that is set. This value is generally 3600sec and the final value can be gathered by calling getExpirationTime method.
 * @param subscriptionId , subscription id to use unregistration and renew registration
 * @param notificationChannelId , notification channel id to use websocket connection
 * @param completionBlock, block implementation that will be used by the registration service to trigger callback events. Listener can be null if user don't care the callbacks or failure reasons.
 *
 * @since 4.0.1
 */
- (void) registerToServer:(nonnull NSArray<NSString *> *)serviceTypes
           expirationTime:(NSInteger) expiration
           subscriptionId:(nonnull NSString *) subscriptionId
    notificationChannelId:(nonnull NSString *) notificationChannelId
        completionHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * @brief This method unregisters user from server. Failure and success calls will be transmitted by RegistrationListener interface.
 *
 * @param completionBlock, block implementation that will be used by the registration service to trigger callback events. Listener can be null if user don't care the callbacks or failure reasons.
 * @since 2.0.0
 */
- (void) unRegisterFromServerWithHandler:(void (^_Nullable)(SMMobileError * _Nullable error))completionBlock;

/**
 * @brief Gives the expiration time for registration in seconds. Since the exact value is determined by WebRTC GW server, this method should be called after registration succeeded.
 *
 * @return NSInteger, registration expiration time in seconds.
 */
- (NSInteger) getExpirationTime;

/**
 * @brief Gives the current status of the registration.
 *
 * @return SMRegistrationStates, REGISTERED, UNREGISTERED
 */
- (SMRegistrationStates) getRegistrationState;

/**
 * @brief Gives the current status of the notification component.
 *
 * @return SMNotificationStates, CONNECTED, DISCONNECTED
 */
- (SMNotificationStates) getNotificationState;

/**
 * Constructing is disallowed from API level.
 */
- (id _Nonnull )init __attribute__((unavailable("init is not a supported initializer for this class.")));

@end
