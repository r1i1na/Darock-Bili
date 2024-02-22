//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMPasscodeLockscreenSettingsDeclaration_h
#define CEMPasscodeLockscreenSettingsDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSNumber, NSString;

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSNumber *payloadAllowVoiceDialing;
@property (copy, nonatomic) NSNumber *payloadAllowAssistantWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenTodayView;
@property (copy, nonatomic) NSNumber *payloadAllowPassbookWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenNotificationsView;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenControlCenter;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenWiFiModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withAllowVoiceDialing:(id)dialing withAllowAssistantWhileLocked:(id)locked withAllowLockScreenTodayView:(id)view withAllowPassbookWhileLocked:(id)locked withAllowLockScreenNotificationsView:(id)view withAllowLockScreenControlCenter:(id)center withAllowLockScreenWiFiModification:(id)modification;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMPasscodeLockscreenSettingsDeclaration_h */