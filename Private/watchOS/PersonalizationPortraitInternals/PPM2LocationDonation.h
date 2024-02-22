//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPM2LocationDonation_h
#define PPM2LocationDonation_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PPM2LocationDonation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 donationSource; } _has;
}

@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) int donationSource;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

/* instance methods */
- (id)donationSourceAsString:(int)string;
- (int)StringAsDonationSource:(id)source;
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

#endif /* PPM2LocationDonation_h */