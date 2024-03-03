//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIRootSceneWindow_h
#define UIRootSceneWindow_h
@import Foundation;

#include "_UIRootWindow.h"
#include "UIMutableTransformer.h"
#include "UIMutableTransformerDelegate-Protocol.h"
#include "UIView.h"

@class FBSDisplayConfiguration, NSString;

@interface UIRootSceneWindow : _UIRootWindow<UIMutableTransformerDelegate> {
  /* instance variables */
  UIView *_sceneContainerView;
}

@property (readonly, nonatomic) UIView *_sceneContainerView;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) UIMutableTransformer *sceneTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_isSecure;

/* instance methods */
- (id)initWithDisplay:(id)display;
- (id)initWithScreen:(id)screen;
- (id)initWithDisplayConfiguration:(id)configuration;
- (void)dealloc;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_appearsInLoupe;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)canBecomeKeyWindow;
- (id)_focusResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)transformsDidChange:(id)change;
- (void)_updateTransforms;
@end

#endif /* UIRootSceneWindow_h */