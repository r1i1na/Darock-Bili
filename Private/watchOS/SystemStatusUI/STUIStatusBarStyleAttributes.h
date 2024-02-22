//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarStyleAttributes_h
#define STUIStatusBarStyleAttributes_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UITraitCollection;

@interface STUIStatusBarStyleAttributes : NSObject<BSDebugDescriptionProviding, NSSecureCoding, NSCopying>

@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL scaledFixedWidthBar;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long effectiveLayoutDirection;
@property (nonatomic) double iconScale;
@property (nonatomic) long long symbolScale;
@property (nonatomic) long long iconSize;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIFont *emphasizedFont;
@property (copy, nonatomic) UIFont *smallFont;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) UIColor *imageDimmedTintColor;
@property (copy, nonatomic) NSArray *imageNamePrefixes;
@property (readonly, nonatomic) BOOL rounded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)styleAttributesForStatusBar:(id)bar style:(long long)style;
+ (id)overriddenStyleAttributes;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)styleAttributesWithOverrides:(id)overrides;
- (id)fontForStyle:(long long)style;
- (BOOL)isRounded;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_descriptionBuilderWithMultilinePrefix:(id)prefix forDebug:(BOOL)debug;
- (BOOL)isScaledFixedWidthBar;
@end

#endif /* STUIStatusBarStyleAttributes_h */