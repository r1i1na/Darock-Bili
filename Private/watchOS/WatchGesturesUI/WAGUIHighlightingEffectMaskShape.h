//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIHighlightingEffectMaskShape_h
#define WAGUIHighlightingEffectMaskShape_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"

@class NSString, UIBezierPath;

@interface WAGUIHighlightingEffectMaskShape : NSObject<BSXPCSecureCoding>

@property (readonly, nonatomic) unsigned long long shape;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) unsigned long long maskedCorners;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } shapeFrame;
@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)roundedRectangleWithCornerRadius:(double)radius maskedCorners:(unsigned long long)corners cornerCurve:(id)curve shapeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
+ (id)shapeWithBezierPath:(id)path;

/* instance methods */
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* WAGUIHighlightingEffectMaskShape_h */