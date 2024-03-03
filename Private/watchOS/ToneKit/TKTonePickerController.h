//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKTonePickerController_h
#define TKTonePickerController_h
@import Foundation;

#include "TKTonePickerControllerDelegate-Protocol.h"
#include "TKTonePickerItem.h"
#include "TLToneStoreDownloadObserver-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TLAlert, TLToneManager;
@protocol TLToneStoreDownloadController;

@interface TKTonePickerController : NSObject<TLToneStoreDownloadObserver> {
  /* instance variables */
  TLToneManager *_toneManager;
  unsigned long long _toneTypes;
  BOOL _defaultToneIdentifierWasExplicitlySet;
  BOOL _selectedToneWasExplicitlySetToDefaultTone;
  BOOL _selectedVibrationIdentifierWasExplicitlySet;
  BOOL _showsNoneWasExplicitlySet;
  BOOL _isToneStoreDownloadButtonAllowed;
  long long _toneStoreDownloadButtonState;
  NSMutableDictionary *_activeToneStoreDownloadsByIdentifier;
  NSMutableDictionary *_finishedToneStoreDownloadsByIdentifier;
  BOOL _shouldFreezeContentsOriginatingFromToneManager;
  BOOL _hasLoadedTonesOnce;
  NSMutableArray *_cachedPickerSectionItems;
  NSMutableArray *_cachedPickerRowItems;
  NSArray *_installedTones;
  NSMutableArray *_toneGroupLists;
  NSMutableArray *_toneGroupNames;
  NSMutableArray *_toneGroupBucketIdentifiers;
  NSMutableSet *_identifiersOfRemovableTones;
  TLAlert *_playingAlert;
}

@property (nonatomic) BOOL showsToneStore;
@property (nonatomic) BOOL mediaAtTop;
@property (nonatomic) BOOL showsVibrations;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier;
@property (nonatomic) BOOL showsIgnoreMute;
@property (nonatomic) BOOL ignoreMute;
@property (copy, nonatomic) NSString *overrideFirstToneSectionTitle;
@property (readonly, nonatomic) BOOL canShowStore;
@property (retain, nonatomic) NSObject<TLToneStoreDownloadController> *toneStoreDownloadController;
@property (retain, nonatomic) NSArray *_classicRingtoneIdentifiers;
@property (retain, nonatomic) NSArray *_classicAlertToneIdentifiers;
@property (nonatomic) unsigned long long _selectedClassicRingtoneIndex;
@property (nonatomic) unsigned long long _selectedClassicAlertToneIndex;
@property (readonly, nonatomic) TKTonePickerItem *_topLevelSelectedTonePickerItem;
@property (retain, nonatomic) NSIndexPath *_selectedToneIndexPath;
@property (readonly, nonatomic) NSIndexPath *_indexPathForToneStoreGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForDefaultGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForFirstToneGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForMediaGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForNone;
@property (readonly, nonatomic) NSIndexPath *_indexPathForVibrationGroup;
@property (readonly, nonatomic) NSIndexPath *indexPathForSelectedTone;
@property (nonatomic) BOOL _behavesAsRingtonePicker;
@property (readonly, nonatomic) NSString *_alertTonesPlistName;
@property (readonly, nonatomic) NSString *_ringtonesPlistName;
@property (retain, nonatomic) TLToneManager *_toneManager;
@property (weak, nonatomic) NSObject<TKTonePickerControllerDelegate> *delegate;
@property (readonly, nonatomic) long long alertType;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *defaultToneIdentifier;
@property (nonatomic) BOOL showsDefault;
@property (nonatomic) BOOL showsNone;
@property (nonatomic) BOOL noneAtTop;
@property (copy, nonatomic) NSString *noneString;
@property (nonatomic) BOOL showsNothingSelected;
@property (readonly, nonatomic) TKTonePickerItem *selectedTonePickerItem;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_latestRedownloadAllTonesDate;
+ (void)_updateLatestRedownloadAllTonesDate;

/* instance methods */
- (id)initWithAlertType:(long long)type;
- (void)dealloc;
- (long long)numberOfSections;
- (id)pickerItemForSection:(long long)section;
- (id)_pickerRowItemAtIndex:(long long)index inSectionForItem:(id)item;
- (id)_toneClassicsPickerItemAtIndex:(long long)index withToneIdentifier:(id)identifier belowTonePickerItem:(id)item;
- (id)_cachedPickerItemForSection:(long long)section;
- (void)_cachePickerSectionItem:(id)item forSection:(long long)section;
- (id)_cachedPickerRowItemAtIndex:(long long)index inSectionForItem:(id)item;
- (void)_cachePickerRowItem:(id)item atIndex:(long long)index inSectionForItem:(id)item;
- (void)_uncachePickerRowItemAtIndex:(long long)index inSectionForItem:(id)item;
- (void)_invalidatePickerItemCaches;
- (id)_indexPathForIgnoreMuteGroup;
- (id)_indexPathForToneStoreDownloadItem;
- (BOOL)_isIgnoreMuteGroupAtIndexPath:(id)path;
- (BOOL)_isVibrationGroupAtIndexPath:(id)path;
- (BOOL)_isToneStoreGroupAtIndexPath:(id)path;
- (BOOL)_isDefaultGroupAtIndexPath:(id)path;
- (BOOL)_isNoneGroupAtIndexPath:(id)path;
- (BOOL)_isMediaGroupAtIndexPath:(id)path;
- (BOOL)_isDividerAtIndexPath:(id)path;
- (id)_indexPathForToneWithIdentifier:(id)identifier;
- (id)_identifierOfToneAtIndexPath:(id)path;
- (id)_identifierAtIndexPath:(id)path isMediaItem:(BOOL *)item;
- (void)_setSelectedToneIdentifier:(id)identifier currentlyReloadingTones:(BOOL)tones;
- (id)_identifierOfSelectedClassicAlertTone;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_selectedIdentifier:(BOOL *)identifier;
- (BOOL)didSelectTonePickerItem:(id)item;
- (BOOL)_didSelectToneClassicsPickerItem:(id)item;
- (BOOL)canDeleteTonePickerItem:(id)item;
- (void)deleteTonePickerItem:(id)item;
- (void)_reloadStateForBasicBehavior;
- (void)_reloadTones;
- (void)_reloadTonesForExternalChange:(BOOL)change shouldSkipDelegateFullReload:(BOOL)reload;
- (id)_loadTonesFromPlistNamed:(id)named;
- (id)_loadAlertTonesFromPlist;
- (id)_loadRingtonesFromPlist;
- (void)_sortToneIdentifiersArray:(id)array;
- (void)_setToneManager:(id)manager;
- (void)_performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (void)_applyBatchUpdatesWithDeletedPickerRowItems:(id)items deletedTonePickerSectionItems:(id)items insertedPickerRowItems:(id)items insertedTonePickerSectionItems:(id)items tonePickerSectionItemsWithUpdatedHeaderText:(id)text tonePickerSectionItemsWithUpdatedFooterText:(id)text;
- (void)storeAccountNameDidChange:(id)change;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)downloads;
- (void)toneStoreDownloadsDidStart:(id)start;
- (void)toneStoreDownloadsDidProgress:(id)progress;
- (void)toneStoreDownloadsDidFinish:(id)finish;
- (void)_didUpdateFooterTextForToneStoreGroup;
- (void)_didUpdateToneStoreDownloadItem;
- (BOOL)_enableToneStoreDownloadItemIfAppropriate;
- (void)_disableToneStoreDownloadItem;
- (id)_footerTextForToneStoreGroup;
- (id)_nameForToneIdentifier:(id)identifier;
- (void)_goToStore;
- (void)_redownloadAllTones;
- (void)_playToneWithIdentifier:(id)identifier;
- (void)_togglePlayForToneWithIdentifier:(id)identifier;
- (void)stopPlayingWithFadeOut:(BOOL)out;
- (void)_didFinishPlayingAlert:(id)alert;
- (void)finishedWithPicker;
- (BOOL)_showsMedia;
- (BOOL)_isMediaAtTop;
- (unsigned long long)_mediaItemsCount;
- (id)_identifierOfMediaItemAtIndex:(unsigned long long)index;
- (unsigned long long)_indexOfMediaItemWithIdentifier:(id)identifier;
- (void)_didSelectMediaItemWithIdentifier:(id)identifier;
- (void)_reloadMediaItems;
- (void)_setSelectedVibrationIdentifier:(id)identifier explicitlySet:(BOOL)set;
- (void)_setSelectedVibrationIdentifier:(id)identifier forceUpdatingVibrationName:(BOOL)name explicitlySet:(BOOL)set;
- (void)_resetSelectedVibrationIdentifierForcingUpdatingVibrationName:(BOOL)name;
- (id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(BOOL)default;
- (id)_nameOfSelectedVibrationIdentifier;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_updateDetailTextOfVibrationItem;
- (id)_annotatedNameForToneIdentifier:(id)identifier;
- (void)_didReloadTones;
- (void)_didSelectToneWithIdentifier:(id)identifier;
- (void)_didUpdateCheckedStatus:(BOOL)status ofPickerItemForRowAtIndexPath:(id)path;
- (void)_didUpdateDetailText:(id)text ofPickerItemForRowAtIndexPath:(id)path;
- (void)_didUpdateCheckedStatus:(BOOL)status ofToneClassicsPickerItem:(id)item;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_toneManagerContentsChanged:(id)changed;
- (void)_handleAlertOverridePolicyDidChangeNotification:(id)notification;
- (BOOL)isNoneAtTop;
- (BOOL)isMediaAtTop;
- (void)_setClassicRingtoneIdentifiers:(id)identifiers;
- (void)_setClassicAlertToneIdentifiers:(id)identifiers;
- (void)_setSelectedClassicRingtoneIndex:(unsigned long long)index;
- (void)_setSelectedClassicAlertToneIndex:(unsigned long long)index;
- (void)_setSelectedToneIndexPath:(id)path;
- (void)_setBehavesAsRingtonePicker:(BOOL)picker;
@end

#endif /* TKTonePickerController_h */