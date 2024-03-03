//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef UIViewVectorAnimatableProperty_MobileSafariFrameworkExtras_h
#define UIViewVectorAnimatableProperty_MobileSafariFrameworkExtras_h
@import Foundation;

@interface UIViewVectorAnimatableProperty (MobileSafariFrameworkExtras)
/* class methods */
+ (id)safari_pointProperty;
+ (id)safari_sizeProperty;
+ (id)safari_rectProperty;
+ (id)safari_transformProperty;

/* instance methods */
- (void)safari_setPointValue:(struct CGPoint { double x0; double x1; })value;
- (struct CGPoint { double x0; double x1; })safari_pointValue;
- (struct CGPoint { double x0; double x1; })safari_pointPresentationValue;
- (void)safari_setSizeValue:(struct CGSize { double x0; double x1; })value;
- (struct CGSize { double x0; double x1; })safari_sizeValue;
- (struct CGSize { double x0; double x1; })safari_sizePresentationValue;
- (void)safari_setRectValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })value;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safari_rectValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safari_rectPresentationValue;
- (void)safari_setTransformValue:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })value;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })safari_transformValue;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })safari_transformPresentationValue;
@end

#endif /* UIViewVectorAnimatableProperty_MobileSafariFrameworkExtras_h */