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
* SMUriAddress.h
*
* @version: 6.39.0
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief  An UriAddress is used to indicate the originator of a request, the
 * destination of a request, and to specify any redirections of the
 * request.
 * @since 2.0.0
 **/
__attribute__((objc_runtime_name("SWIFTSMUriAddress")))
@interface SMUriAddress : NSObject

/**
 * The username to include in this address.
 * @since 2.0.0
 */
@property (strong,nonatomic,nonnull) NSString * userName;

/**
 * The network domain to include in this address.
 * @since 2.0.0
 */
@property (strong,nonatomic,nonnull) NSString * domain;

/**
 * Constructor method for UriAddress.
 * @param primaryContact address of user
 * @return UriAddress instance
 * @since 2.0.0
 */
-(nonnull SMUriAddress *) initWithPrimaryContact:(nonnull NSString *) primaryContact;

/**
 * Constructor method for UriAddress.
 * @param userName name of the user
 * @param domain domain of the user
 * @return UriAddress instance
 * @since 2.0.0
 */
- (nonnull SMUriAddress *) initWithUsername :(nonnull NSString *) userName withDomain:(nullable NSString *)domain;

/**
 * Static constructor method for UriAddress.
 * @param userName name of the user
 * @param domain domain of the user
 * @return UriAddress instance
 * @since 3.0.1
 */
+ (nonnull SMUriAddress *) uriAddressWithUsername :(nonnull NSString *) userName withDomain:(nullable NSString *)domain;

/**
 * Retrieve the URI of an address.
 *
 * @return NSString format of xxx\@yyyy, where xxx is the
 * username or phonenumber and yyy is the domain
 * @since 2.0.0
 */
-(nonnull NSString *) getUri;
@end
