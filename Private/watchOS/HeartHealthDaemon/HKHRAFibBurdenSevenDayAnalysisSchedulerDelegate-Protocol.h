//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate_Protocol_h
#define HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate_Protocol_h
@import Foundation;

@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate 
/* instance methods */
- (void)sevenDayAnalysisScheduler:(id)scheduler didSuccessfullyCompleteAnalysisWithSample:(id)sample onboardedWithinAnalysisInterval:(BOOL)interval featureStatus:(id)status;
@end

#endif /* HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate_Protocol_h */