//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKLabelViewController_h
#define PKLabelViewController_h
@import Foundation;

#include "UIViewController.h"

@class NSAttributedString, UITextView;

@interface PKLabelViewController : UIViewController {
  /* instance variables */
  UITextView *_textView;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;

/* instance methods */
- (id)init;
- (id)initWithAttributedText:(id)text;
- (void)loadView;
- (void)viewWillLayoutSubviews;
@end

#endif /* PKLabelViewController_h */