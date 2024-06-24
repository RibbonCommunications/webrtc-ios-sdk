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
* SMSlowStartCallPolicy.h
*
* @version: 6.27.0
*
*/

/**
 * @brief enum class that specifies processing policy for slow-start events
 *
 * - AudioOnly
 * - AudioVideo
 *
 * @since 4.5.4
 */
typedef NS_ENUM(NSInteger, SMSlowStartCallPolicy) {
    /**
     * @brief  Processes slow-start events by supporting only audio.
     */
    AudioOnly NS_SWIFT_NAME(audioOnly),
    
    /**
     * @brief  Processes slow-start events by supporting audio and video.
     */
    AudioVideo NS_SWIFT_NAME(audioVideo)
};
