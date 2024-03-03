//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingViewController_h
#define CSLStingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CSLMainUIEventHandling-Protocol.h"
#include "CSLMainUIPolicy-Protocol.h"
#include "CSLStingAlertPolicy.h"
#include "CSLStingButtonEventGenerator.h"
#include "CSLStingButtonEventGeneratorDelegate-Protocol.h"
#include "CSLStingDiveView.h"
#include "CSLStingInterface-Protocol.h"
#include "CSLStingInterfaceDelegate-Protocol.h"
#include "CSLStingPresentationPolicy.h"
#include "CSLStingPresentationPolicyDelegate-Protocol.h"
#include "CSLStingSystemContextProvider.h"
#include "CSLStingSystemContextProviderDelegate-Protocol.h"
#include "CSLStingView.h"
#include "CSLStingViewControllerDelegate-Protocol.h"
#include "CSLStingViewDelegate-Protocol.h"
#include "CSLStingViewDiveStateMachine.h"
#include "CSLStingViewProtocol-Protocol.h"
#include "CSLStingViewStateMachine.h"
#include "CSLStingViewStateMachineDelegate-Protocol.h"
#include "CSLStingViewStateMachineProtocol-Protocol.h"
#include "CSLTimedButtonHandling-Protocol.h"

@class NSMapTable, NSString;

@interface CSLStingViewController : UIViewController<CSLStingViewStateMachineDelegate, CSLStingInterfaceDelegate, CSLStingViewDelegate, CSLStingPresentationPolicyDelegate, CSLStingSystemContextProviderDelegate, CSLStingButtonEventGeneratorDelegate, CSLTimedButtonHandling> {
  /* instance variables */
  NSObject<CSLMainUIEventHandling> *_eventHandler;
  CSLStingView *_stingView;
  CSLStingButtonEventGenerator *_buttonEventGenerator;
  CSLStingViewStateMachine *_stateMachine;
  CSLStingDiveView *_diveView;
  CSLStingViewDiveStateMachine *_diveStateMachine;
  BOOL _isInDiveSession;
  CSLStingSystemContextProvider *_systemContextProvider;
  NSObject<CSLStingInterface> *_interface;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) CSLStingPresentationPolicy *presentationPolicy;
@property (retain, nonatomic) CSLStingAlertPolicy *alertPolicy;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSMapTable *actionItemsMap;
@property (readonly, nonatomic) NSObject<CSLStingViewStateMachineProtocol> *currentStateMachine;
@property (readonly, nonatomic) NSObject<CSLStingViewProtocol> *currentView;
@property (weak, nonatomic) NSObject<CSLStingViewControllerDelegate> *delegate;
@property (readonly, nonatomic) BOOL presentingContent;
@property (readonly, nonatomic) NSObject<CSLMainUIPolicy> *mainUIPolicy;
@property (readonly, nonatomic) BOOL requiresEventFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventHandler:(id)handler alertPolicy:(id)policy;
- (void)viewDidLoad;
- (void)_handleAlertModelUpdate:(id)update;
- (void)_handleDepthModeUpdate:(id)update;
- (void)_updatePolicies;
- (void)_showRelevantStingViewAnimated:(BOOL)animated;
- (BOOL)shouldAlertManagerPreHandleButtonEventType:(unsigned long long)type;
- (void)systemContextProvider:(id)provider updatedCurrentContext:(id)context;
- (void)buttonEventGenerator:(id)generator generatedEvent:(id)event;
- (BOOL)buttonEventGenerator:(id)generator shouldIgnoreEvent:(id)event;
- (BOOL)buttonEventGenerator:(id)generator shouldSendDismissEvent:(id)event;
- (id)currentActionContextForButtonEventGenerator:(id)generator;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (void)interface:(id)interface updatedStartAction:(id)action;
- (void)_updateStateMachineActions;
- (void)interface:(id)interface updatedAlternateAction:(id)action;
- (void)interface:(id)interface updatedNextAction:(id)action;
- (void)interface:(id)interface linkAction:(id)action foreground:(BOOL)foreground didFinishExecutionWithError:(id)error;
- (void)interface:(id)interface linkAction:(id)action sessionDidNotStart:(id)start;
- (void)interface:(id)interface willStartLinkAction:(id)action;
- (BOOL)stateMachineShouldPerformStartAction:(id)action;
- (void)stateMachinePerformStartAction:(id)action startTime:(id)time;
- (void)stateMachinePerformNextAction:(id)action nextActionStartTime:(id)time;
- (void)stateMachinePerformAlternateAction:(id)action alternateActionTime:(id)time;
- (void)stateMachineAnimateToApplication:(id)application;
- (void)_animateToApplication:(id)application;
- (void)stingView:(id)view willTransitionToState:(id)state;
- (void)stingView:(id)view didTransitionToState:(id)state;
- (void)stingViewDidCancelMiniBuddy:(id)buddy;
- (void)stingViewDidRequestStingConfiguration:(id)configuration;
- (void)stingViewDidDismissErrorAlert:(id)alert shouldLaunchApplication:(BOOL)application;
- (BOOL)isPresentingContent;
- (void)presentationPolicy:(id)policy updatedPresentingContent:(BOOL)content;
- (void)openStingSettings;
- (void)_timeoutFiredForLinkAction:(id)action;
- (BOOL)isEnabled;
@end

#endif /* CSLStingViewController_h */