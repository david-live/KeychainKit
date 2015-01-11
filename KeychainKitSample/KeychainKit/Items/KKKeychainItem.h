//
//  KKKeychainItem.h
//  KeychainKitSample
//
//  Created by david on 17/12/14.
//  Copyright (c) 2014 David Live Org. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KKKeychainItemAccessibility) {
    KKKeychainItemAccessibleAlways,
    KKKeychainItemAccessibleAlwaysThisDeviceOnly,
    KKKeychainItemAccessibleAfterFirstUnlock,
    KKKeychainItemAccessibleAfterFirstUnlockThisDeviceOnly,
    KKKeychainItemAccessibleWhenUnlocked,
    KKKeychainItemAccessibleWhenUnlockedThisDeviceOnly,
    KKKeychainItemAccessibleWhenPasscodeSetThisDeviceOnly
} NS_ENUM_AVAILABLE_IOS(8_0);

@interface KKKeychainItem : NSObject

@property (nonatomic, strong, readonly) NSData                          *data;
@property (nonatomic, strong, readonly) NSString                        *label;
@property (nonatomic, strong, readonly) NSString                        *accessGroup;
@property (nonatomic, assign, readonly) KKKeychainItemAccessibility     accessbility NS_AVAILABLE_IOS(8_0);

@end