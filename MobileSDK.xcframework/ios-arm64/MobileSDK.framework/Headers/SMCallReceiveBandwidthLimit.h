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
* SMCallReceiveBandwidthLimit.h
*
* @version: 6.39.0
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief SMCallReceiveBandwidthLimit class can be used for setting
 * limitation to receive bandwidth.
 *
 * @since 4.6.1
 */
__attribute__((objc_runtime_name("SWIFTSMCallReceiveBandwidthLimit")))
@interface SMCallReceiveBandwidthLimit : NSObject

/**
 * audioReceiveBandwidth
 */
@property (nonatomic, strong) NSNumber * audioReceiveBandwidth;

/**
 * videoReceiveBandwidth
 */
@property (nonatomic, strong) NSNumber * videoReceiveBandwidth;

/**
 * Constructor method for SMCallReceiveBandwidthLimit.
 *
 * @param audioReceiveBandwidthLimit preferred audio bandwidth limit
 * @param videoReceiveBandwidthLimit preferred video bandwidth limit
 *
 * @return SMCallReceiveBandwidthLimit instance
 *
 * @since 4.6.1
 */
- (id) initWithAudioReceiveBandwidthLimit:(NSNumber *) audioReceiveBandwidthLimit withVideoReceiveBandwidthLimit:(NSNumber *) videoReceiveBandwidthLimit;

@end
