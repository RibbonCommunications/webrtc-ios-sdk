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
* SMCallServiceDelegate.h
*
* @version: 6.26.0
*
*/

#import <Foundation/Foundation.h>
#import "SMOutgoingCallDelegate.h"

@class SMMobileError;
@class SMUriAddress;
@class SMNotificationMessage;

@protocol SMCallApplicationDelegate;
@protocol SMCallDelegate;

/**
 * @brief Call service methods
 * @since 2.0.0
 **/
@protocol SMCallServiceDelegate <NSObject>

/** If YES, MobileSDK will not initialize the audio unit automatically when an
 *  audio track is ready for playout or recording. Instead, applications should
 *  call setVoipAudioEnabled. If NO, MobileSDK will initialize the audio unit
 *  as soon as an audio track is ready for playout or recording.
 *  Default value is NO.
 *
 * @since 4.3.1
 */
@property(nonatomic) BOOL useManualAudio;

/** This property is only effective if useManualAudio is YES.
 *  Represents permission for MobileSDK to initialize the VoIP audio unit.
 *  When set to NO, if the VoIP audio unit used by MobileSDK is active, it will be
 *  stopped and uninitialized. This will stop incoming and outgoing audio.
 *  When set to YES, MobileSDK will initialize and start the audio unit when it is
 *  needed (e.g. due to establishing an audio connection).
 *  Default value is NO.
 *
 * @since 4.3.1
 */
@property(nonatomic, getter=isVoipAudioEnabled) BOOL voipAudioEnabled;

/**
 * @brief Set the event handler CallApplicationDelegate for the CallService.
 * @param app CallApplicationDelegate
 * @since 2.0.0
 */

-(void) setCallApplication :(nonnull id <SMCallApplicationDelegate>) app;

/**
 * @brief This method is to create outgoing/mobile originated calls
 *
 * @param app delegete of application to return callbacks for call
 * @param id of call as string. If it set as null MobileSDK will generate a uniq callId
 * @param originator address of caller
 * @param terminator address of callee
 * @param completion block
 * @return call to establish call
 * @since 4.1.0
 */
- (void)createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
                 andCallId:(nullable NSString *) callId
             andOriginator:(nullable SMUriAddress *)originator
             andTerminator:(nonnull SMUriAddress *)terminator
                completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError  * _Nullable error))callHandler;

/**
 * @brief This method is to create outgoing/mobile originated calls
 *
 * @param app delegete of application to return callbacks for call
 * @param originator address of caller
 * @param terminator address of callee
 * @param completion block
 * @return call to establish call
 * @since 3.1.4
 */
- (void)createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
             andOriginator:(nullable SMUriAddress *)originator
             andTerminator:(nonnull SMUriAddress *)terminator
                completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;

/**
 * @brief This method is to create outgoing/mobile originated calls
 *
 * @param app delegete of application to return callbacks for call
 * @param terminator address of callee
 * @param completion block
 * @return call to establish call
 * @since 3.1.4
 */
- (void) createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
              andTerminator:(nonnull SMUriAddress *)terminator
                 completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;

/**
 * @brief This method creates Three Way Call.
 * For now this api just supports to merge two calls.
 *
 * @param app delegete of application to return callbacks for call
 * @param firstCallId specifies the first call which will be joined to ThreeWay Call
 * @param secondCallId specifies the second call which will be joined to ThreeWay Call
 * @param completion block
 *
 * @since 4.4.8
 */
- (void) createThreeWayCall:(nonnull id <SMCallApplicationDelegate>) app
                firstCallId:(nonnull NSString *) firstCallId
               secondCallId:(nonnull NSString *) secondCallId
                 completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;

/**
 @brief Rotates camera to specified orientation.
 Calling this method with parameters UIDeviceOrientationUnknown, UIDeviceOrientationFaceUpand UIDeviceOrientationFaceDown will not cause any changes on the camera.
 
 @param orientation  UIDeviceOrientation value that will be used for camera orientation.
 
 @since 5.14.0
 */
-(void) rotateCameraWithOrientation:(UIDeviceOrientation) orientation;

/**
 * @brief Rotates camera to specified orientation
 *
 * @param orientation AVCaptureVideoOrientation value that will be used for camera orientation
 * @since 2.0.0
 */
-(void) rotateCameraOrientationToPosition:(AVCaptureVideoOrientation) orientation __deprecated_msg("Use rotateCameraWithOrientation: instead");

/**
 * Returns the active call objects.
 *
 * @return Immutable call list
 * @since 4.0
 */
- (nonnull NSArray<id<SMCallDelegate>> *) getActiveCalls;
@end
