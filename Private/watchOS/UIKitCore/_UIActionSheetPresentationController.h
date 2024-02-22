//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIActionSheetPresentationController_h
#define _UIActionSheetPresentationController_h
@import Foundation;

#include "UIPopoverPresentationController.h"
#include "UIActionSheetPresentationControllerDelegate-Protocol.h"
#include "_UIActionSheetCompactPresentationController.h"
#include "_UIActionSheetCompactPresentationControllerDelegate-Protocol.h"

@class NSString;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController<_UIActionSheetCompactPresentationControllerDelegate>

@property (retain, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController;
@property (nonatomic) BOOL avoidsKeyboardDisabled;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (nonatomic) BOOL _shouldUseCompactPresentationControllerWhenPresentedInSheet;
@property (weak, nonatomic) NSObject<UIActionSheetPresentationControllerDelegate> *actionSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_visualStyleForTraitCollection:(id)collection;
- (id)_compactPresentationController;
- (long long)_presentationContextForViewController:(id)controller;
- (id)_presentationControllerForTraitCollection:(id)collection;
- (void)dealloc;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)dimmingViewWasTapped:(id)tapped withDismissCompletion:(id /* block */)completion;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)dismiss;
- (BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)context;
- (void)_setShouldUseCompactPresentationControllerWhenPresentedInSheet:(BOOL)sheet;
@end

#endif /* _UIActionSheetPresentationController_h */