//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPDecayedFeedbackCounts_h
#define PPDecayedFeedbackCounts_h
@import Foundation;

@class NSDate;

@interface PPDecayedFeedbackCounts : NSObject

@property (readonly, nonatomic) double engagedExplicitly;
@property (readonly, nonatomic) double engagedImplicitly;
@property (readonly, nonatomic) double rejectedExplicitly;
@property (readonly, nonatomic) double rejectedImplicitly;
@property (readonly, nonatomic) NSDate *latestDate;

/* instance methods */
- (id)initWithLatestDate:(id)date engagedExplicitly:(double)explicitly engagedImplicitly:(double)implicitly rejectedExplicitly:(double)explicitly rejectedImplicitly:(double)implicitly;
- (id)toDictionary;
@end

#endif /* PPDecayedFeedbackCounts_h */