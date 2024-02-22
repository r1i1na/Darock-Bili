//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTAddressSubPremise_h
#define RTAddressSubPremise_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface RTAddressSubPremise : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) long long subPremiseType;
@property (readonly, copy, nonatomic) NSString *subPremise;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)stringForSubPremiseType:(long long)type;

/* instance methods */
- (id)init;
- (id)initWithSubPremise:(id)premise subPremiseType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqualToAddressSubPremise:(id)premise;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* RTAddressSubPremise_h */