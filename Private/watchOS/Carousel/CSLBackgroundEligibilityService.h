//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBackgroundEligibilityService_h
#define CSLBackgroundEligibilityService_h
@import Foundation;

#include "CSLBackgroundUpdatePolicy.h"
#include "CSLClientConnections.h"
#include "CSLSBackgroundEligibilityServerProtocol-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface CSLBackgroundEligibilityService : NSObject<NSXPCListenerDelegate, CSLSBackgroundEligibilityServerProtocol>

@property (retain, nonatomic) CSLBackgroundUpdatePolicy *updatePolicy;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) CSLClientConnections *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedBackgroundEligibilityService;

/* instance methods */
- (id)init;
- (id)_init;
- (void)startWithUpdatePolicy:(id)policy;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)isBundleIDEligibleForBackgroundWork:(id)work completion:(id /* block */)completion;
- (void)isBundleIDEligibleForBackgroundHealthKitWork:(id)work completion:(id /* block */)completion;
- (void)connect:(id /* block */)connect;
- (void)reconnect:(id /* block */)reconnect;
@end

#endif /* CSLBackgroundEligibilityService_h */