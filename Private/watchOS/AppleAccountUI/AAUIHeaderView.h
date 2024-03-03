//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIHeaderView_h
#define AAUIHeaderView_h
@import Foundation;

#include "AAUIBuddyView.h"

@class UIImageView, UILabel, UIStackView;

@interface AAUIHeaderView : AAUIBuddyView {
  /* instance variables */
  UIStackView *_stackView;
}

@property (readonly, nonatomic) UIImageView *headerImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;

/* class methods */
+ (BOOL)requiresConstraintBasedLayout;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setHeaderImage:(id)image;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateStackViewSpacing;
- (void)_updateLabelFonts;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
@end

#endif /* AAUIHeaderView_h */