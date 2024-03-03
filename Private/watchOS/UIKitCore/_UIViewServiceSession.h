//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewServiceSession_h
#define _UIViewServiceSession_h
@import Foundation;

#include "NSXPCConnectionDelegate-Protocol.h"
#include "_UIAsyncInvocation.h"
#include "_UIViewServiceDeputyManager.h"
#include "_UIViewServiceDeputyManagerDelegate-Protocol.h"
#include "_UIViewServiceSessionManager.h"
#include "_UIViewServiceViewControllerOperatorDelegate-Protocol.h"

@class NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _UIViewServiceSession : NSObject<NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSXPCConnection *_connection;
  _UIViewServiceDeputyManager *_deputyManager;
  _UIAsyncInvocation *_invalidationInvocation;
}

@property (copy, nonatomic) id /* block */ terminationHandler;
@property (readonly, weak) _UIViewServiceSessionManager *manager;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)sessionWithConnection:(id)connection manager:(id)manager;

/* instance methods */
- (void)_objc_initiateDealloc;
- (void)dealloc;
- (void)deputyManager:(id)manager didUpdateExportedInterface:(id)interface;
- (void)connection:(id)connection handleInvocation:(id)invocation isReply:(BOOL)reply;
- (void)_invalidateUnconditionallyThen:(id /* block */)then;
- (void)deputy:(id)deputy didFailWithError:(id)error;
- (void)registerDeputyClass:(Class)class withConnectionHandler:(id /* block */)handler;
- (void)unregisterDeputyClass:(Class)class;
- (void)viewControllerOperator:(id)operator didCreateServiceViewControllerOfClass:(Class)class;
- (void)viewControllerOperator:(id)operator didCreateServiceViewController:(id)controller contextToken:(id)token;
- (BOOL)isExtensionServiceViewControllerOperator:(id)operator;
- (BOOL)requiresExtensionContextForViewControllerOperator:(id)operator;
- (id)viewControllerClassNameForViewControllerOperator:(id)operator;
- (id)containingViewControllerClassNameForViewControllerOperator:(id)operator;
- (id)mainStoryboardNameForViewControllerOperator:(id)operator;
@end

#endif /* _UIViewServiceSession_h */