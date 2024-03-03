//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSchoolModeManager_h
#define SCLSchoolModeManager_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "SCLInterruptBehaviorResolver.h"
#include "SCLSchoolModeClientProxyDelegate-Protocol.h"
#include "SCLSchoolModeManagerConfiguration.h"
#include "SCLSuppressSchoolModeAssertionManager.h"
#include "SCLTransportService.h"

@class NSMapTable, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SCLSchoolModeManager : NSObject<NSXPCListenerDelegate, SCLSchoolModeClientProxyDelegate>

@property (readonly, nonatomic) NSMutableSet *clients;
@property (readonly, nonatomic) SCLSchoolModeManagerConfiguration *configuration;
@property (readonly, nonatomic) SCLTransportService *transportService;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *supppressionManager;
@property (readonly, nonatomic) SCLInterruptBehaviorResolver *interruptBehaviorResolver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *coordinatorMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
- (id)descriptionBuilderForNRDevice:(id)nrdevice;
- (void)start;
- (void)dealloc;
- (void)loadPairedDevices;
- (id)eligiblePairedDevices;
- (BOOL)isEligibleDevice:(id)device;
- (void)createControllerForDevice:(id)device;
- (void)handleDevicePairedNotification:(id)notification;
- (void)handleDeviceUnpairedNotification:(id)notification;
- (void)removeCoordinator:(id)coordinator;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)clientProxyDidInvalidate:(id)invalidate;
- (void)clientProxy:(id)proxy didConnectWithPairingID:(id)id;
- (id)activityCriteria;
- (void)_updateActivityRegistration;
- (void)_handleActivityStarted:(id)started;
@end

#endif /* SCLSchoolModeManager_h */