//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFParallaxLayoutConfiguration_h
#define PFParallaxLayoutConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface PFParallaxLayoutConfiguration : NSObject<NSSecureCoding>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } screenSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inactiveTimeRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } parallaxPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unsafeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckTop;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckBottom;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } parallaxPaddingPct;

/* class methods */
+ (id)genericConfigurationForOrientation:(long long)orientation;
+ (id)genericPadConfigurationForOrientation:(long long)orientation;
+ (id)deviceConfigurationForOrientation:(long long)orientation;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale orientation:(long long)orientation;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale startingWithConfiguration:(id)configuration orientation:(long long)orientation;
+ (id)layoutConfigurationFromDictionary:(id)dictionary error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale denormalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect parallaxPadding:(struct CGSize { double x0; double x1; })padding;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale normalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect parallaxPadding:(struct CGSize { double x0; double x1; })padding;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale normalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect parallaxPadding:(struct CGSize { double x0; double x1; })padding;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })size timeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inactiveTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect parallaxPadding:(struct CGSize { double x0; double x1; })padding;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale timeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inactiveTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect parallaxPadding:(struct CGSize { double x0; double x1; })padding;
- (id)init;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToLayoutConfiguration:(id)configuration;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PFParallaxLayoutConfiguration_h */