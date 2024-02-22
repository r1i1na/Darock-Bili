//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessIdentifierPredicate_h
#define RBSProcessIdentifierPredicate_h
@import Foundation;

#include "RBSProcessPredicateImpl.h"
#include "RBSProcessIdentifier-Protocol.h"

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) NSObject<RBSProcessIdentifier> *identifier;

/* class methods */
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessIdentifierPredicate_h */