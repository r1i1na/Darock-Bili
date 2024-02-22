//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCECommonAppDependentSignals_h
#define INFERENCESchemaINFERENCECommonAppDependentSignals_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals.h"
#include "INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals.h"

@class NSData, NSString;

@interface INFERENCESchemaINFERENCECommonAppDependentSignals : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isFirstPartyBundle; unsigned int x :1 isForegroundApp; unsigned int x :1 isResolvedApp; unsigned int x :1 appScoreFromModel; unsigned int x :1 compoundActiveBundleScore; unsigned int x :1 totalTimeSpentByUserInAppPerDay; unsigned int x :1 timeSpentByUserInAppToday; unsigned int x :1 timeSinceAppLastLaunchedInSec; } _has;
}

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL isFirstPartyBundle;
@property (nonatomic) BOOL hasIsFirstPartyBundle;
@property (nonatomic) BOOL isForegroundApp;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) BOOL isResolvedApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) float appScoreFromModel;
@property (nonatomic) BOOL hasAppScoreFromModel;
@property (nonatomic) double compoundActiveBundleScore;
@property (nonatomic) BOOL hasCompoundActiveBundleScore;
@property (nonatomic) unsigned int totalTimeSpentByUserInAppPerDay;
@property (nonatomic) BOOL hasTotalTimeSpentByUserInAppPerDay;
@property (nonatomic) unsigned int timeSpentByUserInAppToday;
@property (nonatomic) BOOL hasTimeSpentByUserInAppToday;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals *appDependentFrequencyAndRecencySignals;
@property (nonatomic) BOOL hasAppDependentFrequencyAndRecencySignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals *appDependentEntityFrequencyAndRecencySignals;
@property (nonatomic) BOOL hasAppDependentEntityFrequencyAndRecencySignals;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAppBundleId;
- (void)deleteIsFirstPartyBundle;
- (void)deleteIsForegroundApp;
- (void)deleteIsResolvedApp;
- (void)deleteAppScoreFromModel;
- (void)deleteCompoundActiveBundleScore;
- (void)deleteTotalTimeSpentByUserInAppPerDay;
- (void)deleteTimeSpentByUserInAppToday;
- (void)deleteTimeSinceAppLastLaunchedInSec;
- (void)deleteAppDependentFrequencyAndRecencySignals;
- (void)deleteAppDependentEntityFrequencyAndRecencySignals;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCECommonAppDependentSignals_h */