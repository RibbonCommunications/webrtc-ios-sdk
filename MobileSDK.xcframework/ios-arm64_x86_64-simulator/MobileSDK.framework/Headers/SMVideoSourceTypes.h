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
* SMVideoSourceTypes.h
*
* @version: 6.31.0
*
*/

/**
 * @brief Enums that handle VideoSourceType in SDK.
 * MobileSDK supports multiple video source types. CAMERA is the default video source type.
 * Alternatively, applications can select EXTERNAL_VIDEO and insert video frames as their desire.
 * If EXTERNAL_VIDEO is chosen as the video source type, application must provide frames by using setExternalVideoSource API.
 *
 * @since 6.4.0
*/
typedef NS_ENUM(NSInteger, SMVideoSourceTypes) {
    
    CAMERA NS_SWIFT_NAME(camera),
    
    EXTERNAL_VIDEO NS_SWIFT_NAME(externalVideo),

};
