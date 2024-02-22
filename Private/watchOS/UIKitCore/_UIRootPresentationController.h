//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRootPresentationController_h
#define _UIRootPresentationController_h
@import Foundation;

#include "_UISheetPresentationController.h"
#include "UIStatusBarHideAnimationParameters.h"
#include "UIStatusBarStyleAnimationParameters.h"
#include "UIWindow.h"
#include "_UIStatusBarAnimationProviding-Protocol.h"

@class NSString;

@interface _UIRootPresentationController : _UISheetPresentationController<_UIStatusBarAnimationProviding>

@property (readonly, weak, nonatomic) UIWindow *presentingWindow;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) int _preferredStatusBarVisibility;
@property (readonly, nonatomic) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (readonly, nonatomic) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (readonly, nonatomic) long long preferredStatusBarUpdateAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_allowsDeferredTransitions;

/* instance methods */
- (id)initWithPresentedViewController:(id)controller presentingWindow:(id)window;
- (id)_parentTraitEnvironment;
- (id)_fullscreenPresentationSuperview;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (BOOL)_isRootPresentation;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (id)_createVisualStyleForProvider:(id)provider;
- (id)_preferredStatusBarStyleAnimationParameters;
- (id)_preferredStatusBarHideAnimationParameters;
@end

#endif /* _UIRootPresentationController_h */