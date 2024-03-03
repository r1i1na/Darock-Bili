//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPushToTransportSyncStep_h
#define CPLPushToTransportSyncStep_h
@import Foundation;

#include "CPLSimpleTaskSyncStep.h"

@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep

@property (readonly, nonatomic) BOOL highPriority;

/* instance methods */
- (id)initWithSyncManager:(id)manager syncSession:(id)session highPriority:(BOOL)priority;
- (void)cancelAllTasks:(BOOL)tasks;
- (id)newTask;
@end

#endif /* CPLPushToTransportSyncStep_h */