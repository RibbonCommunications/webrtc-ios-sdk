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
* SMICEOptions.h
*
* @version: 6.25.0
*
*/

/**
 * @brief enum class for ICE Options
 *
 * - ICE_VANILLA
 * - ICE_TRICKLE
 *
 * @since 4.1.0
 */

typedef NS_ENUM(NSInteger, SMICEOptions) {
    /**
     * @brief  Collects ICE candidates before initializing signaling.
     * Vanilla ICE requires candidate collection process, which may take time due to number of interfaces in client’s device and network setup conditions.
     * Vanilla ICE asks clients to sends all candidates in the offer and answer SDPs.This is causing call setup delays.
     * Each side waits for its own candidate collection interval.
     */
    ICE_VANILLA NS_SWIFT_NAME(vanilla),
    
    /**
     * @brief  Completes signaling without waiting for candidate collection.
     * Sends collected candidates to each other (as collection of candidates finished) after the call signaling is done and call is established.
     * This may be causing media delays.
     */
    ICE_TRICKLE NS_SWIFT_NAME(trickle)
};
