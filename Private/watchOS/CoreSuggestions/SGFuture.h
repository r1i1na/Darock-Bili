//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGFuture_h
#define SGFuture_h
@import Foundation;

@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject {
  /* instance variables */
  NSObject *_result;
  NSError *_error;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
  NSObject<OS_dispatch_queue> *_callbacks;
  NSObject<OS_dispatch_source> *_timeoutTimer;
  BOOL _alwaysUseCallbacksQueue;
  BOOL _yoDontLeaveMeHangingBro;
  NSObject *_parentObject;
  void * _parentObjectKey;
}

@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

/* class methods */
+ (id)futureForObject:(id)object withKey:(void *)key onCreate:(id /* block */)create;
+ (id)createAfter:(id)after onCreate:(id /* block */)create;
+ (id)createWithImmediateResult:(id)result error:(id)error;
+ (id)createWithImmediateResult:(id)result;
+ (id)createWithImmediateError:(id)error;
+ (void)waitForFuturesToComplete:(id)complete withCallback:(id /* block */)callback;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setTargetQueue:(id)queue useAfterCompletion:(BOOL)completion;
- (id)wait;
- (void)wait:(id /* block */)wait;
- (void)_wait:(id /* block */)_wait forSyncAPI:(BOOL)api;
- (id)result;
- (id)error;
- (BOOL)succeed:(id)succeed;
- (BOOL)fail:(id)fail;
- (BOOL)completeWithResult:(id)result error:(id)error;
- (id /* block */)completer;
- (BOOL)_finishWithResult:(id)result orError:(id)error;
- (void)setTimeout:(double)timeout;
- (void)clearTimeout;
- (void)_clearTimeoutNonThreadSafe;
- (id)waitWithTimeout:(double)timeout;
- (void)disassociateFromParentObject;
@end

#endif /* SGFuture_h */