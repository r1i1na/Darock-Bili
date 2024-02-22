//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFDefaultAutocompleteCandidateProvider_h
#define EMFDefaultAutocompleteCandidateProvider_h
@import Foundation;

#include "EMFAutocompleteCandidateProvider-Protocol.h"

@class NSArray;

@interface EMFDefaultAutocompleteCandidateProvider : NSObject<EMFAutocompleteCandidateProvider>

@property (readonly, nonatomic) NSArray *tokens;

/* class methods */
+ (id)providerFromInvertedIndex:(id)index;

/* instance methods */
- (id)initWithBundle:(id)bundle;
- (id)initWithTokens:(id)tokens;
- (id)matchesForPrefix:(id)prefix usingAlgorithm:(unsigned long long)algorithm;
- (id)firstMatchForPrefix:(id)prefix;
- (void)enumerateCandidatesMatchingPrefix:(id)prefix withEnumerationType:(long long)type maxCandidates:(unsigned long long)candidates usingBlock:(id /* block */)block;
- (id)firstCandidateMatchingPrefix:(id)prefix;
- (BOOL)isValidToken:(id)token;
@end

#endif /* EMFDefaultAutocompleteCandidateProvider_h */