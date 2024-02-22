//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIActivityActionCellTitleLabel_h
#define _UIActivityActionCellTitleLabel_h
@import Foundation;

#include "UILabel.h"

@class NSString;

@interface _UIActivityActionCellTitleLabel : UILabel

@property (retain, nonatomic) NSString *textStyle;

/* instance methods */
- (void)setText:(id)text;
- (void)_updateFontWithSizeCategory:(id)category;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits sizeCategory:(id)category;
@end

#endif /* _UIActivityActionCellTitleLabel_h */