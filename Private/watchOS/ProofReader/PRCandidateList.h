//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 619.2.0.0.0
//
#ifndef PRCandidateList_h
#define PRCandidateList_h
@import Foundation;

#include "PRErrorModel.h"

@class NSArray, NSMutableArray;

@interface PRCandidateList : NSObject {
  /* instance variables */
  NSMutableArray *_candidates;
  unsigned long long _maxCount;
  struct _NSRange { unsigned long long location; unsigned long long length; } _defaultReplacementRange;
  PRErrorModel *_errorModel;
  NSArray *_capitalizationDictionaryArray;
}

/* instance methods */
- (id)initWithMaxCount:(unsigned long long)count defaultReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range customErrorModel:(id)model capitalizationDictionaryArray:(id)array;
- (id)description;
- (void)dealloc;
- (void)addCandidate:(id)candidate;
- (void)addCandidateWithWords:(id)words replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range errorType:(unsigned long long)type;
- (void)addCandidateWithString:(id)string replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range errorType:(unsigned long long)type;
- (void)addCandidateWithString:(id)string errorType:(unsigned long long)type;
- (void)addCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding errorType:(unsigned long long)type;
- (void)addCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding transform:(unsigned long long)transform errorType:(unsigned long long)type;
- (void)addReplacementCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding transform:(unsigned long long)transform intendedCharacter:(unsigned short)character actualCharacter:(unsigned short)character;
- (void)addTranspositionCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding transform:(unsigned long long)transform intendedFirstCharacter:(unsigned short)character intendedSecondCharacter:(unsigned short)character;
- (void)addInsertionCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding transform:(unsigned long long)transform intendedPrecedingCharacter:(unsigned short)character insertedCharacter:(unsigned short)character intendedFollowingCharacter:(unsigned short)character;
- (void)addOmissionCandidateWithBuffer:(char *)buffer encoding:(unsigned int)encoding transform:(unsigned long long)transform intendedPrecedingCharacter:(unsigned short)character omittedCharacter:(unsigned short)character intendedFollowingCharacter:(unsigned short)character;
- (id)candidates;
- (id)candidateStrings;
- (unsigned long long)count;
- (unsigned long long)maxCount;
- (BOOL)isFull;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })defaultReplacementRange;
- (id)candidateWithString:(id)string;
@end

#endif /* PRCandidateList_h */