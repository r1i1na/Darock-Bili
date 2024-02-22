//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIToolbarVisualProviderLegacyIOS_h
#define _UIToolbarVisualProviderLegacyIOS_h
@import Foundation;

#include "_UIToolbarVisualProvider.h"
#include "UIView.h"
#include "_UIBarBackground.h"
#include "_UIBarBackgroundLayoutLegacy.h"

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {
  /* instance variables */
  _UIBarBackground *_backgroundView;
  _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
  UIView *_customBackgroundView;
}

/* instance methods */
- (void)_createViewsForItems:(id)items;
- (void)updateItemsForNewFrame:(id)frame;
- (id)_repositionedItemsFromItems:(id)items withBarButtonFrames:(id *)frames withHitRects:(id *)rects buttonIndexes:(id *)indexes textButtonIndexes:(id *)indexes;
- (void)layoutSubviews;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)adjustment;
- (id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item resetFontScaleAdjustment:(BOOL)adjustment actuallyRepositionButtons:(BOOL)buttons;
- (void)updateWithItems:(id)items fromOldItems:(id)items animate:(BOOL)animate;
- (void)customViewChangedForButtonItem:(id)item;
- (void)setCustomBackgroundView:(id)view;
- (id)currentBackgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)style;
- (void)updateBarBackground;
- (void)updateBackgroundGroupName;
- (id)_currentCustomBackground;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)orientation;
- (double)_edgeMarginForBorderedItem:(BOOL)item isText:(BOOL)text;
- (BOOL)toolbarIsSmall;
@end

#endif /* _UIToolbarVisualProviderLegacyIOS_h */