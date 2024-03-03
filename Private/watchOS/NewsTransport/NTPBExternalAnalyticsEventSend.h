//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBExternalAnalyticsEventSend_h
#define NTPBExternalAnalyticsEventSend_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBExternalAnalyticsEventSend : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 externalAnalyticsEventType; unsigned int x :1 resultType; } _has;
}

@property (nonatomic) BOOL hasExternalAnalyticsEventType;
@property (nonatomic) int externalAnalyticsEventType;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) BOOL hasEventUdid;
@property (retain, nonatomic) NSString *eventUdid;
@property (readonly, nonatomic) BOOL hasFailureReasonCode;
@property (retain, nonatomic) NSString *failureReasonCode;
@property (readonly, nonatomic) BOOL hasContentViewedId;
@property (retain, nonatomic) NSString *contentViewedId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsId;
@property (retain, nonatomic) NSString *externalAnalyticsId;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBExternalAnalyticsEventSend_h */