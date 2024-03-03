//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef AAFKeychainItemDescriptor_h
#define AAFKeychainItemDescriptor_h
@import Foundation;

@class NSString;

@interface AAFKeychainItemDescriptor : NSObject

@property (nonatomic) unsigned long long itemClass;
@property (nonatomic) unsigned long long itemAccessible;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *server;
@property (copy, nonatomic) NSString *securityDomain;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) unsigned long long invisible;
@property (nonatomic) unsigned long long synchronizable;
@property (nonatomic) unsigned long long useDataProtection;
@property (nonatomic) unsigned long long sysBound;

/* instance methods */
- (id)initWithAttributes:(id)attributes;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)attributes;
- (id)_keychainClassWithClass:(unsigned long long)class;
- (unsigned long long)_classWithKeychainClass:(id)class;
- (id)_keychainAccessibleWithAccessible:(unsigned long long)accessible;
- (unsigned long long)_accessibleWithKeychainAccessible:(id)accessible;
- (unsigned long long)_optionalValueFromObject:(id)object;
- (id)_objectForOptionalBool:(unsigned long long)bool;
@end

#endif /* AAFKeychainItemDescriptor_h */