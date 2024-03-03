//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIViewControllerTransitionContext_h
#define WNUIViewControllerTransitionContext_h
@import Foundation;

#include "UIViewControllerContextTransitioning-Protocol.h"

@class NSString, UIView, UIViewController;

@interface WNUIViewControllerTransitionContext : NSObject<UIViewControllerContextTransitioning>

@property (nonatomic) BOOL complete;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL interactive;
@property (nonatomic) BOOL transitionWasCancelled;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (copy, nonatomic) id /* block */ completeTransitionHandler;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialFrameForFromViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalFrameForFromViewController;
@property (retain, nonatomic) UIViewController *toViewController;
@property (retain, nonatomic) UIView *toView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialFrameForToViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalFrameForToViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateInteractiveTransition:(double)transition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)completeTransition:(BOOL)transition;
- (id)viewControllerForKey:(id)key;
- (id)viewForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)controller;
- (BOOL)isComplete;
- (BOOL)isAnimated;
- (BOOL)isInteractive;
@end

#endif /* WNUIViewControllerTransitionContext_h */