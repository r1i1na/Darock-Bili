//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneActionRetryMonitor_h
#define CSLSceneActionRetryMonitor_h
@import Foundation;

#include "CSLSceneActionRetryMonitoring-Protocol.h"
#include "CSLSceneActionRusageIntervalCalculator.h"

@class NSString, SWWakingTimer;
@protocol BSAction<CSLAssertionAction;

@interface CSLSceneActionRetryMonitor : NSObject {
  /* instance variables */
  SWWakingTimer *_retryTimer;
  long long _retries;
  CSLSceneActionRusageIntervalCalculator *_rusageIntervalCalculator;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long error;
@property (readonly, nonatomic) double wallTimeLimit;
@property (readonly, nonatomic) double graceInterval;
@property (readonly, nonatomic) double minSchedulerInterval;
@property (readonly, nonatomic) double maxCPUInterval;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *monitorIdentifier;
@property (readonly, weak, nonatomic) NSObject<CSLSceneActionRetryMonitoring> *delegate;
@property (readonly, nonatomic) BSAction<CSLAssertionAction> *action;

/* instance methods */
- (id)initWithDelegate:(id)delegate bundleID:(id)id assertionAction:(id)action pid:(int)pid;
- (id)initWithDelegate:(id)delegate bundleID:(id)id assertionAction:(id)action pid:(int)pid rusageCalculator:(id)calculator;
- (void)dealloc;
- (void)_runOnMainQueue:(id /* block */)queue;
- (void)resume;
- (void)suspend;
- (void)_queue_scheduleRetryTimeTimerIfNecessary;
- (void)_queue_cancelRetryTimeTimerIfNecessary;
- (void)_sendAnalytics:(const struct { double x0; double x1; } *)analytics;
- (void)_queue_retryTimerFired;
@end

#endif /* CSLSceneActionRetryMonitor_h */