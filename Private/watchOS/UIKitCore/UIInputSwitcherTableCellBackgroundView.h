//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputSwitcherTableCellBackgroundView_h
#define UIInputSwitcherTableCellBackgroundView_h
@import Foundation;

#include "UIView.h"

@interface UIInputSwitcherTableCellBackgroundView : UIView

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL drawsOpaque;
@property (nonatomic) BOOL drawsBorder;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) unsigned long long roundedCorners;

/* instance methods */
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)isSelected;
@end

#endif /* UIInputSwitcherTableCellBackgroundView_h */