//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPTdmFraudRequestInfo_h
#define GEORPTdmFraudRequestInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEORPTdmUserMapsStatus.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPTdmFraudRequestInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_anonymousId; unsigned int x :1 read_fsrData; unsigned int x :1 read_keyId; unsigned int x :1 read_tdmNamespace; unsigned int x :1 read_tdmUserMapsStatus; unsigned int x :1 read_transactionId; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasTdmNamespace;
@property (retain, nonatomic) NSString *tdmNamespace;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) BOOL hasAnonymousId;
@property (retain, nonatomic) NSString *anonymousId;
@property (readonly, nonatomic) BOOL hasFsrData;
@property (retain, nonatomic) NSString *fsrData;
@property (readonly, nonatomic) BOOL hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) BOOL hasTdmUserMapsStatus;
@property (retain, nonatomic) GEORPTdmUserMapsStatus *tdmUserMapsStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEORPTdmFraudRequestInfo_h */