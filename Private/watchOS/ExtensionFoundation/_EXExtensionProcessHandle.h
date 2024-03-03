//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXExtensionProcessHandle_h
#define _EXExtensionProcessHandle_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_EXExtensionProcessMannger.h"

@class BKSProcessAssertion, NSArray, NSHashTable, NSXPCListenerEndpoint, RBSAssertion, RBSProcessIdentity, _EXInternalHostConnection, _EXLaunchConfiguration;

@interface _EXExtensionProcessHandle : NSObject<NSSecureCoding> {
  /* instance variables */
  BOOL _invalidationLock_invalidated;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
}

@property (retain) NSArray *sandboxExtensions;
@property struct os_unfair_lock_s { unsigned int x0; } xpcConnectionLock;
@property (retain) NSHashTable *xpcConnections;
@property (weak) _EXExtensionProcessMannger *manager;
@property struct os_unfair_lock_s { unsigned int x0; } observersLock;
@property (retain) NSHashTable *observers;
@property (weak) _EXInternalHostConnection *internalConnection;
@property (readonly) _EXLaunchConfiguration *launchConfiguration;
@property (readonly) struct { unsigned int x0[8] } auditToken;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (readonly) int pid;
@property (readonly) RBSAssertion *launchAssertion;
@property (readonly) BKSProcessAssertion *assertion;
@property (readonly) RBSProcessIdentity *processIdentity;
@property (readonly, @dynamic) BOOL valid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLaunchConfiguration:(id)configuration auditToken:(struct { unsigned int x0[8] })token processIdentity:(id)identity sandboxExtensions:(id)extensions launchAssertion:(id)assertion;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)initWithCoder:(id)coder;
- (id)acquireAsertionWithError:(id *)error;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)makeXPCConnection;
- (id)makeSessionXPCConnection;
- (void)_handleAssertionInvalidation;
- (void)invalidate;
- (BOOL)isValid;
- (id)configuration;
- (id)makeXPCConnectionRetainProcess:(BOOL)process withError:(id *)error;
@end

#endif /* _EXExtensionProcessHandle_h */