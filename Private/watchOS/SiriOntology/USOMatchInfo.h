//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef USOMatchInfo_h
#define USOMatchInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSNumber;

@interface USOMatchInfo : NSObject<NSSecureCoding>

@property unsigned int matchSignalBitSet;
@property (retain, nonatomic) NSNumber *matchScore;
@property (retain, nonatomic) NSNumber *maxTokenCount;
@property (retain, nonatomic) NSNumber *matchedTokenCount;
@property (retain, nonatomic) NSNumber *maxStopWordCount;
@property (retain, nonatomic) NSNumber *matchedStopWordCount;
@property (retain, nonatomic) NSNumber *editDistance;
@property (retain, nonatomic) NSNumber *maxAliasCount;
@property (retain, nonatomic) NSNumber *matchedAliasCount;
@property (retain, nonatomic) NSMutableArray *matchedAliasTypes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithMatchSignalBitSet:(unsigned int)set;
- (id)initWithMatchSignalBitSet:(unsigned int)set matchScore:(float)score maxTokenCount:(unsigned int)count matchedTokenCount:(unsigned int)count maxStopWordCount:(unsigned int)count matchedStopWordCount:(unsigned int)count editDistance:(unsigned int)distance maxAliasCount:(unsigned int)count matchedAliasCount:(unsigned int)count matchedAliasTypes:(id)types;
- (void)addAliasType:(unsigned int)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* USOMatchInfo_h */