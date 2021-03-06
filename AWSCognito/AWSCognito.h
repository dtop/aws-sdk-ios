//
// Copyright 2014-2016 Amazon.com,
// Inc. or its affiliates. All Rights Reserved.
//
// SPDX-License-Identifier: Apache-2.0
//

#import <Foundation/Foundation.h>

/*!
 Project version number for the AWSCognito framework.

 @warning This value is deprecated and will be removed in an upcoming minor
 version of the SDK. It conflicts with the umbrella header generated by
 CocoaPods, and is not implemented at all in cases where this SDK is imported
 as a CocoaPod static library. As this numeric value does not support
 patch-level versioning, you should use AWSCognitoSDKVersion instead.
 @deprecated Use AWSCognitoSDKVersion instead.
 */
FOUNDATION_EXPORT double AWSCognitoVersionNumber DEPRECATED_MSG_ATTRIBUTE("Use AWSCognitoSDKVersion instead.");

/*!
 Project version string for the AWSCognito framework.

 @warning This value is deprecated and will be removed in an upcoming minor
 version of the SDK. It conflicts with the umbrella header generated by
 CocoaPods, and is not implemented at all in cases where this SDK is imported
 as a CocoaPod static library.
 @deprecated Use AWSCognitoSDKVersion instead.
 */
FOUNDATION_EXPORT const unsigned char AWSCognitoVersionString[] DEPRECATED_MSG_ATTRIBUTE("Use AWSCognitoSDKVersion instead.");

#import "AWSCognitoService.h"
#import "AWSCognitoDataset.h"
#import "AWSCognitoRecord.h"
#import "AWSCognitoHandlers.h"
#import "AWSCognitoConflict.h"
#import "AWSCognitoSyncService.h"
