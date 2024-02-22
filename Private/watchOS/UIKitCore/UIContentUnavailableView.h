//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIContentUnavailableView_h
#define UIContentUnavailableView_h
@import Foundation;

#include "UIView.h"
#include "UIActivityIndicatorView.h"
#include "UIButton.h"
#include "UIContentUnavailableConfiguration.h"
#include "UIContentView-Protocol.h"
#include "UIImageView.h"
#include "UILabel.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_UIContentUnavailableScrollView.h"
#include "_UISystemBackgroundView.h"

@class NSString;

@interface UIContentUnavailableView : UIView<UIScrollViewDelegate, UIContentView> {
  /* instance variables */
  double _preferredMaxLayoutWidth;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
  struct { unsigned int x :1 isEmbeddedInWrapperView; unsigned int x :1 trackingKeyboardFrame; unsigned int x :1 adjustsLayoutForKeyboard; unsigned int x :1 imageViewFrameInvalid; unsigned int x :1 activityIndicatorFrameInvalid; unsigned int x :1 textLabelFrameInvalid; unsigned int x :1 secondaryTextLabelFrameInvalid; unsigned int x :1 buttonFrameInvalid; unsigned int x :1 secondaryButtonFrameInvalid; } _contentViewFlags;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *secondaryTextLabel;
@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) UIButton *secondaryButton;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) _UIContentUnavailableScrollView *scrollView;
@property (readonly, nonatomic) _UISystemBackgroundView *backgroundView;
@property (readonly, nonatomic) BOOL shouldReparentScrollViewPanGestureRecognizer;
@property (copy, nonatomic) UIContentUnavailableConfiguration *configuration;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_encodableSubviews;
- (BOOL)supportsConfiguration:(id)configuration;
- (void)_applyConfiguration:(id)configuration;
- (void)_applyBackgroundConfiguration:(id)configuration;
- (id)_imageView;
- (id)_textLabel;
- (id)_secondaryTextLabel;
- (id)_activityIndicator;
- (id)_button;
- (id)_secondaryButton;
- (id)_containerView;
- (BOOL)isScrollEnabled;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_scrollViewInsets;
- (void)scrollViewDidChangeAdjustedContentInset:(id)inset;
- (void)_reconfigureKeyboardLayoutAdjustment;
- (void)_handleKeyboardNotification:(id)notification aboutToHide:(BOOL)hide;
- (void)_keyboardAboutToShow:(id)show;
- (void)_keyboardAboutToChangeFrame:(id)frame;
- (void)_keyboardAboutToHide:(id)hide;
- (double)_keyboardInset;
- (void)_setMultilineContextWidth:(double)width;
- (double)_multilineContextWidth;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (double)_preferredMaxLayoutWidth;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)_checkWhetherEmbeddedInWrapperView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; })_computeLayoutInfoRestrictedToSize:(struct CGSize { double x0; double x1; })size;
- (void)_computeLayoutInfoForView:(id)view info:(struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)info layoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; } *)info;
- (void)_computeButtonLayoutInfo:(struct UIContentUnavailableViewLayoutInfo { struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x0; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x1; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x2; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x3; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x4; struct UIContentUnavailableViewElementLayoutInfo { struct CGSize { double x0; double x1; } x0; BOOL x1; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x2; } x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x10; struct CGSize { double x0; double x1; } x11; struct CGSize { double x0; double x1; } x12; } *)info;
- (BOOL)_prefersEqualButtonAndSecondaryButtonWidths;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_alignmentInsetsForView:(id)view;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)traitCollectionDidChange:(id)change;
- (void)_clearInvalidFrameFlags;
- (void)layoutSubviews;
- (id)_scrollView;
- (id)_backgroundView;
@end

#endif /* UIContentUnavailableView_h */