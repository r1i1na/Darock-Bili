//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLShutdownAlertProvider_h
#define CSLShutdownAlertProvider_h
@import Foundation;

#include "CSLObliterationViewControllerOwnerDelegate-Protocol.h"
#include "CSLSUIProvider-Protocol.h"
#include "CSLShutdownContainerViewController.h"
#include "CSLShutdownLessonDelegate.h"
#include "CUISAlertProvider-Protocol.h"
#include "CUISAlertProviderDelegate-Protocol.h"

@class CSLSButtonHandler, NSString;

@interface CSLShutdownAlertProvider : NSObject<CSLSUIProvider, CUISAlertProvider, CSLObliterationViewControllerOwnerDelegate> {
  /* instance variables */
  CSLShutdownContainerViewController *_shutdownContainerController;
  CSLSButtonHandler *_buttonHandler;
}

@property (readonly, nonatomic) CSLShutdownLessonDelegate *lessonDelegate;
@property (weak, nonatomic) NSObject<CUISAlertProviderDelegate> *alertProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (BOOL)isActivated;
- (void)requestActivateAnimated:(BOOL)animated options:(unsigned long long)options withCompletion:(id /* block */)completion;
- (void)releaseHeldButtons;
- (void)animateSirenSlider;
- (void)_playHaptic;
- (void)deactivateController:(BOOL)controller withCompletion:(id /* block */)completion;
- (void)requestUITriggerWithRegistration:(id)registration UITriggerName:(id)name withDictionary:(id)dictionary withReason:(long long)reason withCompletion:(id /* block */)completion;
@end

#endif /* CSLShutdownAlertProvider_h */