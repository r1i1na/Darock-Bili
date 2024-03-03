//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TAVisitSnapshot_h
#define TAVisitSnapshot_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TACLVisit.h"
#include "TADisplayOnCalculator.h"
#include "TALocationLite.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumber;

@interface TAVisitSnapshot : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSMutableOrderedSet *lruUtAdvertisementCache;
@property (nonatomic) unsigned long long uniqueUTBufferSizeCap;
@property (nonatomic) unsigned long long displayEventBufferSizeCap;
@property (retain, nonatomic) NSMutableArray *displayEvents;
@property (retain, nonatomic) NSDate *exitIntervalBeginning;
@property (retain, nonatomic) TADisplayOnCalculator *displayOnCalculator;
@property (retain, nonatomic) NSNumber *distanceToClosestLoi;
@property (retain, nonatomic) NSDate *entryDurationOfConsiderationClosed;
@property (nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) TACLVisit *representativeVisit;
@property (readonly, copy, nonatomic) TALocationLite *latestLocation;
@property (readonly, nonatomic) unsigned long long loiType;
@property (readonly, nonatomic) NSMutableDictionary *latestUtAdvertisements;
@property (readonly, nonatomic) NSMutableDictionary *earliestUtAdvertisements;
@property (readonly, nonatomic) BOOL latestLocationInsideVisit;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTACLVisit:(id)taclvisit uniqueUTBufferCap:(unsigned long long)cap displayEventBufferSizeCap:(unsigned long long)cap maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)visit;
- (id)getEntryIntervalEvaluatedUntil;
- (void)addScanState:(id)state;
- (void)addUTAdvertisement:(id)utadvertisement;
- (void)addSystemState:(id)state;
- (BOOL)setDepartureVisit:(id)visit;
- (void)closeSnapshotCleanup;
- (void)calculateExitIntervalWithDisplayOnBudget:(double)budget;
- (double)getDisplayOnTimeUntilEndDate:(id)date;
- (void)updateEntryIntervalWithDisplayOnBudget:(double)budget evaluateToEnd:(BOOL)end;
- (id)getEntryAdvertisementsWithDisplayOnBudget:(double)budget;
- (id)getExitAdvertisementsWithDisplayOnBudget:(double)budget;
- (double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)budget;
- (double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)budget;
- (id)mostRecentAdvertisementDate;
- (void)pruneDisplayEvents;
- (void)updateLatestLocation:(id)location;
- (void)updateLoiType:(id)type;
- (id)getArrivalDelay;
- (id)getDepartureDelay;
- (unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)duration minDisplayOnDuration:(double)duration;
- (id)getLocationRepresentingSnapshot;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TAVisitSnapshot_h */