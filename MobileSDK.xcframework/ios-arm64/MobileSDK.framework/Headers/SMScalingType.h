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
* SMScalingType.h
*
* @version: 6.41.0
*
*/

/**
 * Enum class for local and remote video view scaling type
 *
 * @since 2.15.0
 */
typedef NS_ENUM(NSInteger, SMScalingType) {
    
    /// Scaling type is Aspect Ratio Fit
    SCALINGTYPE_ASPECT_RATIO_FIT NS_SWIFT_NAME(aspectRatioFit)                     = 1,
    
    /// Scaling type is Aspect Ratio Fit
    SCALINGTYPE_ASPECT_RATIO_FILL NS_SWIFT_NAME(aspectRatioFill)                   = 2
};

