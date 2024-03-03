//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REContentRankingResult_h
#define REContentRankingResult_h
@import Foundation;

@interface REContentRankingResult : NSObject

@property (nonatomic) BOOL valid;
@property (nonatomic) double positivePolarity;
@property (nonatomic) double negativePolarity;
@property (nonatomic) int unknownCount;
@property (nonatomic) double unbiasedPositivePolarity;
@property (nonatomic) double unbiasedNegativePolarity;

@end

#endif /* REContentRankingResult_h */