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
* SMRegistrationStates.h
*
* @version: 6.25.2
*
*/

/**
 * @brief enum class for Registration States
 * This enum will no longer be available in version 6.11.0.
 * <p>To find out the registration status of the SDK,
 * use {@link SMRegistrationApplicationDelegate#registrationDropped(MobileError)} instead.</p>
 *
 * - UNREGISTERED
 * - REGISTERED
 *
 * @since 2.0.0
 */
typedef NS_ENUM(NSInteger, SMRegistrationStates) {
    /**
     * @brief Device registration is removed either by callling unregister method or being dropped on server.
     * Registration state can be changed to unregistered in anytime if server drops registration.
     */
    UNREGISTERED NS_SWIFT_NAME(unregistered),
    
    /**
     * @brief Device registration is created on server side by REST request. Until unregister method is called, device will be tried to
     * stay in REGISTERED state even if it is dropped by server.
     */
    REGISTERED NS_SWIFT_NAME(registered)
} DEPRECATED_MSG_ATTRIBUTE("This API will be deprecated. Use registrationDropped(MobileError)");
