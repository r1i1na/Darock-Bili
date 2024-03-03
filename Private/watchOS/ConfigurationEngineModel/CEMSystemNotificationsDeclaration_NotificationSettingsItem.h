//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSystemNotificationsDeclaration_NotificationSettingsItem_h
#define CEMSystemNotificationsDeclaration_NotificationSettingsItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSNumber, NSString;

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSNumber *payloadNotificationsEnabled;
@property (copy, nonatomic) NSNumber *payloadShowInNotificationCenter;
@property (copy, nonatomic) NSNumber *payloadShowInLockScreen;
@property (copy, nonatomic) NSNumber *payloadAlertType;
@property (copy, nonatomic) NSNumber *payloadBadgesEnabled;
@property (copy, nonatomic) NSNumber *payloadSoundsEnabled;
@property (copy, nonatomic) NSNumber *payloadShowInCarPlay;
@property (copy, nonatomic) NSNumber *payloadEmergencyEnabled;
@property (copy, nonatomic) NSNumber *payloadCriticalAlertEnabled;
@property (copy, nonatomic) NSNumber *payloadGroupingType;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:(id)identifier withNotificationsEnabled:(id)enabled withShowInNotificationCenter:(id)center withShowInLockScreen:(id)screen withAlertType:(id)type withBadgesEnabled:(id)enabled withSoundsEnabled:(id)enabled withShowInCarPlay:(id)play withEmergencyEnabled:(id)enabled withCriticalAlertEnabled:(id)enabled withGroupingType:(id)type;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)identifier;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSystemNotificationsDeclaration_NotificationSettingsItem_h */