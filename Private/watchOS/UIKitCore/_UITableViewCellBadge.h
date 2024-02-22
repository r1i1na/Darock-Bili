//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITableViewCellBadge_h
#define _UITableViewCellBadge_h
@import Foundation;

#include "UIView.h"
#include "UIColor.h"
#include "UILabel.h"

@class NSString, UIFont;

@interface _UITableViewCellBadge : UIView

@property (retain, nonatomic) UILabel *badgeTextLabel;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (double)minHeight;
- (void)_sizeToFit;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
@end

#endif /* _UITableViewCellBadge_h */