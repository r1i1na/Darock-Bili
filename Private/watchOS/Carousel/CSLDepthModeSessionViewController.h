//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthModeSessionViewController_h
#define CSLDepthModeSessionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "BSInvalidatable-Protocol.h"
#include "CSLDepthModeSessionViewControllerInputState.h"
#include "CSLDepthModeSessionViewControllerOutputState.h"
#include "CSLModernStatusBarView.h"
#include "CSLSButtonHandling-Protocol.h"
#include "CSLSOccluding-Protocol.h"
#include "CSLSceneMonitor.h"
#include "CSLSceneMonitorDelegate-Protocol.h"

@class BKSHIDEventDeferringToken, NSString;

@interface CSLDepthModeSessionViewController : UIViewController<CSLSceneMonitorDelegate, CSLSButtonHandling, CSLSOccluding>

@property (retain, nonatomic) CSLSceneMonitor *sceneMonitor;
@property (readonly, nonatomic) CSLDepthModeSessionViewControllerInputState *inputState;
@property (readonly, nonatomic) CSLDepthModeSessionViewControllerOutputState *outputState;
@property (retain, nonatomic) NSObject<BSInvalidatable> *deferringAssertion;
@property (retain, nonatomic) CSLModernStatusBarView *statusBar;
@property (nonatomic) BOOL wantsWheelEvents;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL occluding;
@property (readonly, nonatomic) BOOL touchesDisabled;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (BOOL)shouldAlertManagerPreHandleButtonEventType:(unsigned long long)type;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)_updateStateWithBlock:(id /* block */)block;
- (id)outputStateForTransitionFromState:(id)state toState:(id)state previousOutputState:(id)state;
- (void)sceneMonitor:(id)monitor sceneWasCreated:(id)created;
- (void)sceneMonitor:(id)monitor sceneWasDestroyed:(id)destroyed;
- (BOOL)isOccluding;
- (BOOL)areTouchesDisabled;
@end

#endif /* CSLDepthModeSessionViewController_h */