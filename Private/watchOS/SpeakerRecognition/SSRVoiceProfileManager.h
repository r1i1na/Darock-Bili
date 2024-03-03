//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRVoiceProfileManager_h
#define SSRVoiceProfileManager_h
@import Foundation;

#include "SSRRemoteControlClient.h"

@class NSUUID;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileManager : NSObject

@property (nonatomic) unsigned long long currentDeviceCategory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) SSRRemoteControlClient *remoteControlClient;

/* class methods */
+ (id)sharedInstance;
+ (id)sharedInstanceWithEndpointId:(id)id;

/* instance methods */
- (id)init;
- (id)initWithEndpointId:(id)id;
- (id)getSATEnrollmentPath;
- (BOOL)isSpeakerRecognitionAvailable;
- (id)baseDir;
- (id)SSRSpeakerProfilesBasePath;
- (id)SSRBasePathForAppDomain:(id)domain;
- (id)modelDirectoryPathForProfile:(id)profile;
- (void)discardSiriEnrollmentForLanguageCode:(id)code;
- (id)discardSiriEnrollmentForProfileId:(id)id forLanguageCode:(id)code;
- (id)_getVoiceProfilesForSiriProfileId:(id)id withLanguageCode:(id)code;
- (id)newVoiceProfileWithLocale:(id)locale withAppDomain:(id)domain;
- (id)updateVoiceProfile:(id)profile withUserName:(id)name;
- (void)addUtterances:(id)utterances toProfile:(id)profile withContext:(id)context withCompletion:(id /* block */)completion;
- (void)isImplicitTrainingRequiredForVoiceProfileId:(id)id locale:(id)locale completion:(id /* block */)completion;
- (void)notifyImplicitTrainingUtteranceAvailable:(id)available forVoiceProfileId:(id)id withRecordDeviceInfo:(id)info withRecordCtxt:(id)ctxt withVoiceTriggerCtxt:(id)ctxt withOtherCtxt:(id)ctxt assetToUse:(id)use withCompletion:(id /* block */)completion;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getCacheDirectoryForAppDomain:(id)domain;
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)user getData:(id /* block */)data completion:(id /* block */)completion;
- (void)notifyUserVoiceProfileUpdateReady;
- (BOOL)_checkIfDownloadRequiredForProfileId:(id)id;
- (id)_downloadAndEnrollVoiceProfileForProfileId:(id)id withDownloadTriggerBlock:(id /* block */)block;
- (void)_downloadVoiceProfileForProfileId:(id)id forDeviceCategory:(unsigned long long)category withDownloadTriggerBlock:(id /* block */)block withCompletion:(id /* block */)completion;
- (id)_enrollVoiceProfileForSiriProfileId:(id)id fromCacheDirectoryPath:(id)path withCategoryType:(unsigned long long)type;
- (id)_enableVoiceTriggerIfLanguageMatches:(id)matches;
- (id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)id forDeviceCategory:(unsigned long long)category forVoiceProfileVersion:(unsigned long long)version;
- (id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)path;
- (void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)id withError:(id)error;
- (void)uploadUserVoiceProfileForSiriProfileId:(id)id withUploadTrigger:(id /* block */)trigger completion:(id /* block */)completion;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)list;
- (void)notifyUserVoiceProfileUploadComplete;
- (id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)id;
- (void)_copyExplicitEnrollmentFilesFromPath:(id)path toPath:(id)path withCompletion:(id /* block */)completion;
- (id)_copyVoiceProfileAtPath:(id)path toPath:(id)path;
- (id)_prepareVoiceProfileWithSiriProfileId:(id)id withUploadBlock:(id /* block */)block;
- (void)_markVoiceProfileTrainingSyncForLanguage:(id)language;
- (BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)language;
- (id)getCachedVoiceProfileAvailabilityMetaBlob;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)code withBackupMetaBlob:(id)blob;
- (void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)code withCompletionBlock:(id /* block */)block;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)code;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)language;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)language;
- (BOOL)_isDirectory:(id)directory;
- (id)_CSSATLegacyUploadPath;
- (id)provisionedVoiceProfilesForAppDomain:(id)domain withLocale:(id)locale;
- (id)provisionedVoiceProfilesForLocale:(id)locale;
- (id)voiceProfileForId:(id)id;
- (id)getVoiceProfileAnalyticsForAppDomain:(id)domain withLocale:(id)locale;
- (void)triggerVoiceProfileMigrationWithCompletion:(id /* block */)completion;
- (void)migrateTDVoiceProfilesToTDTI;
- (void)triggerInvalidSiriProfileCleanupFromPersonalDevicesForLanguage:(id)language appDomain:(id)domain;
- (BOOL)triggerVoiceProfileDuplicatesCleanup;
- (void)triggerVoiceProfileCleanupWithCompletion:(id /* block */)completion;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)locale withAsset:(id)asset;
- (void)pruneImplicitUtterancesOfProfile:(id)profile withAsset:(id)asset;
- (void)triggerVoiceProfileDownload;
- (void)triggerRetrainingVoiceProfile:(id)profile withContext:(id)context withCompletion:(id /* block */)completion;
- (id)markSATEnrollmentSuccessForVoiceProfile:(id)profile;
- (void)isSATEnrolledForSiriProfileId:(id)id forLanguageCode:(id)code completion:(id /* block */)completion;
- (BOOL)isSATEnrolledForSiriProfileId:(id)id forLanguageCode:(id)code;
- (BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)id forLanguageCode:(id)code;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (id)deleteUserVoiceProfile:(id)profile;
- (void)deleteAllVoiceProfilesForAppDomain:(id)domain;
- (id)_CSSATCachePath;
- (id)_CSSATDownloadPath;
- (id)_CSSATCachePathForAppDomain:(id)domain;
- (id)_CSSATUploadPathForSiriProfileId:(id)id;
- (BOOL)_isLegacyEnrollmentMarkedWith:(id)with forLanguageCode:(id)code;
- (void)importVoiceProfile:(id)profile appDomain:(id)domain withSharedUserId:(id)id withLocale:(id)locale withAsset:(id)asset withCompletion:(id /* block */)completion;
@end

#endif /* SSRVoiceProfileManager_h */