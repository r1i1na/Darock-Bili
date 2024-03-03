//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentOrderDetails_h
#define PKPaymentOrderDetails_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface PKPaymentOrderDetails : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *orderTypeIdentifier;
@property (copy, nonatomic) NSString *orderIdentifier;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithOrderTypeIdentifier:(id)identifier orderIdentifier:(id)identifier webServiceURL:(id)url authenticationToken:(id)token;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPaymentOrderDetails_h */