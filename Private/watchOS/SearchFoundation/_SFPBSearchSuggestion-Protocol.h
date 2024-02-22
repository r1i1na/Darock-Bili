//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBSearchSuggestion_Protocol_h
#define _SFPBSearchSuggestion_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBGraphicalFloat.h"
#include "_SFPBSearchSuggestion-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol _SFPBSearchSuggestion <NSObject>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _SFPBGraphicalFloat *score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL previouslyEngaged;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *utteranceText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSDictionary *serverFeatures;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearDuplicateSuggestions;
- (void)addDuplicateSuggestions:(id)suggestions;
- (unsigned long long)duplicateSuggestionsCount;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)index;
- (BOOL)getServerFeatures:(double *)features forKey:(id)key;
- (void)setServerFeatures:(double)features forKey:(id)key;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBSearchSuggestion_Protocol_h */