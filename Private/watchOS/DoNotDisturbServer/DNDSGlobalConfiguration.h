//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSGlobalConfiguration_h
#define DNDSGlobalConfiguration_h
@import Foundation;

#include "DNDSBackingStoreRecord-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class DNDBypassSettings, NSDate, NSString;

@interface DNDSGlobalConfiguration : NSObject<DNDSBackingStoreRecord, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long preventAutoReply;
@property (readonly, copy, nonatomic) DNDBypassSettings *bypassSettings;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) BOOL automaticallyGenerated;
@property (readonly, nonatomic) unsigned long long modesCanImpactAvailability;

/* class methods */
+ (id)backingStoreWithFileURL:(id)url;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)dictionaryRepresentationWithContext:(id)context;
- (id)init;
- (id)initWithPreventAutoReply:(unsigned long long)reply bypassSettings:(id)settings modesCanImpactAvailability:(unsigned long long)availability lastModified:(id)modified automaticallyGenerated:(BOOL)generated;
- (id)_initWithConfiguration:(id)configuration;
- (id)mergeWithGlobalConfiguration:(id)configuration;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isAutomaticallyGenerated;
@end

#endif /* DNDSGlobalConfiguration_h */