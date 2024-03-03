//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotRemoteRelayStream_h
#define HMDCameraSnapshotRemoteRelayStream_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraGetSnapshotProtocol-Protocol.h"
#include "HMDCameraSnapshotReceiverProtocol-Protocol.h"
#include "HMDCameraSnapshotRemoteRelayReceiver.h"
#include "HMDCameraSnapshotRemoteRelayReceiverDelegate-Protocol.h"
#include "HMDCameraSnapshotRemoteRelayStreamDelegate-Protocol.h"
#include "HMDCameraSnapshotRemoteStreamSender.h"
#include "HMDCameraSnapshotRemoteStreamSenderDelegate-Protocol.h"
#include "HMDCameraSnapshotSenderProtocol-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject<HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteRelayStreamDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue sourceDevice:(id)device remoteDevice:(id)device accessory:(id)accessory delegate:(id)delegate delegateQueue:(id)queue uniqueIdentifier:(id)identifier snapshotRequestHandler:(id)handler residentMessageHandler:(id)handler;
- (void)dealloc;
- (id)logIdentifier;
- (void)getSnapshot:(unsigned long long)snapshot;
- (void)snapShotTransferComplete;
- (void)snapShotSendFailed:(id)failed;
- (void)_callDidStartCaptureImageDelegate:(id)delegate;
- (void)_callDidCompleteSendImageDelegate:(id)delegate;
- (void)_sendImageSendFailure:(id)failure;
- (void)snapshotRelayReceiver:(id)receiver didStartGettingImage:(id)image sessionID:(id)id;
- (void)snapshotRelayReceiver:(id)receiver didSaveSnapshotFile:(id)file error:(id)error sessionID:(id)id;
- (void)snapshotStreamSender:(id)sender didStartCaptureImage:(id)image sessionID:(id)id;
- (void)snapshotStreamSender:(id)sender didCompleteSendImage:(id)image sessionID:(id)id;
@end

#endif /* HMDCameraSnapshotRemoteRelayStream_h */