//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.5.0.0.0
//
#ifndef UISimpleTextPrintFormatter_h
#define UISimpleTextPrintFormatter_h
@import Foundation;

#include "UIPrintFormatter.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (copy, @dynamic, nonatomic) NSString *text;
@property (copy, @dynamic, nonatomic) NSAttributedString *attributedText;
@property (retain, @dynamic, nonatomic) UIFont *font;
@property (retain, @dynamic, nonatomic) UIColor *color;
@property (@dynamic, nonatomic) long long textAlignment;

/* instance methods */
- (id)initWithText:(id)text;
- (id)initWithAttributedText:(id)text;
@end

#endif /* UISimpleTextPrintFormatter_h */