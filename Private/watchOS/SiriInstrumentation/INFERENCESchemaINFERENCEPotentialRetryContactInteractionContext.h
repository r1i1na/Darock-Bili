//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext_h
#define INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isExactMatchPriorSiriContactGivenName; unsigned int x :1 isExactMatchPriorSiriContactFamilyName; unsigned int x :1 isExactMatchPriorSiriContactDisplayName; unsigned int x :1 isExactMatchPriorSiriContactId; unsigned int x :1 isExactMatchPriorSiriContactHandleValue; unsigned int x :1 interactionDurationInSecBucket; unsigned int x :1 potentialRetryIntervalInSecBucket; } _has;
}

@property (nonatomic) BOOL isExactMatchPriorSiriContactGivenName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactGivenName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactFamilyName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactFamilyName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactDisplayName;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactDisplayName;
@property (nonatomic) BOOL isExactMatchPriorSiriContactId;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactId;
@property (nonatomic) BOOL isExactMatchPriorSiriContactHandleValue;
@property (nonatomic) BOOL hasIsExactMatchPriorSiriContactHandleValue;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) BOOL hasInteractionDurationInSecBucket;
@property (nonatomic) unsigned int potentialRetryIntervalInSecBucket;
@property (nonatomic) BOOL hasPotentialRetryIntervalInSecBucket;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteIsExactMatchPriorSiriContactGivenName;
- (void)deleteIsExactMatchPriorSiriContactFamilyName;
- (void)deleteIsExactMatchPriorSiriContactDisplayName;
- (void)deleteIsExactMatchPriorSiriContactId;
- (void)deleteIsExactMatchPriorSiriContactHandleValue;
- (void)deleteInteractionDurationInSecBucket;
- (void)deletePotentialRetryIntervalInSecBucket;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext_h */