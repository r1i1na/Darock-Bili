//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSUserMediaPermissionController_h
#define WBSUserMediaPermissionController_h
@import Foundation;

#include "WBSPerSitePreferenceManager.h"
#include "WBSCoalescedAsynchronousWriterDelegate-Protocol.h"
#include "WBSPerSitePreference.h"
#include "WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h"
#include "WBSPerSitePreferencesSQLiteStore.h"

@class NSMutableDictionary, NSString, NSURL, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue, {atomic<LoadingStatus>="__a_"{__cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>>="__a_value"Aq}};

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager<WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate> {
  /* instance variables */
  NSMutableDictionary *_cachedSettings;
  WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;
  NSObject<OS_dispatch_queue> *_internalQueue;
  struct atomic<LoadingStatus> { struct __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> { atomic  __a_value; long long x0; } __a_; } _savedStateLoadStatus;
  NSURL *_userMediaPermissionsFileURL;
}

@property (readonly, nonatomic) WBSPerSitePreference *cameraMediaCapturePreference;
@property (readonly, nonatomic) WBSPerSitePreference *microphoneMediaCapturePreference;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedController;
+ (id)localizedStringForPerSitePreferenceValue:(id)value;

/* instance methods */
- (id)init;
- (id)initWithUserMediaPermissionsFileURL:(id)url perSitePreferencesStore:(id)store;
- (id)_init;
- (void)performDelayedLaunchOperations;
- (void)reloadPreferences;
- (void)savePendingChangesBeforeTermination;
- (void)savePendingChangesWithCompletionHandler:(id /* block */)handler;
- (void)_invalidateCachedSettingsForOriginHash:(id)hash;
- (unsigned long long)permissionForOrigin:(id)origin topLevelOrigin:(id)origin;
- (void)getPermissionForOrigin:(id)origin topLevelOrigin:(id)origin completionHandler:(id /* block */)handler;
- (unsigned long long)_permissionForOrigin:(id)origin topLevelOrigin:(id)origin;
- (id)_validPolicyForDomainWithOrigin:(id)origin topLevelOrigin:(id)origin;
- (id)_validPolicyForOrigin:(id)origin topLevelOrigin:(id)origin;
- (id)_policyForOrigin:(id)origin topLevelOrigin:(id)origin;
- (unsigned long long)permissionForNonHTTPSOriginFromPermission:(unsigned long long)permission;
- (void)setPermission:(unsigned long long)permission expirationPolicy:(unsigned long long)policy forOrigin:(id)origin topLevelOrigin:(id)origin;
- (void)_setPermission:(unsigned long long)permission expirationPolicy:(unsigned long long)policy forOrigin:(id)origin topLevelOrigin:(id)origin;
- (unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:(unsigned long long)permission;
- (id)saltForOrigin:(id)origin topLevelOrigin:(id)origin frameIdentifier:(unsigned long long)identifier;
- (id)_saltForOrigin:(id)origin topLevelOrigin:(id)origin frameIdentifier:(unsigned long long)identifier;
- (id)_saltWithPolicyEntry:(id)entry computedPermission:(unsigned long long)permission frameIdentifier:(unsigned long long)identifier;
- (void)removeAllOriginsAddedAfterDate:(id)date;
- (void)resetOriginPermissions;
- (void)resetOriginPermissionsWithCompletionHandler:(id /* block */)handler;
- (void)_loadSavedPermissions;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)identifier;
- (id)_dictionaryRepresentation;
- (BOOL)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)permission;
- (void)_cachedSettingsDidChange;
- (void)_cachedSettingsDidChangeAndWriteImmediately:(BOOL)immediately completionHandler:(id /* block */)handler;
- (void)checkUserMediaPermissionForURL:(id)url mainFrameURL:(id)url frameIdentifier:(unsigned long long)identifier decisionHandler:(id /* block */)handler;
- (long long)_mediaCaptureTypeForPreference:(id)preference;
- (unsigned long long)_permissionMaskForMediaCaptureType:(long long)type;
- (id)preferences;
- (id)valuesForPreference:(id)preference;
- (id)localizedStringForValue:(id)value inPreference:(id)preference;
- (void)setValue:(id)value ofPreference:(id)preference forDomain:(id)domain completionHandler:(id /* block */)handler;
- (BOOL)_setValue:(id)value ofPreference:(id)preference forDomain:(id)domain;
- (void)getValueOfPreference:(id)preference forDomain:(id)domain withTimeout:(id)timeout usingBlock:(id /* block */)block;
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)type userMediaPermission:(unsigned long long)permission;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)type mediaCaptureSetting:(long long)setting;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:(unsigned long long)permission;
- (unsigned long long)permissionForDomain:(id)domain;
- (void)getAllDomainsConfiguredForPreference:(id)preference usingBlock:(id /* block */)block;
- (void)removePreferenceValuesForDomains:(id)domains fromPreference:(id)preference completionHandler:(id /* block */)handler;
- (BOOL)_removePreferenceValuesForDomains:(id)domains fromPreference:(id)preference;
- (id)preferenceNameForPreference:(id)preference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)customized;
- (BOOL)_isPreferenceValid:(id)valid;
- (id)_standardizedURLForDomain:(id)domain;
- (void)_invalidateAllPermissionsForDomain:(id)domain;
- (void)_dispatchAsyncOnInternalQueue:(id /* block */)queue;
- (void)_dispatchSyncOnInternalQueue:(id /* block */)queue;
- (void)removeAllPermissionsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WBSUserMediaPermissionController_h */