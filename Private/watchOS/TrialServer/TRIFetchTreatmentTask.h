//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFetchTreatmentTask_h
#define TRIFetchTreatmentTask_h
@import Foundation;

#include "TRITreatmentBaseTask.h"
#include "TRIRetryableTask-Protocol.h"
#include "TRITaskCapabilityModifier.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask<TRIRetryableTask> {
  /* instance variables */
  TRITaskCapabilityModifier *_capabilityModifier;
}

@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskWithExperiment:(id)experiment treatmentId:(id)id taskAttributing:(id)attributing capabilityModifier:(id)modifier;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithExperiment:(id)experiment treatmentId:(id)id taskAttributing:(id)attributing capabilityModifier:(id)modifier;
- (void)runEnqueueHandlerUsingContext:(id)context;
- (void)runDequeueHandlerUsingContext:(id)context;
- (BOOL)_downloadAndSaveMAAssets:(id)maassets options:(id)options downloadNotificationKey:(id)key context:(id)context errorResult:(id *)result fetchError:(id *)error;
- (id)_saveTreatment:(id)treatment experimentRecord:(id)record assetURLs:(id)urls assetMetadata:(id)metadata context:(id)context paths:(id)paths downloadOptions:(id)options;
- (unsigned int)_ncvForNamespaceName:(id)name inExperimentRecord:(id)record;
- (id)_namespaceDescriptorForNamespaceName:(id)name fromExperimentRecord:(id)record referencingFactorsURL:(id)url;
- (id)_fetchTreatmentWithArtifactProvider:(id)provider experimentRecord:(id)record downloadOptions:(id)options context:(id)context treatment:(id *)treatment recordId:(id *)id treatmentFetchError:(id *)error;
- (id)_fetchAssetsWithArtifactProvider:(id)provider recordId:(id)id experimentRecord:(id)record assetIndexes:(id)indexes downloadOptions:(id)options context:(id)context assetURLs:(id *)urls treatmentFetchError:(id *)error;
- (id)_nextTasksForRunStatusFailureWithDeactivationReason:(unsigned long long)reason;
- (id)_nextTasksForRunStatus:(int)status;
- (void)_addMetricForFetchTreatmentTaskError:(int)error;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (id)_asPersistedTask;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIFetchTreatmentTask_h */