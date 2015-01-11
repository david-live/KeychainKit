//
//  KKKeychainItem_KeychainKitInterface.h
//  KeychainKitSample
//
//  Created by david on 11/01/15.
//  Copyright (c) 2015 David Live Org. All rights reserved.
//

#import "KKKeychainItem.h"

@interface KKKeychainItem ()

// Object Life Cycle
- (instancetype)initWithData:(NSData *)data
                       label:(NSString *)label
                 accessGroup:(NSString *)accessGroup;
- (instancetype)initWithData:(NSData *)data
                       label:(NSString *)label
                 accessGroup:(NSString *)accessGroup
               accessibility:(KKKeychainItemAccessibility)accessibility NS_AVAILABLE_IOS(8_0);

// Keychain mapping
- (void)updateItemWithAttributes:(NSDictionary *)attributes;
- (NSDictionary *)keychainAttributesWithError:(NSError **)error;

@end
