//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef TTMSchemaTTMNeuralCombinerRequestEnded_h
#define TTMSchemaTTMNeuralCombinerRequestEnded_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaAsset.h"

@class NSArray, NSData;

@interface TTMSchemaTTMNeuralCombinerRequestEnded : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 neuralCombinerThreshold; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) float neuralCombinerThreshold;
@property (nonatomic) BOOL hasNeuralCombinerThreshold;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearResults;
- (void)deleteResults;
- (void)addResults:(id)results;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)index;
- (void)deleteAsset;
- (void)deleteNeuralCombinerThreshold;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* TTMSchemaTTMNeuralCombinerRequestEnded_h */