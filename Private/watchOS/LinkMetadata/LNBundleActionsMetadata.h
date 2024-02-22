//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNBundleActionsMetadata_h
#define LNBundleActionsMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface LNBundleActionsMetadata : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSDictionary *actions;
@property (readonly, nonatomic) NSDictionary *systemProtocolDefaults;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithActions:(id)actions systemProtocolDefaults:(id)defaults;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LNBundleActionsMetadata_h */