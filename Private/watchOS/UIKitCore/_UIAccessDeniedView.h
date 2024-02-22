//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAccessDeniedView_h
#define _UIAccessDeniedView_h
@import Foundation;

#include "UIView.h"
#include "UIImageView.h"
#include "UILabel.h"

@class NSString;

@interface _UIAccessDeniedView : UIView {
  /* instance variables */
  UIImageView *_lockView;
  UILabel *_titleLabel;
  UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_textColor;
- (void)layoutSubviews;
@end

#endif /* _UIAccessDeniedView_h */