//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSTextBlock_h
#define NSTextBlock_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface NSTextBlock : NSObject<NSSecureCoding, NSCoding, NSCopying> {
  /* instance variables */
  void * _propVals;
  unsigned long long _propMask;
  unsigned long long _typeMask;
  id _primParamVal;
  id _otherParamVals;
}

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)_setValue:(double)value type:(unsigned long long)type forParameter:(unsigned long long)parameter;
- (double)_valueForParameter:(unsigned long long)parameter;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)parameter;
- (void)_takeValuesFromTextBlock:(id)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setValue:(double)value type:(unsigned long long)type forDimension:(unsigned long long)dimension;
- (double)valueForDimension:(unsigned long long)dimension;
- (unsigned long long)valueTypeForDimension:(unsigned long long)dimension;
- (void)setContentWidth:(double)width type:(unsigned long long)type;
- (double)contentWidth;
- (unsigned long long)contentWidthValueType;
- (void)setWidth:(double)width type:(unsigned long long)type forLayer:(long long)layer edge:(unsigned long long)edge;
- (double)widthForLayer:(long long)layer edge:(unsigned long long)edge;
- (unsigned long long)widthValueTypeForLayer:(long long)layer edge:(unsigned long long)edge;
- (void)setWidth:(double)width type:(unsigned long long)type forLayer:(long long)layer;
- (void)setVerticalAlignment:(unsigned long long)alignment;
- (unsigned long long)verticalAlignment;
- (void)setBackgroundColor:(id)color;
- (id)backgroundColor;
- (void)setBorderColor:(id)color forEdge:(unsigned long long)edge;
- (id)borderColorForEdge:(unsigned long long)edge;
- (void)setBorderColor:(id)color;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayoutAtPoint:(struct CGPoint { double x0; double x1; })point inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect textContainer:(id)container characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect textContainer:(id)container characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inView:(id)view characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range layoutManager:(id)manager;
- (id)_attributeDescription;
@end

#endif /* NSTextBlock_h */