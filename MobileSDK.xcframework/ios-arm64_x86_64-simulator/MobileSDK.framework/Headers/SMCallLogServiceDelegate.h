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
* SMCallLogServiceDelegate.h
*
* @version: 6.35.0
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief Calllog service delegate
 * @since 2.0.0
 */
@protocol SMCallLogServiceDelegate <NSObject>

/**
 * This method removes the call log.
 * @param calllogId NString
 * @since 2.0.0
 */
- (void) remove:(NSString *)calllogId;

/**
 * Remove all call logs
 * @since 2.0.0
 */
- (void) removeAll;

/**
 * This method returns call logs with beginning the given startIndex to the count size .
 * @param startIndex int
 * @param count int
 * @return CallLogEntry NSMutableArray
 * @since 2.0.0
 */
- (NSMutableArray *) retrieve:(int)startIndex andCount:(int)count;

/**
 * This method returns all call logs
 * @return NSMutableArray CallLogEntry
 * @since 2.0.0
 */
- (NSMutableArray *) retrieveAll;
@end
