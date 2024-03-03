//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ANCSchemaANCAppNotificationMetadata_h
#define ANCSchemaANCAppNotificationMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface ANCSchemaANCAppNotificationMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 commsNotificationType; unsigned int x :1 isSmsEligible; unsigned int x :1 isAskWithSiriEnabled; } _has;
}

@property (nonatomic) int commsNotificationType;
@property (nonatomic) BOOL hasCommsNotificationType;
@property (nonatomic) BOOL isSmsEligible;
@property (nonatomic) BOOL hasIsSmsEligible;
@property (nonatomic) BOOL isAskWithSiriEnabled;
@property (nonatomic) BOOL hasIsAskWithSiriEnabled;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteCommsNotificationType;
- (void)deleteIsSmsEligible;
- (void)deleteIsAskWithSiriEnabled;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ANCSchemaANCAppNotificationMetadata_h */