//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICursorAccessoryItemView_h
#define _UICursorAccessoryItemView_h
@import Foundation;

#include "UIControl.h"
#include "UIImageView.h"
#include "UILabel.h"
#include "_UIShapeView.h"

@interface _UICursorAccessoryItemView : UIControl {
  /* instance variables */
  UILabel *_labelView;
  UIImageView *_imageView;
  _UIShapeView *_backgroundView;
}

@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) double horizontalPadding;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) unsigned long long roundedEdges;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) struct { id x0; id x1; unsigned long long x2; } content;

/* class methods */
+ (id)_makeLabelView;
+ (id)_makeImageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isActive;
- (void)_recomputeColors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (BOOL)isHighlighted;
@end

#endif /* _UICursorAccessoryItemView_h */