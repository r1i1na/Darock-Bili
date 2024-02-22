//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarDisplayableContainerView_h
#define STUIStatusBarDisplayableContainerView_h
@import Foundation;

#include "UIView.h"
#include "STUIStatusBarDisplayable-Protocol.h"

@class NSString, UIAccessibilityHUDItem, UIView;

@interface STUIStatusBarDisplayableContainerView : UIView<STUIStatusBarDisplayable>

@property (weak, nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)applyStyleAttributes:(id)attributes;
- (id)viewForLastBaselineLayout;
@end

#endif /* STUIStatusBarDisplayableContainerView_h */