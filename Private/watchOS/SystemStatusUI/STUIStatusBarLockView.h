//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarLockView_h
#define STUIStatusBarLockView_h
@import Foundation;

#include "UIView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "STUIStatusBarDisplayable-Protocol.h"
#include "STUIStatusBarImageView.h"

@class NSString, UIAccessibilityHUDItem;

@interface STUIStatusBarLockView : UIView<CAAnimationDelegate, STUIStatusBarDisplayable>

@property (retain, nonatomic) STUIStatusBarImageView *bodyView;
@property (retain, nonatomic) STUIStatusBarImageView *shackleView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)applyStyleAttributes:(id)attributes;
- (void)resetLock;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)animateUnlockWithCompletionBlock:(id /* block */)block;
- (void)jiggleWithCompletionBlock:(id /* block */)block;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
@end

#endif /* STUIStatusBarLockView_h */