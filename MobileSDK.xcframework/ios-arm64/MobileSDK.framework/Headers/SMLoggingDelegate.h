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
* SMLoggingDelegate.h
*
* @version: 6.30.0
*
*/

#import <Foundation/Foundation.h>

/**
 * @brief Utility class for LoggingDelegate. The application using the SDK must implement this delegate and assign an instance of this implementation to Logger property in the Configuration through the application's startup flow.
 **/
@protocol SMLoggingDelegate <NSObject>

/**
 * Main logging method defining the actual logging process
 * @param logLevel LogLevel which is used for checking logLevel
 * @param logContext NSString which includes package and class name
 * @param methodName SEL
 * @param logMessage NSString which includes log message
 *
 * @since 2.0.0
 **/
@required
-(void)log:(SMLogLevel)logLevel withLogContext:(nonnull NSString *)logContext withMethodName:(nullable SEL) methodName withMessage:(nonnull NSString*)logMessage;

@end
