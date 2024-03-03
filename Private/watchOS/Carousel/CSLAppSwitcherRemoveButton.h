//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherRemoveButton_h
#define CSLAppSwitcherRemoveButton_h
@import Foundation;

#include "CSLUIButton.h"

@class UIImageView, UIView;

@interface CSLAppSwitcherRemoveButton : CSLUIButton {
  /* instance variables */
  BOOL _isDisplayingDefaultMessage;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setHighlighted:(BOOL)highlighted;
@end

#endif /* CSLAppSwitcherRemoveButton_h */