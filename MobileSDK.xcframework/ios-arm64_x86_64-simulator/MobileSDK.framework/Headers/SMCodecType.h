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
* SMCodecType.h
*
* @version: 6.32.0
*
*/

/**
 * @brief Codec types for the supported codecs of WebRTC
 * - VIDEO_CODEC
 * @since 5.17.0
 */
typedef NS_ENUM(NSInteger, SMCodecType) {
    
    /** Video type that represents video codecs */
    VIDEO_CODEC NS_SWIFT_NAME(videoCodec),
    
    /// Audio type that represents audio codecs
    //AUDIO NS_SWIFT_NAME(audio)
    
    /// All type that represents both codecs video and audio
    //ALL NS_SWIFT_NAME(all)
};
