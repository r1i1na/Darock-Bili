//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTagDispatcher_h
#define HMMTagDispatcher_h
@import Foundation;

#include "HMMTagDispatching-Protocol.h"

@class NSMutableDictionary, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

@interface HMMTagDispatcher : NSObject<HMMTagDispatching>

@property (retain, nonatomic) NSMutableDictionary *tagObservers;
@property (retain, nonatomic) NSPointerArray *allTagProcessors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long nextStaleCheckTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWorkQueue:(id)queue;
- (id)initWithWorkQueue:(id)queue startTime:(long long)time;
- (void)registerTagObserver:(id)observer forTags:(id)tags;
- (void)unregisterTagObserver:(id)observer forTags:(id)tags;
- (void)submitTaggedEvent:(id)event processorList:(id)list;
@end

#endif /* HMMTagDispatcher_h */