//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3CompoundPredicate_h
#define ML3CompoundPredicate_h
@import Foundation;

#include "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

@property (retain, nonatomic) NSArray *predicates;
@property (readonly, copy, @dynamic, nonatomic) NSString *compoundOperatorJoiner;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)predicates;

/* instance methods */
- (id)initWithPredicates:(id)predicates;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)SQLJoinClausesForClass:(Class)class;
- (void)appendSQLToMutableString:(id)string entityClass:(Class)class;
- (id)databaseStatementParameters;
- (BOOL)isDynamicForEntityClass:(Class)class;
- (id)spotlightPredicate;
- (BOOL)containsPropertyPredicate:(id)predicate matchingValue:(id)value usingComparison:(int)comparison;
@end

#endif /* ML3CompoundPredicate_h */