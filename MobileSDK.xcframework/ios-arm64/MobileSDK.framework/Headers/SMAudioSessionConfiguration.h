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
* SMAudioSessionConfiguration.h
*
* @version: 6.32.0
*
*/

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

/**
 * @brief This class is used to set WebRTC Audio Session Configuration.
 *
 * @since 4.2.0
 */
__attribute__((objc_runtime_name("SWIFTSMAudioSessionConfiguration")))
@interface SMAudioSessionConfiguration : NSObject

/**
 * Category of AudioSession.
 *
 * @since 4.2.0
 */
@property (nonatomic, strong) NSString *category;

/**
 * Category options of AudioSession.
 *
 * @since 4.2.0
 */
@property(nonatomic, assign) AVAudioSessionCategoryOptions categoryOptions;

/**
 * Mode of AudioSession.
 *
 * @since 4.2.0
 */
@property (nonatomic, strong) NSString *mode;

@end
