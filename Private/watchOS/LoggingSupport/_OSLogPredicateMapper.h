//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef _OSLogPredicateMapper_h
#define _OSLogPredicateMapper_h
@import Foundation;

#include "NSPredicateVisitor-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

@interface _OSLogPredicateMapper : NSObject<NSPredicateVisitor> {
  /* instance variables */
  int _pass;
  NSPredicate *_predicate;
}

@property (retain, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) NSMutableSet *validKeyPaths;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSPredicate *mappedPredicate;
@property (readonly, nonatomic) NSArray *validationErrors;

/* instance methods */
- (id)initWithPredicate:(id)predicate andValidate:(BOOL)validate;
- (id)initWithPredicate:(id)predicate;
- (void)visitPredicate:(id)predicate;
- (id)mapKeywordToConstantExpression:(id)expression keywordMap:(id)map;
- (id)mapEventTypeExpression:(id)expression;
- (id)mapMessageTypeExpression:(id)expression;
- (id)mapSignpostScopeExpression:(id)expression;
- (id)mapSignpostTypeExpression:(id)expression;
- (void)mapLeftExpression:(id *)expression andRightExpression:(id *)expression;
- (void)processComparisonPredicate:(id)predicate;
- (void)processCompoundPredicate:(id)predicate;
- (void)validateExpression:(id)expression;
- (void)visitPredicateOperator:(id)operator;
- (void)visitPredicateExpression:(id)expression;
@end

#endif /* _OSLogPredicateMapper_h */