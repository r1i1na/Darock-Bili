//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSUIVibrancyConfiguration_h
#define BSUIVibrancyConfiguration_h
@import Foundation;

#include "BSUIVibrancyConfiguration.h"
#include "BSUIVibrancyEffectValues.h"
#include "BSUIVibrancyLUT.h"
#include "BSUIVibrancyShadowValues.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, UIColor;

@interface BSUIVibrancyConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) long long effectType;
@property (readonly, nonatomic) long long backgroundType;
@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *blendConfiguration;
@property (readonly, nonatomic) double blendAmount;
@property (readonly, copy, nonatomic) BSUIVibrancyLUT *alternativeVibrancyEffectLUT;
@property (readonly) BSUIVibrancyEffectValues *effectValues;
@property (readonly) BSUIVibrancyShadowValues *shadowValues;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithEffectType:(long long)type backgroundType:(long long)type color:(id)color;
- (id)initWithEffectType:(long long)type backgroundType:(long long)type color:(id)color groupName:(id)name;
- (id)initWithEffectType:(long long)type backgroundType:(long long)type color:(id)color groupName:(id)name blendConfiguration:(id)configuration blendAmount:(double)amount alternativeVibrancyEffectLUT:(id)lut;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithGroupName:(id)name;
- (id)copyWithBlendAmount:(double)amount blendConfiguration:(id)configuration;
- (id)copyWithBlendAmount:(double)amount blendConfiguration:(id)configuration alternativeVibrancyEffectLUT:(id)lut;
- (id)copyWithEffectType:(long long)type color:(id)color;
- (id)copyWithWithBackgroundType:(long long)type;
- (id)copyWithAlternativeVibrancyEffectLUT:(id)lut;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BSUIVibrancyConfiguration_h */