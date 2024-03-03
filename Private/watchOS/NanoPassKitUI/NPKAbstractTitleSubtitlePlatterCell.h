//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAbstractTitleSubtitlePlatterCell_h
#define NPKAbstractTitleSubtitlePlatterCell_h
@import Foundation;

#include "PUICListPlatterCell.h"

@class NSArray, UILabel, UIView;

@interface NPKAbstractTitleSubtitlePlatterCell : PUICListPlatterCell

@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic) BOOL showingTitle;
@property (nonatomic) BOOL showingSubtitle;
@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UILabel *subtitleLabel;

/* instance methods */
- (id)initWithTitleView:(id)view frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setTitleFont:(id)font;
- (void)_contentSizeCategoryDidChange:(id)change;
- (void)_updateForContentSize;
- (void)_applyConstraints;
- (void)labelUpdatedText:(id)text;
@end

#endif /* NPKAbstractTitleSubtitlePlatterCell_h */