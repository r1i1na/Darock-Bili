//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFetchFactorPackSetTask_h
#define TRIFetchFactorPackSetTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIBMLTTaskSupport.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRetryableTask-Protocol.h"
#include "TRIRolloutTaskSupport.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskCapabilityModifier.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, TRIBMLTDeployment, TRIRolloutDeployment, _PASLock;
@protocol NSString<TRIFactorPackSetId;

@interface TRIFetchFactorPackSetTask : TRIBaseTask<TRIRetryableTask, TRIMetricsProviding> {
  /* instance variables */
  NSObject<TRITaskAttributing> *_taskAttribution;
  unsigned long long _construct;
  TRIRolloutTaskSupport *_rolloutSupport;
  TRIBMLTTaskSupport *_bmltSupport;
  TRITaskCapabilityModifier *_capabilityModifier;
  NSDictionary *_factorRecordsByAssetId;
  _PASLock *_guardedDownloadableRecord;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
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
+ (id)taskWithFactorPackSetId:(id)id taskAttribution:(id)attribution rolloutDeployment:(id)deployment capabilityModifier:(id)modifier;
+ (id)taskWithFactorPackSetId:(id)id taskAttribution:(id)attribution bmltDeployment:(id)deployment;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFactorPackSetId:(id)id taskAttribution:(id)attribution rolloutDeployment:(id)deployment capabilityModifier:(id)modifier;
- (id)initWithFactorPackSetId:(id)id taskAttribution:(id)attribution bmltDeployment:(id)deployment;
- (void)_removeDownloadableRecord:(id)record;
- (id)_downloadSetArtifactWithProvider:(id)provider downloadOptions:(id)options downloadNotificationKey:(id)key errorResult:(id *)result setArtifactFetchError:(id *)error;
- (id)_requiredAssetsForFactorPackSet:(id)set context:(id)context;
- (id)_uniqueUninstalledAssets:(id)assets;
- (id)_subscribedOnDemandFactorsForAssets:(id)assets factorPackSet:(id)set context:(id)context;
- (BOOL)_downloadAndSaveCKAssetsWithMetadata:(id)metadata artifactProvider:(id)provider options:(id)options downloadNotificationKey:(id)key context:(id)context assetsDownloadSize:(unsigned long long *)size errorResult:(id *)result fetchError:(id *)error;
- (BOOL)_downloadAndSaveMAAssets:(id)maassets options:(id)options downloadNotificationKey:(id)key context:(id)context assetsDownloadSize:(unsigned long long *)size errorResult:(id *)result fetchError:(id *)error;
- (BOOL)_saveFactorPackSet:(id)set requiredAssetMap:(id)map context:(id)context;
- (BOOL)incompatibleNamespaceNameForBMLT:(id)bmlt namespaceDescriptorProvider:(id)provider;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (void)_logOnDemandFactor:(id)factor metricName:(id)name namespaceName:(id)name client:(id)client error:(id)error;
- (void)_addMetricForFetchFactorPackSetTaskError:(int)error;
- (void)_bmltFetchTelemetryIfApplicableWithSuccess:(BOOL)success bmltRecord:(id)record serverContext:(id)context;
- (BOOL)isEqual:(id)equal;
- (id)dimensions;
- (id)metrics;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIFetchFactorPackSetTask_h */