//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTActivityLogger_h
#define _LTActivityLogger_h
@import Foundation;

#include "_LTActivityLoggerDelegate-Protocol.h"

@class NSCalendar, NSString;

@interface _LTActivityLogger : NSObject<_LTActivityLoggerDelegate> {
  /* instance variables */
  NSCalendar *_calendar;
}

@property (weak, nonatomic) NSObject<_LTActivityLoggerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)registerActivity:(long long)activity;
- (void)_registerActivity:(long long)activity onDate:(id)date;
- (void)_logAllIntervalsForTask:(long long)task date:(id)date;
- (void)_logActivityForTask:(long long)task interval:(unsigned long long)interval date:(id)date;
- (void)_updateLastLoggedDate:(id)date forTask:(long long)task;
- (void)activityLogger:(id)logger logUsageForTask:(long long)task interval:(unsigned long long)interval date:(id)date;
- (id)activityLogger:(id)logger lastLoggedDateForTask:(long long)task;
- (void)activityLogger:(id)logger updateLastLoggedDate:(id)date forTask:(long long)task;
- (void)activityLogger:(id)logger logAggregateUsageForInterval:(unsigned long long)interval date:(id)date;
- (id)lastAggregateLogDateForActivityLogger:(id)logger;
- (void)activityLogger:(id)logger updateLastAggregateLogDate:(id)date;
- (void)_sendDailyUsageForTask:(long long)task date:(id)date;
- (void)_sendWeeklyUsageForTask:(long long)task date:(id)date;
- (void)_sendMonthlyUsageForTask:(long long)task date:(id)date;
- (id)_featureNameForTask:(long long)task;
- (id)_activityDatePreferenceKeyForTask:(long long)task;
@end

#endif /* _LTActivityLogger_h */