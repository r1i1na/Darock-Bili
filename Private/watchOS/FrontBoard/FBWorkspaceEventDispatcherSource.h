//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBWorkspaceEventDispatcherSource_h
#define FBWorkspaceEventDispatcherSource_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class BSSimpleAssertion, NSMutableDictionary, NSSet, NSString, RBSProcessHandle;

@interface FBWorkspaceEventDispatcherSource : NSObject<BSInvalidatable> {
  /* instance variables */
  BSSimpleAssertion *_underlyingAssertion;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSSet *_lock_remnants;
  NSMutableDictionary *_lock_requestsByTargetIdentifier;
}

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)_initWithProcessHandle:(id)handle underlyingAssertion:(id)assertion;
- (void)noteHandshakeWithRemnants:(id)remnants;
- (id)consumeRemnantsPassingTest:(id /* block */)test;
- (void)enqueueSceneRequest:(id)request;
- (id)dequeueSceneRequestsForTargetIdentifier:(id)identifier;
- (id)init;
- (void)invalidate;
@end

#endif /* FBWorkspaceEventDispatcherSource_h */