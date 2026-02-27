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
* SMContact.h
*
* @version: 6.42.0
*
*/

#import <Foundation/Foundation.h>

@class SMUriAddress;

/**
 * @brief Basic Entity Class for contact.
 * @since 2.0.0
 */
@interface SMContact : NSObject

/**
 * Source of contact such as WebRTC GW, Facebook, LinkedIn .. etc.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* sources;

/**
 * Email address of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* emailAddress;

/**
 * Unique identifier of the entry.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* entryId;

/**
 * Fax number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* fax;

/**
 * First name of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* firstName;

/**
 * Last name of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* lastName;

/**
 * Friend status of the user.
 * @since 2.0.0
 */
@property (nonatomic) BOOL friendStatus;

/**
 * Home phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* homePhone;

/**
 * Mobile phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* mobilePhone;

/**
 * Name of the user as it will appear for a personal contact.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* nickName;

/**
 * Pager number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* pager;

/**
 * URL from which to retrieve the picture of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* photoUrl;

/**
 * User's primary contact number (this should be prefered number for contacting the user).
 * @since 2.0.0
 */
@property (strong, nonatomic, nonnull) SMUriAddress* primaryContact;

/**
 * Work phone number of the user.
 * @since 2.0.0
 */
@property (strong, nonatomic, nullable) NSString* workPhone;

/**
 * Constructor method with NSDictionary
 * @param dictionary Contact information dictionary
 * @since 2.0.0
 */
- (id) initWithDictionary:(nonnull NSDictionary *) dictionary;
@end
