//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSleepManager_h
#define MTSleepManager_h
@import Foundation;

#include "HKSPSleepStoreObserver-Protocol.h"
#include "MTAlarmObserver-Protocol.h"
#include "MTAlarmStorage-Protocol.h"
#include "MTPersistence-Protocol.h"
#include "MTSource-Protocol.h"

@class HKHealthStore, HKSPFeatureAvailabilityStore, HKSPSleepStore, NSString;

@interface MTSleepManager : NSObject<MTSource, HKSPSleepStoreObserver, MTAlarmObserver>

@property (readonly, nonatomic) NSObject<MTAlarmStorage> *alarmStorage;
@property (copy, nonatomic) id /* block */ sleepStoreProvider;
@property (retain, nonatomic) HKSPSleepStore *sleepStore;
@property (retain, nonatomic) HKSPFeatureAvailabilityStore *featureStore;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<MTPersistence> *persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)nextSleepAlarm;

/* instance methods */
- (id)initWithAlarmStorage:(id)storage;
- (id)initWithAlarmStorage:(id)storage sleepStoreProvider:(id /* block */)provider featureStoreProvider:(id /* block */)provider healthStore:(id)store persistence:(id)persistence;
- (void)updateSleepAlarms;
- (BOOL)_didCompleteSleepOnboarding;
- (void)resetSleepAlarmSnoozeState;
- (BOOL)watchSleepFeaturesEnabled;
- (void)markSleepMigrationComplete;
- (id)sourceIdentifier;
- (void)sleepStore:(id)store sleepSettingsDidChange:(id)change;
- (void)source:(id)source didAddAlarms:(id)alarms;
- (void)source:(id)source didChangeNextAlarm:(id)alarm;
- (void)source:(id)source didDismissAlarm:(id)alarm dismissAction:(unsigned long long)action;
- (void)source:(id)source didFireAlarm:(id)alarm triggerType:(unsigned long long)type;
- (void)source:(id)source didRemoveAlarms:(id)alarms;
- (void)source:(id)source didSnoozeAlarm:(id)alarm snoozeAction:(unsigned long long)action;
- (void)source:(id)source didUpdateAlarms:(id)alarms;
@end

#endif /* MTSleepManager_h */