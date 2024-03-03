//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRCryptoPairingMessageProtobuf_h
#define _MRCryptoPairingMessageProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 state; unsigned int x :1 status; unsigned int x :1 isRetrying; unsigned int x :1 isUsingSystemPairing; } _has;
}

@property (readonly, nonatomic) BOOL hasPairingData;
@property (retain, nonatomic) NSData *pairingData;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasIsRetrying;
@property (nonatomic) BOOL isRetrying;
@property (nonatomic) BOOL hasIsUsingSystemPairing;
@property (nonatomic) BOOL isUsingSystemPairing;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;

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

#endif /* _MRCryptoPairingMessageProtobuf_h */