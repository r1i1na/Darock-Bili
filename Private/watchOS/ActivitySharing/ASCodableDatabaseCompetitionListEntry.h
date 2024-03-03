//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASCodableDatabaseCompetitionListEntry_h
#define ASCodableDatabaseCompetitionListEntry_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface ASCodableDatabaseCompetitionListEntry : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 owner; unsigned int x :1 type; } _has;
}

@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasSystemFieldsOnlyRecord;
@property (retain, nonatomic) NSData *systemFieldsOnlyRecord;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) long long owner;

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

#endif /* ASCodableDatabaseCompetitionListEntry_h */