//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardFooterCell_h
#define HKEmergencyCardFooterCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "UITextViewDelegate-Protocol.h"

@class NSAttributedString, NSString, UITextView;

@interface HKEmergencyCardFooterCell : UITableViewCell<UITextViewDelegate>

@property (retain, nonatomic) UITextView *footerTextView;
@property (retain, nonatomic) NSAttributedString *footerTextViewString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setupViews;
- (void)setupConstraints;
- (void)setFooterText:(id)text;
- (void)setTextViewDelegate:(id)delegate;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (void)tintColorDidChange;
- (void)_updateTextColor;
@end

#endif /* HKEmergencyCardFooterCell_h */