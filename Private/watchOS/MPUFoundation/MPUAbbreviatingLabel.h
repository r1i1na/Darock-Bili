//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPUAbbreviatingLabel_h
#define MPUAbbreviatingLabel_h
@import Foundation;

#include "UILabel.h"

@class NSArray, NSMutableArray;

@interface MPUAbbreviatingLabel : UILabel {
  /* instance variables */
  NSMutableArray *_textRepresentationSizes;
}

@property (copy, nonatomic) NSArray *textRepresentations;

/* instance methods */
- (void)setFont:(id)font;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setAttributedText:(id)text;
- (void)setText:(id)text;
- (void)setNumberOfLines:(long long)lines;
- (void)_calculateTextSizes;
- (void)_selectBestRepresentation;
- (void)_setTextRepresentation:(id)representation;
@end

#endif /* MPUAbbreviatingLabel_h */