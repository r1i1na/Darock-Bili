//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMHValenceDistributionSummaryBuilder_h
#define HDMHValenceDistributionSummaryBuilder_h
@import Foundation;

@class NSCalendar, NSMutableArray;

@interface HDMHValenceDistributionSummaryBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *dailyValenceValues;
@property (retain, nonatomic) NSMutableArray *momentaryValenceDistributions;
@property (nonatomic) double valenceMergeInterval;
@property (readonly, nonatomic) struct { long long x0; long long x1; } dayIndexRange;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;

/* instance methods */
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })range gregorianCalendar:(id)calendar;
- (void)addDaySummary:(id)summary;
- (id)valenceDistributionSummary;
- (id)_calculateAverageDailyValenceDistribution;
- (void)_mergeStatesOfMind:(id)mind intoValenceDistributions:(id)distributions;
- (void)_mergeAdjacentValenceDistributions:(id)distributions;
- (double)_valenceMergeInterval;
- (BOOL)_value:(double)_value isBetweenMinValue:(double)value maxValue:(double)value;
@end

#endif /* HDMHValenceDistributionSummaryBuilder_h */