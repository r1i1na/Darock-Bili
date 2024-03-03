//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSettingsSyncStateMachine_h
#define SCLSettingsSyncStateMachine_h
@import Foundation;

#include "SCLSettingsSyncContext.h"
#include "SCLSettingsSyncErrorHandler.h"
#include "SCLSettingsSyncState.h"
#include "SCLSettingsSyncStateMachineDelegate-Protocol.h"

@interface SCLSettingsSyncStateMachine : NSObject

@property (weak, nonatomic) NSObject<SCLSettingsSyncStateMachineDelegate> *delegate;
@property (retain, nonatomic) SCLSettingsSyncContext *context;
@property (readonly, nonatomic) SCLSettingsSyncErrorHandler *errorHandler;
@property (readonly, nonatomic) SCLSettingsSyncState *currentState;
@property (readonly, nonatomic) SCLSettingsSyncState *syncedState;
@property (readonly, nonatomic) SCLSettingsSyncState *pendingSendState;
@property (readonly, nonatomic) SCLSettingsSyncState *sendingState;
@property (readonly, nonatomic) SCLSettingsSyncState *sentState;
@property (readonly, nonatomic) SCLSettingsSyncState *failedState;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)activate;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)significantUserInteractionOccurred;
- (void)xpcActivityStarted;
- (void)enqueueFailedWithError:(id)error;
- (void)didEnqueueMessage:(id)message;
- (void)message:(id)message failedWithError:(id)error;
- (void)messageDidSend:(id)send;
- (void)messageWasDelivered:(id)delivered;
- (void)message:(id)message didFailToAcknowledgeWithError:(id)error;
- (BOOL)_isRelevantMessage:(id)message;
- (void)performSync;
- (void)scheduleRetryWithActivityCriteria:(id)criteria;
- (void)cancelRetryActivity;
- (void)scheduleCommitTimerWithInterval:(double)interval;
- (void)cancelCommitTimer;
- (void)transitionToState:(id)state;
@end

#endif /* SCLSettingsSyncStateMachine_h */