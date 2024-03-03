//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef UIViewController_PKUIUtilities_h
#define UIViewController_PKUIUtilities_h
@import Foundation;

@interface UIViewController (PKUIUtilities)
/* instance methods */
- (id)pk_childrenForAppearance;
- (void)pk_applyAppearance:(id)appearance;
- (void)presentModalViewController:(id)controller withPaymentSetupContext:(long long)context;
- (void)pk_paymentSetupSetHideSetupLaterButton:(BOOL)button;
- (void)pk_paymentSetupPreflight:(id /* block */)preflight;
- (void)pk_presentViewController:(id)controller animated:(BOOL)animated popToViewControllerAfterPresentation:(id)presentation completion:(id /* block */)completion;
- (void)pk_presentViewController:(id)controller transition:(int)transition popToViewControllerAfterPresentation:(id)presentation completion:(id /* block */)completion;
- (void)_pk_presentViewController:(id)controller animated:(BOOL)animated transition:(int)transition popToViewControllerAfterPresentation:(id)presentation completion:(id /* block */)completion;
- (id)pkui_frontMostViewController;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (BOOL)pkui_userInterfaceIdiomSupportsLargeLayouts;
@end

#endif /* UIViewController_PKUIUtilities_h */