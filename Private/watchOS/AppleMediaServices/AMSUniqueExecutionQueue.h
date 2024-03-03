//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSUniqueExecutionQueue_h
#define AMSUniqueExecutionQueue_h
@import Foundation;

#include "AMSPromise.h"

@protocol OS_dispatch_queue;

@interface AMSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionCallbacksQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain, nonatomic) AMSPromise *executionPromise;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)addCompletionBlock:(id /* block */)block;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)execution;
- (void)_beginExecutingBlockWithPromise:(id)promise;
- (id)_createExecutionPromise;
@end

#endif /* AMSUniqueExecutionQueue_h */