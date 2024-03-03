//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRFPrimaryHeaderRichCardSection_h
#define _SFPBRFPrimaryHeaderRichCardSection_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBRFPrimaryHeaderRichCardSection-Protocol.h"
#include "_SFPBRFTextProperty.h"
#include "_SFPBRFVisualProperty.h"

@class NSData, NSString;

@interface _SFPBRFPrimaryHeaderRichCardSection : PBCodable<_SFPBRFPrimaryHeaderRichCardSection, NSSecureCoding>

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_3;
@property (retain, nonatomic) _SFPBRFTextProperty *text_4;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRFPrimaryHeaderRichCardSection_h */