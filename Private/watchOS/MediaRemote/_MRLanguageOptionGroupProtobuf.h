//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRLanguageOptionGroupProtobuf_h
#define _MRLanguageOptionGroupProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRLanguageOptionProtobuf.h"

@class NSMutableArray;

@interface _MRLanguageOptionGroupProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 allowEmptySelection; } _has;
}

@property (nonatomic) BOOL hasAllowEmptySelection;
@property (nonatomic) BOOL allowEmptySelection;
@property (readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

/* class methods */
+ (Class)languageOptionsType;

/* instance methods */
- (void)clearLanguageOptions;
- (void)addLanguageOptions:(id)options;
- (unsigned long long)languageOptionsCount;
- (id)languageOptionsAtIndex:(unsigned long long)index;
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

#endif /* _MRLanguageOptionGroupProtobuf_h */