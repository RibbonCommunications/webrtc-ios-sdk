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
* SMNotificationStates.h
*
* @version: 6.24.0
*
*/

/**
 * @brief enum class for Notification States
 *
 * - CONNECTED
 * - DISCONNECTED
 *
 * @since 2.0.0
 */
typedef NS_ENUM(NSInteger, SMNotificationStates) {
    /**
     * @brief Notification component is disconnected and not able to receive the server notifications.
     * Notification component can be disconnected in anytime however it will be tried to connect automatically
     * until unregistration is done or network is lost.
     */
    DISCONNECTED NS_SWIFT_NAME(disconnected),
    
    /**
     * @brief Notification component is connected and able to receive the server notifications.
     * Notification component can be disconnected in anytime however it will be tried to connect automatically
     * until unregistration is done or network is lost.
     *
     */
    CONNECTED NS_SWIFT_NAME(connected)
};
