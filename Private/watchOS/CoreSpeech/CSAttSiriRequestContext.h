//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAttSiriRequestContext_h
#define CSAttSiriRequestContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CSAttSiriRequestContext : NSObject<NSSecureCoding>

@property (nonatomic) unsigned long long reqSrc;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithRequestSource:(unsigned long long)source;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* CSAttSiriRequestContext_h */