//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAssertPreparedFeedPersonalizer_h
#define FCAssertPreparedFeedPersonalizer_h
@import Foundation;

#include "FCFeedPersonalizing-Protocol.h"

@class NSString;

@interface FCAssertPreparedFeedPersonalizer : NSObject<FCFeedPersonalizing>

@property (readonly, nonatomic) NSObject<FCFeedPersonalizing> *target;
@property (nonatomic) BOOL preparedForUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithTarget:(id)target;
- (id)rankTagIDsDescending:(id)descending;
- (id)scoresForTagIDs:(id)ids;
- (void)prepareForUseWithCompletionHandler:(id /* block */)handler;
- (id)limitItemsByMinimumItemQuality:(id)quality;
- (id)limitItemsByFlowRate:(id)rate timeInterval:(double)interval publisherCount:(unsigned long long)count;
- (double)decayedPublisherDiversificationPenalty;
- (id)sortItems:(id)items options:(long long)options configurationSet:(long long)set;
- (void)fetchAggregateMapForPersonalizingItem:(id)item completion:(id /* block */)completion;
- (BOOL)isPreparedForUse;
@end

#endif /* FCAssertPreparedFeedPersonalizer_h */