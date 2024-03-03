//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAttributedAlertButton_h
#define WFAttributedAlertButton_h
@import Foundation;

#include "WFSelectableAlertButton.h"

@class NSAttributedString, NSString;

@interface WFAttributedAlertButton : WFSelectableAlertButton

@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSString *label;

/* class methods */
+ (id)buttonWithAttributedTitle:(id)title label:(id)label selected:(BOOL)selected style:(long long)style handler:(id /* block */)handler;

/* instance methods */
@end

#endif /* WFAttributedAlertButton_h */