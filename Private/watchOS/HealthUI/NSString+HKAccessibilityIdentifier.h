//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSString_HKAccessibilityIdentifier_h
#define NSString_HKAccessibilityIdentifier_h
@import Foundation;

@interface NSString (HKAccessibilityIdentifier)
/* class methods */
+ (id)hk_chartAccessibilityIdentifier:(id)identifier;
+ (id)hk_chartOverlayAccessibilityIdentifier:(id)identifier;
+ (id)hk_chartOverlayCardioFitnessAccessibilityIdentifier:(id)identifier;
+ (id)healthAccessibilityIdentifier:(long long)identifier suffix:(id)suffix;

/* instance methods */
- (id)hk_attributedStringPrefixedWithImage:(id)image spacing:(double)spacing;
- (id)hk_attributedStringPrefixedWithImage:(id)image spacing:(double)spacing attributes:(id)attributes;
- (id)hk_attributedStringPrefixedWithImage:(id)image baselineAdjusted:(double)adjusted spacing:(double)spacing;
- (id)hk_attributedStringPrefixedWithImage:(id)image baselineAdjusted:(double)adjusted withAttributes:(id)attributes;
- (id)hk_attributedStringPrefixedWithImage:(id)image baselineAdjusted:(double)adjusted spacing:(long long)spacing attributes:(id)attributes;
- (double)hk_boundingHeightWithWidth:(double)width font:(id)font;
- (double)hk_boundingWidthWithHeight:(double)height font:(id)font;
- (void)hk_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withAttributes:(id)attributes outlineWidth:(double)width outlineColor:(id)color context:(struct CGContext *)context;
@end

#endif /* NSString_HKAccessibilityIdentifier_h */