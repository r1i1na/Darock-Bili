//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInterfaceActionGroupView_h
#define UIInterfaceActionGroupView_h
@import Foundation;

#include "UIView.h"
#include "UIGestureRecognizerDelegatePrivate-Protocol.h"
#include "UIInterfaceActionGroup.h"
#include "UIInterfaceActionGroupDisplayPropertyObserver-Protocol.h"
#include "UIInterfaceActionGroupDisplaying-Protocol.h"
#include "UIInterfaceActionHandlerInvocationDelegate-Protocol.h"
#include "UIInterfaceActionHighlightAttributes.h"
#include "UIInterfaceActionRepresentationView.h"
#include "UIInterfaceActionSelectionTrackingController.h"
#include "UIInterfaceActionSeparatorAttributes.h"
#include "UIInterfaceActionVisualStyle.h"
#include "UILongPressGestureRecognizer.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "UIView.h"
#include "_UIContentConstraintsLayoutGuide.h"
#include "_UIInterfaceActionPresenting-Protocol.h"
#include "_UIInterfaceActionRepresentationsSequenceView.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSPointerArray, NSString, UIFont;
@protocol UIInterfaceActionVisualStyleProviding, UIView<UISeparatorDisplaying;

@interface UIInterfaceActionGroupView : UIView<UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying> {
  /* instance variables */
  BOOL _needsUpdateTopLevelViewsArrangement;
  BOOL _needsUpdateActionSequenceViewArrangement;
  BOOL _needsInitialViewLoading;
  BOOL _isSettingVisualStyle;
  UIInterfaceActionVisualStyle *_activeTestingVisualStyle;
  NSString *_cachedSizeCategory;
}

@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *appliedVisualStyle;
@property (readonly, nonatomic) _UIContentConstraintsLayoutGuide *contentGuide;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *topLevelItemsView;
@property (readonly, nonatomic) NSArray *topLevelViewArrangementConstraints;
@property (readonly, nonatomic) NSMutableArray *arrangedScrollableHeaderViews;
@property (readonly, nonatomic) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView;
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint;
@property (readonly, nonatomic) NSPointerArray *weakSimultaneouslyPresentedGroupViews;
@property (nonatomic) BOOL showsSeparatorAboveActions;
@property (readonly, nonatomic) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView;
@property (retain, nonatomic) UILongPressGestureRecognizer *actionSelectionGestureRecognizer;
@property (nonatomic) BOOL scrubbingEnabled;
@property (nonatomic) double requiredActionRepresentationWidth;
@property (retain, nonatomic) UIInterfaceActionRepresentationView *preferredActionRepresentation;
@property (readonly, nonatomic) UIInterfaceActionSelectionTrackingController *actionSelectionController;
@property (nonatomic) BOOL focusAvoidsNonDefaultActionsIfPossible;
@property (retain, nonatomic) UIInterfaceActionHighlightAttributes *visualStyleOverrideActionHighlightAttributes;
@property (retain, nonatomic) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes;
@property (retain, nonatomic) UIFont *visualStyleOverrideTitleLabelFont;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) double selectionHighlightContinuousCornerRadius;
@property (nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;
@property (readonly, nonatomic) UIInterfaceActionGroup *actionGroup;
@property (weak, nonatomic) NSObject<UIInterfaceActionHandlerInvocationDelegate> *actionHandlerInvocationDelegate;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) NSArray *allowedActionLayoutAxisByPriority;
@property (readonly, nonatomic) long long actionLayoutAxis;
@property (readonly, nonatomic) NSArray *arrangedHeaderViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIInterfaceActionVisualStyleProviding> *visualStyleProvider;

/* instance methods */
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_commonInitWithActionGroup:(id)group visualStyleProvider:(id)provider actionHandlerInvocationDelegate:(id)delegate;
- (id)initWithActionGroup:(id)group actionHandlerInvocationDelegate:(id)delegate;
- (id)_initWithActionGroup:(id)group visualStyleProvider:(id)provider actionHandlerInvocationDelegate:(id)delegate;
- (void)dealloc;
- (void)insertArrangedHeaderView:(id)view atIndex:(unsigned long long)index scrollable:(BOOL)scrollable;
- (void)removeArrangedHeaderView:(id)view;
- (void)scrollToCenterForInterfaceAction:(id)action;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)coordinator;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)coordinator;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonEdgeInsetsFromGroupViewEdge;
- (void)_updateRequiredActionRepresentationSizeConstraints;
- (void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)constraints;
- (void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)constraints;
- (id)preferredFocusedView;
- (id)_currentlyFocusedActionView;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)interfaceActionGroup:(id)group reloadDisplayedContentActionGroupProperties:(id)properties;
- (void)interfaceActionGroup:(id)group reloadDisplayedContentVisualStyle:(id)style;
- (void)setActiveTestingVisualStyle:(id)style;
- (void)_setAndApplyVisualStyle:(id)style;
- (void)reloadVisualStyle;
- (id)defaultVisualStyleForTraitCollection:(id)collection presentationStyle:(long long)style;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)touches;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)interfaceAction:(id)action invokeActionHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)recognizer;
- (void)setSimultaneouslyPresentedGroupViews:(id)views;
- (void)_associateWeakSimultaneouslyPresentedGroupViews:(id)views bidirectional:(BOOL)bidirectional;
- (id)_newActionGroupBackgroundView;
- (id)_interfaceActionOfFocusedRepresentationView;
- (void)_installContentGuideConstraints;
- (BOOL)_shouldInstallContentGuideConstraints;
- (void)_reloadStackViewContentsIfNeeded;
- (void)_updateRoundedCornerPositionForSubviews;
- (double)_topLevelItemsMargin;
- (void)_loadTopLevelItemsView;
- (void)_loadActionSequenceView;
- (void)_setLayoutDebuggingIdentifier:(id)identifier;
- (void)_updateActionSequenceViewDebugLayoutIdentifier;
- (void)_loadViewsIfNeeded;
- (void)_arrangeTopLevelViews;
- (id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)view;
- (id)_orderedTopLevelViews;
- (BOOL)_hasLoadedStackViewContents;
- (void)_arrangeActionViewsInActionSequenceView;
- (void)_updateActionSequenceScrollability;
- (void)_determineActualLayoutAxis;
- (void)_reloadTopSeparatorView;
- (id)_newSeparatorViewForSeparatingTitleAndButtons;
- (id)_interfaceActionGroupViewState;
- (id)_loadVisualStyleForTraitCollection:(id)collection;
- (id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)style traitCollection:(id)collection;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToActionsViewScrollView;
- (void)_applyVisualStyleToBackgroundViewDisplay;
- (void)_applyVisualStyleCornerRadius;
- (void)_addBackgroudViewToViewHierarchy:(id)hierarchy;
- (BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
- (long long)_actionLayoutAxisUnknowDisallowed;
- (id)_constraintsToPinView:(id)view toObject:(id)object identifier:(id)identifier;
- (void)_updateActionSequenceViewActionLayoutAxis;
- (void)_actionSequenceViewContentSizeDidChange;
- (id)_defaultOrderingForActionRepresentationViews:(id)views;
- (id)_actionRepresentationViewForAction:(id)action;
- (void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)animated;
- (void)_scrollActionRepresentationViewToVisibleForAction:(id)action animated:(BOOL)animated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_actionSequenceVisibleRectForMakingCenteredAction:(id)action;
- (void)_setUsAsThePresentingViewControllerForAllActions;
- (void)_removeUsAsThePresentingViewControllerForAllActions;
- (id)_allActionViews;
- (id)_viewDisplayingRoundedBackground;
- (id)_viewContainingTopLevelItems;
- (void)_setNeedsUpdateTopLevelViewsArrangement;
- (void)_setNeedsUpdateActionSequenceViewArrangement;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentEdgeFrame;
- (void)_setDrawsBackground:(BOOL)background;
- (void)_setSelectionHighlightContinuousCornerRadius:(double)radius;
- (void)_setAlignActionSeparatorLeadingEdgeWithContent:(BOOL)content;
- (void)_setVisualStyleOverrideSeparatorAttributes:(id)attributes;
- (void)_setVisualStyleOverrideActionHighlightAttributes:(id)attributes;
- (void)_setVisualStyleOverrideTitleLabelFont:(id)font;
- (BOOL)_isCornerRadiusDisplayEnabled;
- (id)_alertController;
- (id)_visualStyleOverrideSeparatorAttributes;
- (id)_visualStyleOverrideTitleLabelFont;
- (BOOL)_drawsBackground;
- (double)_selectionHighlightContinuousCornerRadius;
- (BOOL)_alignActionSeparatorLeadingEdgeWithContent;
@end

#endif /* UIInterfaceActionGroupView_h */