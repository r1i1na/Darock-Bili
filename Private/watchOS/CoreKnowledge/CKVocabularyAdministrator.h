//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVocabularyAdministrator_h
#define CKVocabularyAdministrator_h
@import Foundation;

#include "CKVAdminService-Protocol.h"

@protocol OS_dispatch_queue;

@interface CKVocabularyAdministrator : NSObject {
  /* instance variables */
  NSObject<CKVAdminService> *_adminService;
  double _timeout;
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)makeAdministrator;
+ (void)initialize;

/* instance methods */
- (id)initWithAdminService:(id)service queue:(id)queue;
- (id)initWithAdminService:(id)service timeout:(double)timeout queue:(id)queue;
- (id)init;
- (void)triggerMigration:(id /* block */)migration;
- (void)triggerMigration:(BOOL)migration completion:(id /* block */)completion;
- (void)_triggerMigration:(BOOL)migration completeAfterTrigger:(BOOL)trigger completion:(id /* block */)completion;
- (void)triggerMaintenance:(id /* block */)maintenance;
- (void)captureVocabularySnapshot:(id)snapshot completion:(id /* block */)completion;
- (void)findProfileSnapshotsNearDate:(id)date completion:(id /* block */)completion;
- (void)captureVocabularySnapshot:(id /* block */)snapshot;
- (id)simulateEventHandling:(BOOL)handling;
- (void)deleteAllItemsWithUserId:(id)id completion:(id /* block */)completion;
- (void)deleteAllItemsWithUserId:(id)id deviceId:(id)id completion:(id /* block */)completion;
- (void)rebuildSpeechProfileForUserId:(id)id completion:(id /* block */)completion;
- (id)rawSpeechProfileConverter;
- (id)rawSpeechProfileConverterOmittingItemTypes:(id)types;
- (void)beginEvaluation:(id)evaluation options:(unsigned short)options completion:(id /* block */)completion;
- (long long)beginEvaluation:(id)evaluation options:(unsigned short)options;
- (void)endEvaluation:(id /* block */)evaluation;
- (long long)endEvaluation;
- (void)executeEvaluationTask:(unsigned short)task completion:(id /* block */)completion;
- (long long)executeEvaluationTask:(unsigned short)task;
- (long long)_synchronouslyWrapRequest:(id /* block */)request;
@end

#endif /* CKVocabularyAdministrator_h */