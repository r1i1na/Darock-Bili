//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAAssertionContext_h
#define SCDAAssertionContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface SCDAAssertionContext : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithTimestamp:(unsigned long long)timestamp reason:(id)reason effectiveDate:(id)date expirationDuration:(double)duration userInfo:(id)info;
- (id)description;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SCDAAssertionContext_h */