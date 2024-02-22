//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSUntilExitRegionStore_h
#define DNDSUntilExitRegionStore_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class CLRegion, NSArray, NSNumber;

@interface DNDSUntilExitRegionStore : NSObject<NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (readonly, copy, nonatomic) CLRegion *currentRegion;
@property (readonly, copy, nonatomic) NSNumber *regionEntered;
@property (readonly, copy, nonatomic) NSNumber *hasActiveLifetimes;

/* class methods */
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)_initWithStore:(id)store;
- (id)_initWithActiveLifetimeAssertionUUIDs:(id)uuids currentRegion:(id)region regionEntered:(id)entered;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSUntilExitRegionStore_h */