//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMTextMemberships_h
#define REMTextMemberships_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary;

@interface REMTextMemberships : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *memberships;
@property (readonly, nonatomic) NSDate *lastResetDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMemberships:(id)memberships lastResetDate:(id)date;
- (id)initWithMemberships:(id)memberships;
- (id)groupIdentifierOfMemberWithIdentifier:(id)identifier;
- (id)mergingWith:(id)with;
- (void)reset;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* REMTextMemberships_h */