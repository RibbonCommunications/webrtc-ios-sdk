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
* SMAddressBookApplicationDelegate.h
*
* @version: 6.34.0
*
*/

#import <Foundation/Foundation.h>

@class SMMobileError;
@class SMContact;

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Represents events of AddressBook.
 * This protocol must be conformed by classes which uses AddressBookService
 * @since 2.0.0
 */
@protocol SMAddressBookApplicationDelegate <NSObject>

/**
 * This is the call back method for the retrieve addressbook.
 * This method is invoked when retrieve addressbook attempt is succeeded.
 * @param addressBook list of retrieved contacts
 * @see AddressBookServiceDelegate::retrieve:
 * @since 2.0.0
 */
-(void)retrieveSucceeded:(NSArray<SMContact *> *) addressBook;

/**
 * This is the call back method for the retrieve addressbook.
 * This method is invoked when retrieve addressbook attempt is failed.
 * @param error definition of failure
 * @see AddressBookServiceDelegate::retrieve:
 * @since 2.0.0
 */
-(void)retrieveFailed:(SMMobileError *) error;
/**
 * This is the call back method for the directory search in addressbook.
 * This method is invoked when directory search is succeeded.
 * @param directoryCount count of retrieved results
 * @param addressesList array of retrieved results
 * @see AddressBookServiceDelegate::searchDirectory:
 * @since 2.0.0
 */
-(void)searchDirectorySucceeded:(int) directoryCount
                        andList:(NSArray<SMContact *> *)addressesList;
/**
 * This is the call back method for the directory search in addressbook.
 * This method is invoked when directory search is failed.
 * @param error definiton of failure
 * @see AddressBookServiceDelegate::searchDirectory:
 * @since 2.0.0
 */
-(void)searchDirectoryFailed:(SMMobileError *) error;

NS_ASSUME_NONNULL_END

@end
