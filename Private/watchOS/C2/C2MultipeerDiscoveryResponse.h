//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2MultipeerDiscoveryResponse_h
#define C2MultipeerDiscoveryResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface C2MultipeerDiscoveryResponse : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSData *chunkSignature;
@property (nonatomic) BOOL chunkAvailable;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* C2MultipeerDiscoveryResponse_h */