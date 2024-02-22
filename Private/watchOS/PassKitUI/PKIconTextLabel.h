//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKIconTextLabel_h
#define PKIconTextLabel_h
@import Foundation;

#include "UIView.h"

@class NSAttributedString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface PKIconTextLabel : UIView {
  /* instance variables */
  UILabel *_textLabel;
  UIImageView *_iconView;
}

@property (copy, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long iconAlignment;
@property (retain, nonatomic) UIImage *icon;

/* instance methods */
- (id)init;
- (id)initFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithText:(id)text icon:(id)icon;
- (id)initWithAttributedText:(id)text icon:(id)icon;
- (BOOL)hasContent;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (void)_updateView;
@end

#endif /* PKIconTextLabel_h */