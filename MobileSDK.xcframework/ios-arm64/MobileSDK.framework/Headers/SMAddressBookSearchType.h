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
* SMAddressBookSearchTypes.h
*
* @version: 6.25.0
*
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief The variable type that will be used to search the global address book.
 * SearchTypeParameter can be the following integer values:
 *
 * - SEARCHTYPE_FIRSTNAME
 * - SEARCHTYPE_LASTNAME
 * - SEARCHTYPE_NAME
 * - SEARCHTYPE_PHONENUMBER
 * - SEARCHTYPE_USERNAME
 *
 * @since 2.0.0
 **/
typedef NS_ENUM(NSInteger, SMAddressBookSearchTypes) {
    /** First name will be used to search the global address book*/
    SEARCHTYPE_FIRSTNAME NS_SWIFT_NAME(firstName) = 1,
    
    /** Last name will be used to search the global address book*/
    SEARCHTYPE_LASTNAME NS_SWIFT_NAME(lastName) = 2,
    
    /** Name will be used to search the global address book*/
    SEARCHTYPE_NAME NS_SWIFT_NAME(name) = 3,
    
    /** Phone number will be used to search the global address book*/
    SEARCHTYPE_PHONENUMBER NS_SWIFT_NAME(phoneNumber) = 4,
    
    /** User name will be used to search the global address book*/
    SEARCHTYPE_USERNAME NS_SWIFT_NAME(userName) = 5
};

/**
 * @brief This class defines event types of AddressBook
 * @since 2.0.0
 */
@interface SMAddressBookSearchType : NSObject

/**
 * This methods converts AddressBookSearchTypes to NSString
 * @param type AddressBookSearchTypes
 * @return NSString
 * @since 2.0.0
 */
+(NSString *)getAddressBookSearchType:(SMAddressBookSearchTypes)type;

NS_ASSUME_NONNULL_END

@end
