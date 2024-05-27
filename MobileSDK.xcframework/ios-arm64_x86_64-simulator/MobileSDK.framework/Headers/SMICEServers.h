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
* SMICEServer.h
*
* @version: 6.26.0
*
*/

#import <Foundation/Foundation.h>

@class SMICEServer;

/**
 * @brief This class stores ice servers list, adds a new iceServer and  updates iceServer objects.
 *
 * @since 3.0.3
 */
__attribute__((objc_runtime_name("SWIFTSMICEServers")))
@interface SMICEServers : NSObject

/**
 * Constructor method for ICEServers.
 *
 * @param url URL address of the ICEServer
 *
 * @since 3.0.3
 */
- (void) addICEServer:(nonnull NSString *)url;

/**
 * Constructor method for ICEServers.
 *
 * @param url Url address of the ICEServer
 * @param username Username of the ICEServer
 * @param password Password of the ICEServer
 *
 * @since 3.0.3
 */
- (void) addICEServer:(nonnull NSString *)url
             username:(nonnull NSString *)username
             password:(nonnull NSString *)password;

/**
 * Returns iceServersArray.
 *
 * @return iceServersArray of ICEServers
 *
 * @since 3.0.3
 */
- (nullable NSArray<SMICEServer *> *)servers;

@end


/**
 * @brief This class stores url, username and password of stun or turn servers.
 *
 * @since 3.0.3
 */
__attribute__((objc_runtime_name("SWIFTSMICEServer")))
@interface SMICEServer : NSObject

/**
 * The url of iceServer.
 *
 * @since 3.0.3
 */
@property (strong, readonly, nonnull) NSString *url;

/**
 * The username of iceServer.
 *
 * @since 3.0.3
 */
@property (strong, readonly, nullable) NSString *username;

/**
 * The password of iceServer.
 *
 * @since 3.0.3
 */
@property (strong, readonly, nullable) NSString *password;

@end
