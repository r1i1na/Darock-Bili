//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableFHIRResource_h
#define HDCodableFHIRResource_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableMessageVersion.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableFHIRResource : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 extractionHints; unsigned int x :1 firstSeenDate; unsigned int x :1 originVersionMajor; unsigned int x :1 originVersionMinor; unsigned int x :1 originVersionPatch; unsigned int x :1 receivedDate; } _has;
}

@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (readonly, nonatomic) BOOL hasResourceID;
@property (retain, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) BOOL hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (nonatomic) BOOL hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (readonly, nonatomic) BOOL hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) BOOL hasFhirVersion;
@property (retain, nonatomic) NSString *fhirVersion;
@property (readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) BOOL hasExtractionHints;
@property (nonatomic) long long extractionHints;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL hasOriginVersionMajor;
@property (nonatomic) long long originVersionMajor;
@property (nonatomic) BOOL hasOriginVersionMinor;
@property (nonatomic) long long originVersionMinor;
@property (nonatomic) BOOL hasOriginVersionPatch;
@property (nonatomic) long long originVersionPatch;
@property (readonly, nonatomic) BOOL hasOriginVersionBuild;
@property (retain, nonatomic) NSString *originVersionBuild;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) BOOL hasFirstSeenDate;
@property (nonatomic) double firstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateTimeZoneName;
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) BOOL hasUniquenessChecksum;
@property (retain, nonatomic) NSData *uniquenessChecksum;

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

#endif /* HDCodableFHIRResource_h */