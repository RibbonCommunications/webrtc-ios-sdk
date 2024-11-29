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
* SMMediaAttributes.h
*
* @version: 6.32.0
*
*/

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

/**
 * @brief class for media attributes of a Call
 * localVideo, holds boolean value that if the local video is activated for sending
 * remoteVideo, holds boolean value that if the remote video is receiving
 * localAudio, holds boolean value that local audio is activated for sending
 * captureDevicePosition, position of active capture device
 * remoteVideoAspectRatio, holds float value that remote video aspect ratio
 * localVideoAspectRation, holds float value that local video aspect ratio
 *
 * @since 2.0.0
 * @modified 4.0.1
 */
__attribute__((objc_runtime_name("SWIFTSMMediaAttributes")))
@interface SMMediaAttributes : NSObject

/**
 * @brief boolean value that if the local video is activated for sending
 * @return BOOL
 * @since 3.0.5
 */
@property (nonatomic) BOOL localVideo;

/**
 * @brief boolean value that if the remote video is receiving
 * @return BOOL
 * @since 3.0.5
 */
@property (nonatomic, readonly) BOOL remoteVideo;

/**
 * @brief boolean value that local audio is activated for sending
 * @return BOOL
 * @since 3.0.5
 */
@property (nonatomic) BOOL localAudio;

/**
 * @brief defines width/height of remote video
 * @return float value that remote video aspect ratio
 * @since 4.0.1
 */
@property (nonatomic, readonly) float remoteVideoAspectRatio;

/**
 * @brief defines width/height of local video
 * @return float value that local video aspect ratio
 * @since 4.0.1
 */
@property (nonatomic, readonly) float localVideoAspectRatio;


@end
