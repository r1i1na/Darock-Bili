//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLGlobalValues_h
#define PLGlobalValues_h
@import Foundation;

@class NSDate, NSDictionary, NSManagedObjectContext, NSNumber, NSPersistentHistoryToken, NSString;

@interface PLGlobalValues : NSObject {
  /* instance variables */
  NSManagedObjectContext *_moc;
}

@property (nonatomic) BOOL didImportFileSystemAssets;
@property (nonatomic) BOOL journalRebuildRequired;
@property (readonly, nonatomic) BOOL isRebuildComplete;
@property (nonatomic) BOOL backgroundJobServiceNeedsProcessing;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDictionary *greenValues;
@property (retain, nonatomic) NSNumber *greenTeaContactsAuthorization;
@property (readonly, nonatomic) unsigned long long libraryCreateOptions;
@property (readonly, nonatomic) NSDate *_deprecated_lastFullIndexSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastFullIndexSyndicationSyncStartDate;
@property (retain, nonatomic) NSDate *inProgressFullIndexSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastAttachmentSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastChatSyndicationSyncDate;
@property (retain, nonatomic) NSDate *lastDeleteSyndicationSyncDate;
@property (retain, nonatomic) NSDate *syndicationStartDate;
@property (retain, nonatomic) NSPersistentHistoryToken *lastGuestAssetSyncToken;
@property (copy, nonatomic) NSString *lastGuestAssetSyncTargetLibraryPath;
@property (retain, nonatomic) NSPersistentHistoryToken *lastPersonSyncToken;
@property (copy, nonatomic) NSString *lastPersonSyncSourceLibraryPath;
@property (retain, nonatomic) NSDate *syndicationPrefetchDownloadThrottlingDate;
@property (nonatomic) double syndicationSyncRangeDenominator;
@property (retain, nonatomic) NSPersistentHistoryToken *lastDuplicateDetectorProcessingToken;
@property (readonly, nonatomic) BOOL isInitialDuplicateDetectorProcessingCompleted;
@property (retain, nonatomic) NSPersistentHistoryToken *lastInitialDuplicateDetectorProcessingCompletedToken;
@property (retain, nonatomic) NSPersistentHistoryToken *lastSharedAssetContainerProcessingToken;
@property (retain, nonatomic) NSString *lockedResourceTransitionAssetUUID;
@property (retain, nonatomic) NSNumber *orphanedSceneClassificationsCount;

/* class methods */
+ (void)setJournalRebuildRequired:(BOOL)required managedObjectContext:(id)context;
+ (void)setLibraryCreateOptions:(unsigned long long)options managedObjectContext:(id)context;
+ (void)setSyndicationPrefetchDownloadThrottlingDate:(id)date managedObjectContext:(id)context;

/* instance methods */
- (id)initWithManagedObjectContext:(id)context;
- (void)_setDidImportFileSystemAssets:(BOOL)assets;
- (void)dontImportFileSystemDataIntoDatabase;
- (BOOL)isJournalRebuildRequired;
- (void)setRebuildComplete;
- (void)_setRebuildComplete;
- (void)_setBackgroundJobServiceNeedsProcessing:(BOOL)processing;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })size;
- (BOOL)shouldPrefetchWidgetResources;
- (id)_getValueUsingPerformBlockAndWait:(id /* block */)wait;
- (void)_setValueUsingPerformBlockAndWait:(id /* block */)wait responsibleCaller:(const char *)caller;
@end

#endif /* PLGlobalValues_h */