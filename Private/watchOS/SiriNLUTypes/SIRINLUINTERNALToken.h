//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALToken_h
#define SIRINLUINTERNALToken_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALToken : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 begin; unsigned int x :1 end; unsigned int x :1 nonWhitespaceTokenIndex; unsigned int x :1 tokenIndex; unsigned int x :1 isSignificant; unsigned int x :1 isWhitespace; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) int begin;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) BOOL isWhitespace;
@property (retain, nonatomic) NSMutableArray *cleanValues;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) int tokenIndex;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (nonatomic) int nonWhitespaceTokenIndex;
@property (readonly, nonatomic) BOOL hasCleanValue;
@property (retain, nonatomic) NSString *cleanValue;
@property (retain, nonatomic) NSMutableArray *normalizedValues;

/* class methods */
+ (Class)cleanValuesType;
+ (Class)normalizedValuesType;

/* instance methods */
- (void)clearCleanValues;
- (void)addCleanValues:(id)values;
- (unsigned long long)cleanValuesCount;
- (id)cleanValuesAtIndex:(unsigned long long)index;
- (void)clearNormalizedValues;
- (void)addNormalizedValues:(id)values;
- (unsigned long long)normalizedValuesCount;
- (id)normalizedValuesAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALToken_h */