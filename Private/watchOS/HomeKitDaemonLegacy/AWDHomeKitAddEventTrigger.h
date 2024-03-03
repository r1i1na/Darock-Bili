//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitAddEventTrigger_h
#define AWDHomeKitAddEventTrigger_h
@import Foundation;

#include "PBCodable.h"
#include "AWDHomeKitEventTrigger.h"
#include "NSCopying-Protocol.h"

@interface AWDHomeKitAddEventTrigger : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 requestOrigin; unsigned int x :1 resultErrorCode; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) unsigned int resultErrorCode;
@property (readonly, nonatomic) BOOL hasEventTrigger;
@property (retain, nonatomic) AWDHomeKitEventTrigger *eventTrigger;
@property (nonatomic) BOOL hasRequestOrigin;
@property (nonatomic) int requestOrigin;

/* instance methods */
- (id)requestOriginAsString:(int)string;
- (int)StringAsRequestOrigin:(id)origin;
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

#endif /* AWDHomeKitAddEventTrigger_h */