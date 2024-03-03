//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAMessagingCapability_h
#define AAMessagingCapability_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AAMessagingCapability : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long capability;
@property (readonly, nonatomic) NSString *capabilityString;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCapabilityType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AAMessagingCapability_h */