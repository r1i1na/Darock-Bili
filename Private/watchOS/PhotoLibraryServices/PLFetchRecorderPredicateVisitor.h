//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFetchRecorderPredicateVisitor_h
#define PLFetchRecorderPredicateVisitor_h
@import Foundation;

#include "NSPredicateVisitor-Protocol.h"

@interface PLFetchRecorderPredicateVisitor : NSObject<NSPredicateVisitor>

@property (readonly, nonatomic) BOOL foundOperatorIN;

/* instance methods */
- (void)visitPredicate:(id)predicate;
- (void)visitPredicateExpression:(id)expression;
- (void)visitPredicateOperator:(id)operator;
- (void)reset;
- (void)examinePredicate:(id)predicate;
@end

#endif /* PLFetchRecorderPredicateVisitor_h */