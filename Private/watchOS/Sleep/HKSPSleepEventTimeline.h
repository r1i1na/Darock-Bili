//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepEventTimeline_h
#define HKSPSleepEventTimeline_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSMutableArray;

@interface HKSPSleepEventTimeline : NSObject<NSCopying>

@property (readonly, nonatomic) NSMutableArray *orderedOccurrences;
@property (readonly, nonatomic) NSMutableArray *timelineAdjustments;
@property (readonly, nonatomic) NSDate *originDate;
@property (readonly, nonatomic) NSArray *resolvedOccurrences;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *upcomingEvents;
@property (readonly, nonatomic) NSArray *previousEvents;
@property (readonly, nonatomic) NSArray *upcomingResolvedOccurrences;
@property (readonly, nonatomic) NSArray *previousResolvedOccurrences;

/* instance methods */
- (id)initWithOriginDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)upcomingResolvedOccurrencesBeforeDate:(id)date;
- (void)addResolvedOccurrence:(id)occurrence;
- (void)adjustResolvedOccurrence:(id)occurrence withEvent:(id)event;
- (void)adjustResolvedOccurrence:(id)occurrence removingEventWithIdentifier:(id)identifier;
- (void)_adjustedResolvedOccurrence:(id)occurrence adjustmentBlock:(id /* block */)block;
- (id)resolvedOccurrenceOverlappingOccurrence:(id)occurrence;
- (id)resolvedOccurrenceContainingDate:(id)date;
- (id)resolvedOccurrencePrecedingDate:(id)date;
- (id)resolvedOccurrenceContainingOrPrecedingDate:(id)date;
@end

#endif /* HKSPSleepEventTimeline_h */