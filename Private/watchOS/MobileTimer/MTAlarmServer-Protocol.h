//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTAlarmServer_Protocol_h
#define MTAlarmServer_Protocol_h
@import Foundation;

#include "MTAgentDiagnosticDelegate-Protocol.h"
#include "MTAlarmObserver-Protocol.h"
#include "MTAlarmServer-Protocol.h"
#include "MTAlarmStorage.h"
#include "MTXPCConnectionListenerProvider.h"
#include "NAScheduler-Protocol.h"

@class NSString;

@protocol MTAlarmServer <MTXPCServer>
/* instance methods */
- (void)getAlarmsWithCompletion:(id /* block */)completion;
- (void)addAlarm:(id)alarm withCompletion:(id /* block */)completion;
- (void)updateAlarm:(id)alarm withCompletion:(id /* block */)completion;
- (void)removeAlarm:(id)alarm withCompletion:(id /* block */)completion;
- (void)snoozeAlarmWithIdentifier:(id)identifier snoozeAction:(unsigned long long)action withCompletion:(id /* block */)completion;
- (void)dismissAlarmWithIdentifier:(id)identifier dismissAction:(unsigned long long)action withCompletion:(id /* block */)completion;
- (void)nextSleepAlarmWithCompletion:(id /* block */)completion;
- (void)updateSleepAlarmsWithCompletion:(id /* block */)completion;
- (void)resetSleepAlarmSnoozeStateWithCompletion:(id /* block */)completion;
@end

#endif /* MTAlarmServer_Protocol_h */