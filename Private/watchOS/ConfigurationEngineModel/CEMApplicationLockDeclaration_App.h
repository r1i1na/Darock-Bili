//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMApplicationLockDeclaration_App_h
#define CEMApplicationLockDeclaration_App_h
@import Foundation;

#include "CEMPayloadBase.h"
#include "CEMApplicationLockDeclaration_AppOptions.h"
#include "CEMApplicationLockDeclaration_AppUserEnabledOptions.h"

@class NSString;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppOptions *payloadOptions;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withOptions:(id)options withUserEnabledOptions:(id)options;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMApplicationLockDeclaration_App_h */