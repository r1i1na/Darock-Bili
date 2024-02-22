//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationLogMetric_h
#define HKMedicationLogMetric_h
@import Foundation;

#include "HKMedicationAnalyticsGenericFieldsProvider.h"

@class NSDictionary, NSNumber;

@interface HKMedicationLogMetric : NSObject {
  /* instance variables */
  HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;
  long long _actions;
  long long _provenance;
  long long _context;
  BOOL _isLoggingMultipleMeds;
  NSNumber *_hoursAgoLoggedForMax;
  NSNumber *_hoursAgoLoggedForMin;
  NSNumber *_hoursFromScheduledTimeLoggedMax;
  NSNumber *_hoursFromScheduledTimeLoggedMin;
  NSNumber *_hoursFromScheduledToTakenOrSkippedMax;
  NSNumber *_hoursFromScheduledToTakenOrSkippedMin;
  NSNumber *_isPartiallyLoggingScheduledMeds;
}

@property (copy, nonatomic) NSDictionary *eventPayload;

/* class methods */
+ (id)eventName;

/* instance methods */
- (id)initWithActions:(long long)actions provenance:(long long)provenance context:(long long)context loggingMultipleMeds:(BOOL)meds hoursAgoLoggedForMax:(id)max hoursAgoLoggedForMin:(id)min hoursFromScheduledTimeLoggedMax:(id)max hoursFromScheduledTimeLoggedMin:(id)min hoursFromScheduledToTakenOrSkippedMax:(id)max hoursFromScheduledToTakenOrSkippedMin:(id)min isPartiallyLoggingScheduledMeds:(id)meds dataSource:(id)source;
- (id)description;
- (id)contextValue;
- (id)provenanceValue;
- (id)actionsPayload;
@end

#endif /* HKMedicationLogMetric_h */