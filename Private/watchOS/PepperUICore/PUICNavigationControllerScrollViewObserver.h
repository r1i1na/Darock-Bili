//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICNavigationControllerScrollViewObserver_h
#define PUICNavigationControllerScrollViewObserver_h
@import Foundation;

#include "PUICNavigationBar.h"
#include "PUICNavigationBarVisualProvider.h"
#include "PUICNavigationController.h"
#include "_UIScrollViewScrollObserver_ForPUICOnly-Protocol.h"

@class NSString, UIScrollView;

@interface PUICNavigationControllerScrollViewObserver : NSObject<_UIScrollViewScrollObserver_ForPUICOnly>

@property (nonatomic) BOOL didStealGesture;
@property (weak, nonatomic) UIScrollView *trackedScrollView;
@property (weak, nonatomic) PUICNavigationController *navigationController;
@property (weak, nonatomic) PUICNavigationBar *navigationBar;
@property (weak, nonatomic) PUICNavigationBarVisualProvider *visualProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNavigationController:(id)controller;
- (void)trackScrollView:(id)view;
- (BOOL)_shouldUpdateNavigationControllerWithScrollView:(id)view;
- (void)_observeScrollViewSafeAreaInsetsDidChange:(id)change;
- (void)_scrollViewDidBecomeFirstResponder:(id)responder;
- (void)_scrollViewDidResignFirstResponder:(id)responder;
- (void)_scrollView:(id)view willMoveToWindow:(id)window;
- (void)_observeScrollViewDidScroll:(id)scroll;
- (void)_observeScrollView:(id)view willEndDraggingWithVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset unclampedOriginalTarget:(struct CGPoint { double x0; double x1; })target;
- (double)offsetForScrollView:(id)view withTargetOffset:(double)offset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_revealableContentPaddingForObservedScrollView:(id)view includeContentWithCollapsedAffinity:(BOOL)affinity;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_collapsableContentPaddingForObservedScrollView:(id)view;
@end

#endif /* PUICNavigationControllerScrollViewObserver_h */