//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef ENGroupContextInMemoryCache_h
#define ENGroupContextInMemoryCache_h
@import Foundation;

#include "ENGroupContextCacheMiddleware-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ENGroupContextInMemoryCache : NSObject<ENGroupContextCacheMiddleware>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *groupIDtoGroup;
@property (retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (long long)middlewareCacheCostForContext:(id)context;
- (void)groupContext:(id)context cacheGroup:(id)group completion:(id /* block */)completion;
- (void)deleteAllKnownGroupsForGroupContext:(id)context completion:(id /* block */)completion;
- (void)deleteCachedValueForForGroupContext:(id)context withGroupID:(id)id completion:(id /* block */)completion;
- (void)groupContext:(id)context cachedGroupWithID:(id)id completion:(id /* block */)completion;
- (void)groupContext:(id)context latestCachedGroupWithStableID:(id)id completion:(id /* block */)completion;
- (void)groupContext:(id)context fetchAllKnownGroups:(id /* block */)groups;
@end

#endif /* ENGroupContextInMemoryCache_h */