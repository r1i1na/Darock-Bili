//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLAWDHealthKitRoutineLocation_h
#define NLAWDHealthKitRoutineLocation_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NLAWDHealthKitRoutineLocation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 confidenceMillis; unsigned int x :1 recentVisitCount; unsigned int x :1 uncertaintyMillis; unsigned int x :1 locationType; } _has;
}

@property (readonly, nonatomic) BOOL hasLocationUUID;
@property (retain, nonatomic) NSString *locationUUID;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasUncertaintyMillis;
@property (nonatomic) long long uncertaintyMillis;
@property (nonatomic) BOOL hasConfidenceMillis;
@property (nonatomic) long long confidenceMillis;
@property (nonatomic) BOOL hasRecentVisitCount;
@property (nonatomic) long long recentVisitCount;

/* instance methods */
- (id)locationTypeAsString:(int)string;
- (int)StringAsLocationType:(id)type;
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

#endif /* NLAWDHealthKitRoutineLocation_h */