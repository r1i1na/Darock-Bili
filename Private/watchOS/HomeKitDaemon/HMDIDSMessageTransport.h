//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDIDSMessageTransport_h
#define HMDIDSMessageTransport_h
@import Foundation;

#include "HMDRemoteMessageTransport.h"
#include "HMDAppleAccountManager.h"
#include "HMDIDSService-Protocol.h"
#include "HMDIDSServiceDelegate-Protocol.h"
#include "HMDRemoteAccountManager.h"

@class HMFOperationBudget, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport<HMDIDSServiceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) NSMutableArray *messageContexts;
@property (readonly) HMFOperationBudget *sendMessageBudget;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponses;
@property (readonly, nonatomic) NSMutableDictionary *receivedResponses;
@property (readonly, nonatomic) NSMutableDictionary *requestedCapabilities;
@property (readonly, nonatomic) NSMutableDictionary *destinationAddress;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponseTimers;
@property (readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer;
@property (readonly, nonatomic) BOOL legacyTransport;
@property (readonly, nonatomic) NSObject<HMDIDSService> *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)restriction;
+ (long long)priorityForMessage:(id)message;
+ (unsigned long long)sendMessageLimit;
+ (struct _HMFRate { unsigned long long x0; double x1; })sendMessageRate;
+ (id)logCategory;
+ (id)queueOneIdentifierWithMessageName:(id)name target:(id)target collapseID:(id)id timeToLive:(double)live now:(id)now;

/* instance methods */
- (id)initWithAccountRegistry:(id)registry;
- (id)initLegacyTransportWithAccountRegistry:(id)registry;
- (id)initLegacyTransportWithAccountRegistry:(id)registry service:(id)service appleAccountManager:(id)manager remoteAccountManager:(id)manager;
- (id)initWithAccountRegistry:(id)registry service:(id)service appleAccountManager:(id)manager remoteAccountManager:(id)manager;
- (id)start;
- (long long)qualityOfService;
- (id)logIdentifier;
- (id)deviceForSenderContext:(id)context;
- (BOOL)isSecure;
- (BOOL)canSendMessage:(id)message;
- (BOOL)isValidMessage:(id)message;
- (int)transportType;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (id)sendMessage:(id)message fromHandle:(id)handle destination:(id)destination priority:(long long)priority timeout:(double)timeout options:(unsigned long long)options queueOneID:(id)id error:(id *)error;
- (void)_restartPendingResponseTimerFor:(id)for withReducedFactor:(unsigned long long)factor;
- (void)_pendingResponseTimeoutFor:(id)for;
- (void)_startPendingResponseTimer:(id)timer responseTimeout:(double)timeout identifier:(id)identifier;
- (void)_removePendingResponseTimerForTransaction:(id)transaction;
- (void)_removePendingResponseTransaction:(id)transaction;
- (BOOL)shouldAcceptLegacyIDSMessage:(id)idsmessage;
- (BOOL)_shouldProcessLegacyIDSMessageFromID:(id)id context:(id)context message:(id *)message service:(id)service;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
- (void)legacyHandleIncomingRemoteMessage:(id)message sourceDevice:(id)device senderDeviceHandle:(id)handle isSecure:(BOOL)secure incomingMessage:(id)message fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error context:(id)context;
- (BOOL)isLegacyTransport;
@end

#endif /* HMDIDSMessageTransport_h */