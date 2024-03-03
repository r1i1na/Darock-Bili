//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPersonResidentSyncManager_h
#define HMDPersonResidentSyncManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDPersonResidentSyncManagerDelegate-Protocol.h"
#include "HMDResidentSyncManager.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"

@class HMFMessageDispatcher, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDPersonResidentSyncManager : HMFObject<HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDResidentSyncManager *residentSyncManager;
@property (weak) NSObject<HMDPersonResidentSyncManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithUUID:(id)uuid messageDispatcher:(id)dispatcher workQueue:(id)queue residentSyncManager:(id)manager;
- (void)configureWithHome:(id)home delegate:(id)delegate;
- (id)addOrUpdatePersons:(id)persons;
- (id)removePersonsWithUUIDs:(id)uuids;
- (id)addOrUpdatePersons:(id)persons andRemovePersonsWithUUIDs:(id)uuids;
- (id)removeAllAssociatedData;
- (void)handleModifyPersonsMessage:(id)message;
- (void)handleRemoveAllAssociatedDataMessage:(id)message;
- (id)logIdentifier;
@end

#endif /* HMDPersonResidentSyncManager_h */