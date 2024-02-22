//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIUserNotificationSettings_h
#define UIUserNotificationSettings_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface UIUserNotificationSettings : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long types;
@property (readonly, copy, nonatomic) NSSet *categories;

/* class methods */
+ (id)settingsForUserNotificationTypes:(unsigned long long)types userNotificationActionSettings:(id)settings;
+ (id)settingsForTypes:(unsigned long long)types categories:(id)categories;
+ (id)settingsForRegisteredSettings:(id)settings requestedSettings:(id)settings;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUserNotificationTypes:(unsigned long long)types userNotificationActionSettings:(id)settings;
- (id)initWithTypes:(unsigned long long)types categories:(id)categories;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)mayPresentUserNotificationOfType:(unsigned long long)type;
- (id)description;
- (id)validatedSettings;
- (unsigned long long)allowedUserNotificationTypes;
- (id)userNotificationActionSettings;
@end

#endif /* UIUserNotificationSettings_h */