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
* SMCodecSet.h
*
* @version: 6.31.0
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief enum class for supported audio codec types
 *
 * @since 3.0.5
 */
typedef NS_ENUM(NSInteger, SMAudioCodecTypes) {
    /** PCMA */
    AC_PCMA NS_SWIFT_NAME(PCMA),
    
    /** PCMU */
    AC_PCMU NS_SWIFT_NAME(PCMU),
    
    /** ISAC */
    AC_ISAC NS_SWIFT_NAME(ISAC),
    
    /** OPUS */
    AC_OPUS NS_SWIFT_NAME(OPUS),
    
    /** G722 */
    AC_G722 NS_SWIFT_NAME(G722),
    
    /** ILBC */
    AC_ILBC NS_SWIFT_NAME(ILBC)
};

/**
 * @brief enum class for supported video codec types
 *
 * @since 3.0.5
 */
typedef NS_ENUM(NSInteger, SMVideoCodecTypes) {
    /** VP8 */
    VC_VP8 NS_SWIFT_NAME(VP8),
    
    /** VP9 */
    VC_VP9 NS_SWIFT_NAME(VP9),
    
    /** H264 */
    VC_H264 NS_SWIFT_NAME(H264)
};

NS_ASSUME_NONNULL_BEGIN

/**
 * Represents Base Codec Object
 * @since 4.5.5
 */
__attribute__((objc_runtime_name("SWIFTSMCodec")))
@interface SMCodec : NSObject

@end

/**
 * Represents Audio Codec Object
 * @since 4.5.5
 */
__attribute__((objc_runtime_name("SWIFTSMAudioCodec")))
@interface SMAudioCodec: SMCodec

- (instancetype)init __attribute__((unavailable("Use static initializer withType:")));

/**
 * Returns Codec Type
 */
@property (nonatomic, readonly) SMAudioCodecTypes type;

/**
 * Initializes Video Codec Object with the given Video Codec Type.
 * @since 4.5.5
 */
+ (SMAudioCodec *)withType:(SMAudioCodecTypes)codecType;

@end

/**
 * Represents Video Codec Object
 * @since 4.5.5
 */
__attribute__((objc_runtime_name("SWIFTSMVideoCodec")))
@interface SMVideoCodec: SMCodec

- (instancetype)init __attribute__((unavailable("Use static initializer withType:")));

/**
 * Returns Codec Type
 */
@property (nonatomic, readonly) SMVideoCodecTypes type;

/**
 * Initializes Video Codec Object with the given Video Codec Type.
 * @since 4.5.5
 */
+ (SMVideoCodec *)withType:(SMVideoCodecTypes)codecType;

@end
NS_ASSUME_NONNULL_END

/**
 * @brief This class stores available audio and video codecs list
 * and also edits given SDP with preferred codecs for audio and video.
 *
 * @since 3.0.5
 */
__attribute__((objc_runtime_name("SWIFTSMCodecSet")))
@interface SMCodecSet : NSObject

/**
 * AudioCodecs stores available audio codecs list.
 *
 * @since 3.0.5
 */
@property (strong, nonatomic) NSArray<SMAudioCodec *> * _Nullable audioCodecs;

/**
 * VideoCodecs stores available video codecs list.
 *
 * @since 3.0.5
 */
@property (strong, nonatomic) NSArray<SMVideoCodec *> * _Nullable videoCodecs;

/**
 * Constructor method for SMCodecSet.
 *
 * @param audioCodecs preferred audio codecs list
 * @param videoCodecs preferred video codecs list
 *
 * @return SMCodecSet instance
 *
 * @since 3.0.5
 */
+ (nonnull SMCodecSet *)audioCodecs:(nullable NSArray<SMAudioCodec *> *)audioCodecs videoCodecs:(nullable NSArray<SMVideoCodec *> *)videoCodecs;

- (nonnull instancetype)init __attribute__((unavailable("Use static initWithAudioCodecs:videoCodecs initializer")));

@end

