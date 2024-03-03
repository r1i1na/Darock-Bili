//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FMDEraseOptions_h
#define FMDEraseOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface FMDEraseOptions : NSObject<NSSecureCoding>

@property (nonatomic) BOOL useObliteration;
@property (nonatomic) BOOL brickDevice;
@property (nonatomic) double customDelay;
@property (nonatomic) double maxDelayInterval;
@property (nonatomic) BOOL hasBridgeCoProcessor;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)debugDescription;
@end

#endif /* FMDEraseOptions_h */