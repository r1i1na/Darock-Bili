//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNCacheFixedCapacityBoundingStrategy_h
#define _CNCacheFixedCapacityBoundingStrategy_h
@import Foundation;

#include "CNCacheBoundingStrategy-Protocol.h"
#include "CNQueue.h"

@class NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject<CNCacheBoundingStrategy>

@property (readonly, nonatomic) CNQueue *keys;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)willUpdateCacheBy:(unsigned long long)by forKey:(id)key keysToEvict:(id *)evict;
- (BOOL)shouldEvictKey:(id)key;
- (void)willAccessKey:(id)key;
@end

#endif /* _CNCacheFixedCapacityBoundingStrategy_h */