//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMComputeXPCPublisherServer_h
#define BMComputeXPCPublisherServer_h
@import Foundation;

#include "BMComputePublisher-Protocol.h"
#include "BMComputeSubscriptionMarkerManager.h"
#include "BMComputeXPCPublisherServerDelegate-Protocol.h"
#include "BMComputeXPCPublisherStorage.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface BMComputeXPCPublisherServer : NSObject<BMComputePublisher, NSXPCListenerDelegate>

@property (copy, nonatomic) id /* block */ activationCompletion;
@property (readonly, nonatomic) NSMutableArray *subscriptions;
@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, weak, nonatomic) NSObject<BMComputeXPCPublisherServerDelegate> *delegate;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *systemStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *userStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *storage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) BMComputeSubscriptionMarkerManager *subscriptionMarkerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue domain:(unsigned long long)domain delegate:(id)delegate;
- (id)initWithQueue:(id)queue listener:(id)listener domain:(unsigned long long)domain delegate:(id)delegate computePublisherStreamName:(id)name;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)subscribe:(id)subscribe;
- (void)unsubscribeWithIdentifier:(id)identifier;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_handlePublisherAction:(unsigned int)action token:(unsigned long long)token descriptor:(id)descriptor;
- (void)_addSubscription:(id)subscription;
- (void)_removeSubscriptionWithToken:(unsigned long long)token;
- (void)_removeSubscriptionWithIdentifier:(id)identifier client:(id)client;
- (void)_removeActiveSubscriptionMarkersForSubscription:(id)subscription;
- (id)subscriptionsForStream:(id)stream;
- (void)receiveInputForSubscription:(id)subscription streamIdentifier:(id)identifier storeEvent:(id)event;
@end

#endif /* BMComputeXPCPublisherServer_h */