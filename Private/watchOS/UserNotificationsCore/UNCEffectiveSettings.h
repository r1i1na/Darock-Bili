//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNCEffectiveSettings_h
#define UNCEffectiveSettings_h
@import Foundation;

#include "AFSiriAnnouncementRequestCapabilityObserving-Protocol.h"
#include "UNCBiometricResource.h"
#include "UNCBulletinDefaultsInterface-Protocol.h"
#include "UNCBulletinServerConnection.h"

@class AFSiriAnnouncementRequestCapabilityManager, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface UNCEffectiveSettings : NSObject<AFSiriAnnouncementRequestCapabilityObserving> {
  /* instance variables */
  NSObject<UNCBulletinDefaultsInterface> *_bulletinDefaults;
  BOOL _announceOnBuiltInSpeakerEnabled;
  BOOL _announceOnHearingAidsEnabled;
  BOOL _announceOnHearingAidsSupported;
  BOOL _siriEnabled;
  BOOL _siriAllowedWhenLocked;
  AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForHeadphones;
  AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForCarPlay;
  UNCBiometricResource *_biometricResource;
  UNCBulletinServerConnection *_bbServerConnection;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) long long effectiveGlobalAnnounceSetting;
@property (nonatomic) long long effectiveGlobalAnnounceHeadphoneSetting;
@property (nonatomic) long long effectiveGlobalAnnounceCarPlaySetting;
@property (nonatomic) long long effectiveGlobalScheduledDeliverySetting;
@property (retain, nonatomic) NSArray *effectiveGlobalScheduledDeliveryTimes;
@property (nonatomic) long long effectiveGlobalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) long long effectiveGlobalContentPreviewSetting;
@property (nonatomic) long long effectiveGlobalNotificationListDisplayStyleSetting;
@property (readonly, nonatomic) BOOL hasPairedVehiclesForCarPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithBulletinDefaults:(id)defaults;
- (id)initWithBulletinDefaults:(id)defaults biometricResource:(id)resource;
- (void)_queue_loadSiriCapabilities;
- (void)_siriPreferencesDidChange:(id)change;
- (void)_queue_updateSiriPreferences;
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)changed onPlatform:(long long)platform;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)changed onPlatform:(long long)platform;
- (void)_queue_updateAnnounceSettings;
- (void)_queue_updateGlobalSettings;
- (void)_queue_updateAllSectionInfos;
- (void)_queue_updateAnnounceControlCenterModuleAvailability;
- (long long)_queue_globalAnnounceSetting;
- (void)_queue_setGlobalAnnounceSetting:(long long)setting;
- (long long)_queue_effectiveGlobalAnnounceSetting;
- (void)setGlobalAnnounceSetting:(long long)setting;
- (void)_saveGlobalAnnounceSettingEnabledEvent;
- (BOOL)_queue_isAnnounceSupportedForHeadphones;
- (void)_queue_setAnnounceSupportedForHeadphones:(BOOL)headphones;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)setting;
- (long long)_queue_effectiveGlobalAnnounceHeadphoneSetting;
- (void)setGlobalAnnounceHeadphoneSetting:(long long)setting;
- (void)_pairedVehiclesForCarPlayDidChange:(id)change;
- (void)_queue_loadCarPlayCapabilities;
- (void)_fetchAllVehiclesForCarPlay;
- (BOOL)_queue_hasPairedVehiclesForCarPlay;
- (void)_queue_setPairedVehiclesForCarPlay:(BOOL)play;
- (BOOL)_queue_isAnnounceSupportedForCarPlay;
- (void)_queue_setAnnounceSupportedForCarPlay:(BOOL)play;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)setting;
- (long long)_queue_effectiveGlobalAnnounceCarPlaySetting;
- (void)setGlobalAnnounceCarPlaySetting:(long long)setting;
- (long long)_queue_globalScheduledDeliverySetting;
- (void)setGlobalScheduledDeliverySetting:(long long)setting;
- (id)_encodedScheduledDeliveryTimesForDeliveryTimes:(id)times;
- (id)_scheduledDeliveryTimesForEncodedDeliveryTimes:(id)times;
- (id)_queue_globalScheduledDeliveryTimes;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)times;
- (void)setGlobalScheduledDeliveryTimes:(id)times;
- (long long)_queue_effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)setting;
- (BOOL)_supportsFaceID;
- (BOOL)_isFaceIDEnrolled;
- (void)_biometricResourceStateChanged;
- (long long)_queue_defaultGlobalContentPreviewSetting;
- (long long)_queue_globalContentPreviewsSetting;
- (void)_queue_setGlobalContentPreviewsSetting:(long long)setting;
- (void)setGlobalContentPreviewSetting:(long long)setting;
- (long long)_queue_globalNotificationListDisplayStyleSetting;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)setting;
- (void)_publishBiomeSignalEventForGlobalNotificationListDisplayStyleSettingChangeToSetting:(long long)setting;
@end

#endif /* UNCEffectiveSettings_h */