


#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

/**
 * @brief class for media attributes of a Call
 *
 * @version: 6.23.0
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
