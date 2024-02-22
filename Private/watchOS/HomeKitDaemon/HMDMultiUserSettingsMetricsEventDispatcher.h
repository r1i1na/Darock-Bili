//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMultiUserSettingsMetricsEventDispatcher_h
#define HMDMultiUserSettingsMetricsEventDispatcher_h
@import Foundation;

#include "HMFObject.h"
#include "HMDLogEventDailyScheduler.h"
#include "HMDLogEventDailyTaskRunner-Protocol.h"
#include "HMDMultiUserSettingsMetricsEventDispatcherDataSource-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class NSString, NSUUID;

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject<HMFLogging, HMDLogEventDailyTaskRunner>

@property (readonly) NSUUID *identifier;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (weak) NSObject<HMDMultiUserSettingsMetricsEventDispatcherDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithIdentifier:(id)identifier logEventSubmitter:(id)submitter dailyScheduler:(id)scheduler;
- (void)registerForDailyMultiUserSettingsEvents;
- (void)submitMultiUserSettingsDailyEvent;
- (void)runDailyTask;
- (id)logIdentifier;
@end

#endif /* HMDMultiUserSettingsMetricsEventDispatcher_h */