//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFArbitrationParticipationController_h
#define AFArbitrationParticipationController_h
@import Foundation;

#include "AFArbitrationEventUpdatesDelegate-Protocol.h"
#include "AFSettingsConnection.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AFArbitrationParticipationController : NSObject<AFArbitrationEventUpdatesDelegate>

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *participationsForUserFeedback;
@property (retain, nonatomic) NSMutableArray *participationsPublished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)arbitrationSessionWillStart:(id)start;
- (void)arbitrationDidUpdateWithContext:(id)context session:(id)session completion:(id /* block */)completion;
- (void)arbitrationEndedAdvertising:(id)advertising;
- (void)arbitrationEndedTask:(id)task;
- (void)requestWillPresentUsefulUserResult:(id)result;
- (void)_publishFeedbackArbitrationRecordForNearMiss;
- (void)_publishFeedbackArbitrationRecord;
- (void)_updateUserFeedbackParticipationAllAdvertisements:(id)advertisements session:(id)session ownRecord:(id)record won:(BOOL)won triggerType:(id)type lastActivationTime:(double)time requestStartDate:(id)date voiceTriggerDate:(id)date scoreBoosters:(id)boosters deviceClass:(unsigned char)class;
- (void)_resetSettingsConnection;
@end

#endif /* AFArbitrationParticipationController_h */