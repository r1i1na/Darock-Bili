//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSPrewarmAttribute_RBProcessState_h
#define RBSPrewarmAttribute_RBProcessState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "RBInheritanceCollection.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, RBSProcessIdentity;

@interface RBSPrewarmAttribute (RBProcessState)
/* instance methods */
- (void)applyToAssertionIntransientState:(id)state attributePath:(unsigned long long)path context:(id)context;
- (void)applyToSystemState:(id)state attributePath:(unsigned long long)path context:(id)context;
- (BOOL)isValidForContext:(id)context withError:(id *)error;
- (BOOL)allowedWithAttribute:(id)attribute error:(id *)error;
@end

#endif /* RBSPrewarmAttribute_RBProcessState_h */