//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUIAlertControllerAlertPresenter_h
#define WFUIAlertControllerAlertPresenter_h
@import Foundation;

@interface WFUIAlertControllerAlertPresenter : NSObject
/* class methods */
+ (void)presentAlert:(id)alert withUserInterface:(id)interface;
+ (id)contentViewControllerForContentView:(id)view padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
@end

#endif /* WFUIAlertControllerAlertPresenter_h */