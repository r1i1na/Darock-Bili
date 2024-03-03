//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLToolXPCServer_h
#define CSLToolXPCServer_h
@import Foundation;

#include "BSBaseXPCServer.h"
#include "CSLAppViewListImageRenderer.h"
#include "CSLRadarReproducer.h"

@class NSMutableDictionary;

@interface CSLToolXPCServer : BSBaseXPCServer {
  /* instance variables */
  NSMutableDictionary *_internalBacklightAssertions;
  CSLAppViewListImageRenderer *_launcherListRenderer;
  CSLRadarReproducer *_radarReproducer;
}

/* instance methods */
- (id)init;
- (BOOL)queue_shouldAcceptNewConnection:(id)connection;
- (id)queue_newClientForConnection:(id)connection;
- (void)queue_handleMessage:(id)message client:(id)client;
- (void)_postNotificationOnMain:(id)main;
- (void)_handle_forceStuckTransactionShouldBluescreen:(BOOL)bluescreen shouldStackshotTwice:(BOOL)twice;
- (void)_handle_timedTransactionWithCompletionTime:(double)time name:(id)name useBackgroundQueue:(BOOL)queue;
- (void)_handle_setTimerWithDate:(id)date useWallClockTime:(BOOL)time identifier:(id)identifier;
- (void)_handle_powerAssertionWithTimeout:(double)timeout identifier:(id)identifier;
- (void)_handle_genericMessage;
- (void)_handle_runTestsWithOptions:(id)options;
- (void)_handle_takeBacklightAssertionWithDuration:(double)duration xpcDictionary:(id)dictionary;
- (void)_handle_releaseBacklightAssertionWithIdentifier:(id)identifier;
- (void)_addAssertion:(id)assertion;
- (void)_removeAssertion:(id)assertion isTimeout:(BOOL)timeout;
- (void)_handle_terminateAllAppsAndShutdownWithOptions:(id)options client:(id)client;
- (void)_writeLowBatteryLog;
- (void)_enableBatteryMonitoring:(BOOL)monitoring;
- (void)_handle_resetSessionAutoLaunchAuthorizationWithOptions:(id)options;
@end

#endif /* CSLToolXPCServer_h */