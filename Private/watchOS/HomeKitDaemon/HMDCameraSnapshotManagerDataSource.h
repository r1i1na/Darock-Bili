//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotManagerDataSource_h
#define HMDCameraSnapshotManagerDataSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraSnapshotManagerDataSource-Protocol.h"

@class NSString;

@interface HMDCameraSnapshotManagerDataSource : HMFObject<HMDCameraSnapshotManagerDataSource>

@property (readonly) BOOL supportsCameraSnapshotRequestViaRelay;
@property (readonly) BOOL watchDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isWatchDevice;
- (id)createSnapshotLocalWithSessionID:(id)id workQueue:(id)queue accessory:(id)accessory delegate:(id)delegate delegateQueue:(id)queue snapshotRequestHandler:(id)handler;
- (id)createSnapshotRemoteRelayReceiverWithSessionID:(id)id workQueue:(id)queue accessory:(id)accessory delegate:(id)delegate delegateQueue:(id)queue uniqueIdentifier:(id)identifier snapshotRequestHandler:(id)handler residentMessageHandler:(id)handler remoteDevice:(id)device;
- (id)createLocalSnapshotSessionWithID:(id)id accessory:(id)accessory snapshotGetter:(id)getter message:(id)message waitPeriod:(double)period reachabilityPath:(unsigned long long)path cameraLocallyReachable:(BOOL)reachable snapshotForNotification:(BOOL)notification;
@end

#endif /* HMDCameraSnapshotManagerDataSource_h */