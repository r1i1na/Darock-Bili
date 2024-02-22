//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarVPNDisconnectView_h
#define STUIStatusBarVPNDisconnectView_h
@import Foundation;

#include "UIView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "STUIStatusBarDisplayable-Protocol.h"
#include "STUIStatusBarStringView.h"

@class CAShapeLayer, NSString, UIAccessibilityHUDItem, UIView;

@interface STUIStatusBarVPNDisconnectView : UIView<CAAnimationDelegate, STUIStatusBarDisplayable>

@property (retain, nonatomic) STUIStatusBarStringView *vpnView;
@property (retain, nonatomic) CAShapeLayer *vpnSlashMaskShapeLayer;
@property (retain, nonatomic) UIView *slashView;
@property (retain, nonatomic) CAShapeLayer *slashShapeLayer;
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
- (void)_setupForStyleAttributes:(id)attributes;
- (void)applyStyleAttributes:(id)attributes;
- (void)resetSlashForUpdate:(id)update;
- (void)animateSlashForUpdate:(id)update;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* STUIStatusBarVPNDisconnectView_h */