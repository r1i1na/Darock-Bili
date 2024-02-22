//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCGlobalHTTPProxyPayload_h
#define MCGlobalHTTPProxyPayload_h
@import Foundation;

#include "MCPayload.h"

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload

@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum;
@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyServerPort;
@property (retain, nonatomic) NSString *proxyUsername;
@property (retain, nonatomic) NSString *proxyPassword;
@property (retain, nonatomic) NSString *proxyPACURLString;
@property (nonatomic) BOOL proxyPACFallbackAllowed;
@property (nonatomic) BOOL proxyCaptiveLoginAllowed;
@property (retain, nonatomic) NSString *credentialUUID;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)payloadDescriptionKeyValueSections;
- (id)verboseDescription;
- (id)installationWarnings;
@end

#endif /* MCGlobalHTTPProxyPayload_h */