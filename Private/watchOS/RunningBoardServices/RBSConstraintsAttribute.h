//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSConstraintsAttribute_h
#define RBSConstraintsAttribute_h
@import Foundation;

#include "RBSAttribute.h"

@interface RBSConstraintsAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long constraints;

/* class methods */
+ (id)attributeWithConstraints:(unsigned long long)constraints;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSConstraintsAttribute_h */