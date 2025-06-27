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
* SMAddressBookServiceDelegate.h
*
* @version: 6.35.0
*
*/

#import <Foundation/Foundation.h>
#import "SMAddressBookSearchType.h"
#import "SMAddressBookApplicationDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class represents a service for addressbook and directory.
 * @since 2.0.0
 */
@protocol SMAddressBookServiceDelegate <NSObject>

/**
 * Sets the handler to AddressBook retrieve.
 * @param app AddressBookApplicationDelegate
 * @since 2.0.0
 */
-(void) setAddressBookApplication:(id <SMAddressBookApplicationDelegate>) app;

/**
 * Retrieves the list of personal address book entries from the server.
 * @since 2.0.0
 */
- (void)retrieve;

/**
 * Searches the directory.
 * @param criteria NSString(text depending on the searchType)
 * @param searchType AddressBookSearchType
 * @since 2.0.0
 */
- (void)searchDirectory:(NSString *)criteria
                      andSearchType:(SMAddressBookSearchTypes)searchType;

@end

NS_ASSUME_NONNULL_END
