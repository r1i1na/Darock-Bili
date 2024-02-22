//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef RCDebugOverrides_h
#define RCDebugOverrides_h
@import Foundation;

#include "RCSerializable-Protocol.h"

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject<RCSerializable>

@property (readonly, nonatomic) BOOL disableAbTesting;
@property (readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs;
@property (readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs;
@property (readonly, nonatomic) BOOL onlyUseFallbackURL;
@property (readonly, nonatomic) unsigned long long configurationSource;
@property (readonly, nonatomic) unsigned long long debugEnvironment;
@property (readonly, nonatomic) BOOL ignoreCache;
@property (readonly, nonatomic) BOOL enableExtraLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultDebugOverrides;

/* instance methods */
- (id)initWithDisableAbTesting:(BOOL)testing overrideSegmentSetIDs:(id)ids additionalSegmentSetIDs:(id)ids onlyUseFallbackURL:(BOOL)url debugEnvironment:(unsigned long long)environment;
- (id)initWithDisableAbTesting:(BOOL)testing overrideSegmentSetIDs:(id)ids additionalSegmentSetIDs:(id)ids configurationSource:(unsigned long long)source debugEnvironment:(unsigned long long)environment ignoreCache:(BOOL)cache;
- (id)initWithDisableAbTesting:(BOOL)testing overrideSegmentSetIDs:(id)ids additionalSegmentSetIDs:(id)ids configurationSource:(unsigned long long)source debugEnvironment:(unsigned long long)environment ignoreCache:(BOOL)cache enableExtraLogs:(BOOL)logs;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* RCDebugOverrides_h */