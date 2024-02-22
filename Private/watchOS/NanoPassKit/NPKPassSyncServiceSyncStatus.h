//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassSyncServiceSyncStatus_h
#define NPKPassSyncServiceSyncStatus_h
@import Foundation;

#include "NPKPassSyncChange.h"

@class NSDate;

@interface NPKPassSyncServiceSyncStatus : NSObject

@property (retain, nonatomic) NPKPassSyncChange *lastKnownOutgoingChange;
@property (retain, nonatomic) NSDate *outgoingChangeDate;
@property (retain, nonatomic) NPKPassSyncChange *lastKnownIncomingChange;
@property (retain, nonatomic) NSDate *incomingChangeDate;

/* instance methods */
- (BOOL)shouldSyncWithCurrentIncomingChange:(id)change currentOutgoingChange:(id)change currentDate:(id)date;
- (void)reset;
@end

#endif /* NPKPassSyncServiceSyncStatus_h */