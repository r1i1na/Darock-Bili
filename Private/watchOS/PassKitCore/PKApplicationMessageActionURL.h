//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplicationMessageActionURL_h
#define PKApplicationMessageActionURL_h
@import Foundation;

#include "PKApplicationMessageAction.h"
#include "NSSecureCoding-Protocol.h"

@class NSURL;

@interface PKApplicationMessageActionURL : PKApplicationMessageAction<NSSecureCoding>

@property (readonly, nonatomic) NSURL *url;

/* class methods */
+ (id)createWithURL:(id)url;
+ (id)createWithSensitiveURL:(id)url;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKApplicationMessageActionURL_h */