//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWidgetTimelineRefresherLogEvent_h
#define HMDWidgetTimelineRefresherLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@class NSString;

@interface HMDWidgetTimelineRefresherLogEvent : HMMLogEvent

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *reason;

/* instance methods */
- (id)initWithKind:(id)kind reason:(id)reason;
@end

#endif /* HMDWidgetTimelineRefresherLogEvent_h */