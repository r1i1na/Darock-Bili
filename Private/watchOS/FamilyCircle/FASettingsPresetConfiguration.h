//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FASettingsPresetConfiguration_h
#define FASettingsPresetConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface FASettingsPresetConfiguration : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSDictionary *values;

/* class methods */
+ (id)boolKeys;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithValues:(id)values;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (id)validatedValuesFromValues:(id)values;
- (BOOL)isValidTriState:(id)state;
- (BOOL)isValidBoolValue:(id)value;
- (id)description;
@end

#endif /* FASettingsPresetConfiguration_h */