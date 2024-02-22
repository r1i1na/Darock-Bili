//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDModeAssertionService_h
#define DNDModeAssertionService_h
@import Foundation;

#include "DNDModeAssertion.h"
#include "DNDRemoteServiceConnectionEventListener-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDModeAssertionService : NSObject<DNDRemoteServiceConnectionEventListener> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_calloutQueue;
  NSHashTable *_assertionUpdateListeners;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForUpdates;
  DNDModeAssertion *_activeAssertion;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeAssertionLock;
  BOOL _activeAssertionQueried;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)identifier;

/* instance methods */
- (BOOL)addAssertionUpdateListener:(id)listener error:(id *)error;
- (BOOL)removeAssertionUpdateListener:(id)listener error:(id *)error;
- (id)_initWithClientIdentifier:(id)identifier;
- (id)takeModeAssertionWithDetails:(id)details error:(id *)error;
- (id)invalidateActiveModeAssertionWithError:(id *)error;
- (id)invalidateActiveModeAssertionWithInvalidationDetails:(id)details reasonOverride:(unsigned long long)override error:(id *)error;
- (id)activeModeAssertionWithError:(id *)error;
- (id)latestModeAssertionInvalidationWithError:(id *)error;
- (BOOL)invalidateAllActiveModeAssertionsWithError:(id *)error;
- (id)allModeAssertionsWithError:(id *)error;
- (void)addAssertionUpdateListener:(id)listener withCompletionHandler:(id /* block */)handler;
- (void)removeAssertionUpdateListener:(id)listener;
- (void)remoteService:(id)service didChangeActiveModeAssertion:(id)assertion invalidation:(id)invalidation;
- (void)_handleChangeActiveModeAssertion:(id)assertion invalidation:(id)invalidation;
- (void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(id /* block */)handler;
@end

#endif /* DNDModeAssertionService_h */