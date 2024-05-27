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
* SMCodecToReplace.h
*
* @version: 6.25.2
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief This is the model class to set the
 * custom payload numbers to given codecs in SDP.
 *
 * @since 4.5.8
 */
__attribute__((objc_runtime_name("SWIFTSMCodecToReplace")))
@interface SMCodecToReplace : NSObject

/**
 * Constructor for CodecToReplace class
 *
 * @param codecDefinition the codec that will be changed
 * @param payloadNumber new payload number that will be assigned to the codec,
 * as described in RFC5761 this should be chosen from the range 96-127.
 *
 * @remark If the payload number not set in the range @b 96-127, a @b nil object will return.
 * @since 4.5.8
 */
+ (nullable SMCodecToReplace *) createWithCodecDefinition:(NSString * _Nonnull)codecDefinition
                                         andPayloadNumber:(NSString * _Nonnull)payloadNumber;

/**
 * Constructor for CodecToReplace class
 *
 * @param codecDefinition the codec that will be changed
 * @param payloadNumber new payload number that will be assigned to the codec,
 * as described in RFC5761 this should be chosen from the range 96-127.
 * @param customProperties properties of the codec that should be
 * matched to original codec in order SDK to make the replace
 *
 * @remark If the payload number not set in the range @b 96-127, a @b nil object will return.
 * @since 4.5.8
 */
+ (nullable SMCodecToReplace *) createWithCodecDefinition:(NSString * _Nonnull)codecDefinition
                                            payloadNumber:(NSString * _Nonnull)payloadNumber
                                      andCustomProperties:(NSDictionary<NSString *, NSString *> * _Nullable)customProperties;

/**
 * Returns Codec Definition
 */
@property (nonatomic, readonly, nonnull) NSString *codecDefinition;

/**
 * Returns Codec Payload Number
 */
@property (nonatomic, readonly, nonnull) NSString *payloadNumber;

/**
 * Returns the Custom Codec Properties
 */
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSString *> *customProperties;

- (nonnull id) init __attribute__((unavailable("Use one of the static create methods")));

@end
