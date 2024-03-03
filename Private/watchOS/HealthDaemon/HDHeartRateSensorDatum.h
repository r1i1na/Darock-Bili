//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeartRateSensorDatum_h
#define HDHeartRateSensorDatum_h
@import Foundation;

#include "HDQuantityDatum.h"

@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum

@property (readonly, nonatomic) HKQuantity *heartRate;
@property (readonly, nonatomic) long long heartRateContext;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier dateInterval:(id)interval heartRate:(id)rate heartRateContext:(long long)context resumeContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDHeartRateSensorDatum_h */