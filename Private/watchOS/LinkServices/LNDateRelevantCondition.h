//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNDateRelevantCondition_h
#define LNDateRelevantCondition_h
@import Foundation;

#include "LNRelevantCondition.h"

@class NSDate;

@interface LNDateRelevantCondition : LNRelevantCondition

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

/* instance methods */
- (id)initWithStartDate:(id)date endDate:(id)date;
@end

#endif /* LNDateRelevantCondition_h */