//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext_h
#define NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 ingestionProgress; unsigned int x :1 ingestionState; } _has;
}

@property (readonly, nonatomic) BOOL hasPhysicalCardImageURL;
@property (retain, nonatomic) NSString *physicalCardImageURL;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIngestionState;
@property (nonatomic) int ingestionState;
@property (nonatomic) BOOL hasIngestionProgress;
@property (nonatomic) float ingestionProgress;

/* instance methods */
- (id)ingestionStateAsString:(int)string;
- (int)StringAsIngestionState:(id)state;
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

#endif /* NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext_h */