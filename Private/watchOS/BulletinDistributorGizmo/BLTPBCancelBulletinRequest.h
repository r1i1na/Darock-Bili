//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBCancelBulletinRequest_h
#define BLTPBCancelBulletinRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 date; unsigned int x :1 feed; } _has;
}

@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (retain, nonatomic) NSString *universalSectionID;
@property (readonly, nonatomic) BOOL hasPublisherMatchID;
@property (retain, nonatomic) NSString *publisherMatchID;
@property (nonatomic) BOOL hasFeed;
@property (nonatomic) unsigned int feed;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

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

#endif /* BLTPBCancelBulletinRequest_h */