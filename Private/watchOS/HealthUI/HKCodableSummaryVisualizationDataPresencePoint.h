//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryVisualizationDataPresencePoint_h
#define HKCodableSummaryVisualizationDataPresencePoint_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableDateInterval.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryVisualizationDataPresencePoint : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryVisualizationDataPresencePoint_1 { unsigned int x :1 dataPresent; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (nonatomic) BOOL hasDataPresent;
@property (nonatomic) BOOL dataPresent;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HKCodableSummaryVisualizationDataPresencePoint_h */