//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPBTFindingSession_h
#define SPBTFindingSession_h
@import Foundation;

#include "SPBTFindingSessionConfig.h"
#include "SPBTFindingXPCClientProtocol-Protocol.h"
#include "SPBTFindingXPCProtocol-Protocol.h"

@class FMXPCServiceDescription, FMXPCSession, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface SPBTFindingSession : NSObject<SPBTFindingXPCClientProtocol>

@property (copy, nonatomic) NSUUID *beacon;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) NSObject<SPBTFindingXPCProtocol> *proxy;
@property (readonly, copy, nonatomic) SPBTFindingSessionConfig *config;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ didUpdateBTRSSIMeasurementCallback;
@property (copy, nonatomic) id /* block */ didUpdateBTRSSIResultCallback;
@property (copy, nonatomic) id /* block */ findingSessionErrorCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)exportedInterface;
+ (id)remoteInterface;

/* instance methods */
- (id)initWithConfig:(id)config;
- (void)interruptionHandler:(id)handler;
- (void)invalidationHandler:(id)handler;
- (void)updateConfig:(id)config;
- (void)startFindingBeacons:(id)beacons completion:(id /* block */)completion;
- (void)stopFindingBeacons:(id)beacons completion:(id /* block */)completion;
- (void)updatedBTRSSIMeasurement:(id)btrssimeasurement;
- (void)updatedBTRSSIResult:(id)btrssiresult;
- (void)findingSessionError:(id)error;
@end

#endif /* SPBTFindingSession_h */