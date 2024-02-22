//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSAssertion_h
#define RBSAssertion_h
@import Foundation;

#include "RBSAssertionDescriptor.h"
#include "RBSAssertionIdentifier.h"
#include "RBSServiceLocalProtocol-Protocol.h"
#include "RBSTarget.h"

@class NSArray, NSHashTable, NSString;

@interface RBSAssertion : NSObject {
  /* instance variables */
  NSHashTable *_observers;
  id /* block */ _invalidationHandler;
  id /* block */ _warningHandler;
  NSObject<RBSServiceLocalProtocol> *_service;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
}

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) RBSTarget *target;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) BOOL valid;

/* instance methods */
- (id)init;
- (id)initWithExplanation:(id)explanation target:(id)target attributes:(id)attributes;
- (BOOL)acquireWithError:(out id *)error;
- (void)acquireWithInvalidationHandler:(id /* block */)handler;
- (BOOL)invalidateWithError:(out id *)error;
- (BOOL)invalidateSyncWithError:(out id *)error;
- (void)invalidate;
- (BOOL)isValid;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)setInvalidationHandler:(id /* block */)handler;
- (void)dealloc;
- (void)setExpirationWarningHandler:(id /* block */)handler;
- (id)description;
- (id)debugDescription;
- (id)_initWithServerValidatedDescriptor:(id)descriptor service:(id)service;
- (id)_initWithServerValidatedDescriptor:(id)descriptor;
- (id)_initWithDescriptor:(id)descriptor service:(id)service;
- (void)_serverInvalidateWithError:(id)error;
@end

#endif /* RBSAssertion_h */