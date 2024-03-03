//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSecurityTimeLimitsDeclaration_h
#define CEMSecurityTimeLimitsDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"
#include "CEMSecurityTimeLimitsDeclaration_TimeLimits.h"

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSNumber *payloadFamilyControlsEnabled;
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_TimeLimits *payloadTimeLimits;
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
+ (id)buildWithIdentifier:(id)identifier withFamilyControlsEnabled:(id)enabled withTimeLimits:(id)limits;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withFamilyControlsEnabled:(id)enabled;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSecurityTimeLimitsDeclaration_h */