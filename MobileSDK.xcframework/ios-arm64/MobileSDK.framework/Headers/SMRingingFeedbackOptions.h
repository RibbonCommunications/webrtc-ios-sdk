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
* SMRingingFeedbackOptions.h
*
* @version: 6.26.0
*
*/

/**
 * Enum values for ringing feedback options
 *
 *APP   --> The application side should manage the ringing feedback operations.
 *SERVER --> Server based ringing feedback.
 *AUTO --> Auto ringing feedback mechanism by SDK.
 *
 * @since 5.15.0
 * @updated 2022-06-20
 **/

typedef NS_ENUM(NSInteger, SMRingingFeedbackOptions) {
    
    /** The application side should manage the ringing feedback operations. */
    APP NS_SWIFT_NAME(app),
    
    /** Server based ringing feedback. */
    SERVER NS_SWIFT_NAME(server),
    
    /** The SDK manages the ringing feedback operations. */
    AUTO NS_SWIFT_NAME(_auto),
};
