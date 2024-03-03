//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERelevanceEngineDebugger_h
#define RERelevanceEngineDebugger_h
@import Foundation;

#include "RESingleton.h"
#include "REObserverStore.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger : RESingleton {
  /* instance variables */
  REObserverStore *_observerStore;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *availableEngines;

/* instance methods */
- (id)_init;
- (id)engineWithName:(id)name;
- (id)firstEngine;
- (BOOL)_isValidEngine:(id)engine;
- (id)diagnosticLogsForEngine:(id)engine;
- (void)reloadDataSourceForEngine:(id)engine;
- (id)dataSourceElementsForEngine:(id)engine;
- (id)allRelevanceProviderValuesForEngine:(id)engine;
- (id)orderedElementsForEngine:(id)engine;
- (void)_registerEngine:(id)engine;
- (void)_unregisterEngine:(id)engine;
@end

#endif /* RERelevanceEngineDebugger_h */