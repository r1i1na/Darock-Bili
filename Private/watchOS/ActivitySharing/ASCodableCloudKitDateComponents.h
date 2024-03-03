//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASCodableCloudKitDateComponents_h
#define ASCodableCloudKitDateComponents_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface ASCodableCloudKitDateComponents : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 day; unsigned int x :1 era; unsigned int x :1 hour; unsigned int x :1 month; unsigned int x :1 year; } _has;
}

@property (nonatomic) BOOL hasYear;
@property (nonatomic) long long year;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) long long day;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) BOOL hasEra;
@property (nonatomic) long long era;

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

#endif /* ASCodableCloudKitDateComponents_h */