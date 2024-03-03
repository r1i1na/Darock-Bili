//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepComparisonDayChartPoint_h
#define HKSleepComparisonDayChartPoint_h
@import Foundation;

#include "HKChartPoint-Protocol.h"
#include "HKSleepChartPointProducing-Protocol.h"
#include "HKSleepChartPointUserInfo.h"

@class NSDate, NSNumber, NSString;

@interface HKSleepComparisonDayChartPoint : NSObject<HKChartPoint, HKSleepChartPointProducing>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSNumber *yValue;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)chartPointsForSummaries:(id)summaries context:(id)context;

/* instance methods */
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)key;
- (id)minYValue;
- (id)maxYValue;
- (id)allYValues;
@end

#endif /* HKSleepComparisonDayChartPoint_h */