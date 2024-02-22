//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLibraryServicesManager_h
#define PLLibraryServicesManager_h
@import Foundation;

#include "PFStateCaptureProvider-Protocol.h"
#include "PLAssetsdCrashRecoverySupport.h"
#include "PLBackgroundJobService.h"
#include "PLCacheDeleteRegistration.h"
#include "PLCacheDeleteSupport.h"
#include "PLChangeHandlingContainer.h"
#include "PLClientServerTransaction.h"
#include "PLCloudPhotoLibraryManager.h"
#include "PLComputeCacheManager.h"
#include "PLDatabaseContext.h"
#include "PLDeferredProcessingServiceHandler.h"
#include "PLDuplicateProcessor.h"
#include "PLImageWriter.h"
#include "PLKeywordManager.h"
#include "PLLibraryServicesCPLReadiness.h"
#include "PLLibraryServicesDelegate-Protocol.h"
#include "PLMigrationServiceProtocol-Protocol.h"
#include "PLModelMigrator.h"
#include "PLMomentGenerationDataManager.h"
#include "PLPairing.h"
#include "PLPhotoLibraryBundle.h"
#include "PLQuickActionManager.h"
#include "PLRebuildJournalManager.h"
#include "PLRelationshipOrderKeyManager.h"
#include "PLSearchIndexManager.h"
#include "PLSyndicationDeleteManager.h"
#include "PLSyndicationDeleteManagerDelegate-Protocol.h"

@class CPLConfiguration, NSError, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSProgress, NSString, NSURL, PFClientSideEncryptionManager, PFStateCaptureHandler, PLLazyObject, PLLibraryServicesStateNode, PLPhotoLibraryPathManager, PLTrackableRequestManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLLibraryServicesManager : NSObject<PLSyndicationDeleteManagerDelegate, PFStateCaptureProvider> {
  /* instance variables */
  PFStateCaptureHandler *_stateHandler;
  BOOL _isCreateMode;
  PLLazyObject *_lazyWellKnownPhotoLibraryIdentifier;
  PLLazyObject *_lazyImageWriter;
  PLLazyObject *_lazyModelMigrator;
  PLLazyObject *_lazySearchIndexManager;
  PLLazyObject *_lazyDatabaseContext;
  PLLazyObject *_lazyDuplicateProcessor;
  PLLazyObject *_lazyRelationshipOrderKeyManager;
  PLLazyObject *_lazyMomentGenerationDataManager;
  PLLazyObject *_lazyRebuildJournalManager;
  PLLazyObject *_lazyComputeCacheManager;
  PLLazyObject *_lazyQuickActionManager;
  PLLazyObject *_lazyKeywordManager;
  PLLazyObject *_lazyAlbumCountCoalescer;
  PLLazyObject *_lazyImportSessionCountCoalescer;
  PLLazyObject *_lazyCloudPhotoLibraryManager;
  PLLazyObject *_lazyCrashRecoverySupport;
  PLLazyObject *_lazyPairingManager;
  PLLazyObject *_lazyCPLReadiness;
  PLLazyObject *_lazyClientSideEncryptionManager;
  PLLazyObject *_lazySyndicationDeleteManager;
  PLLazyObject *_lazyCacheDeleteSupport;
  PLLazyObject *_lazyDeferredProcessingServiceHandler;
  PLLazyObject *_lazyDirectServerConfiguration;
  PLClientServerTransaction *_serverTransaction;
  NSObject<OS_dispatch_source> *_outstandingTransactionHandlerTimer;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _outstandingTransactionHandlerTimerLock;
  NSObject<OS_dispatch_queue> *_albumCountQueue;
  NSMutableDictionary *_externalWaiterCompletionBlocksByState;
  unsigned int _maxWaiterQoS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PLLibraryServicesStateNode *currentStateNode;
@property (retain, nonatomic) id operationCountObservee;
@property (retain) NSObject<PLLibraryServicesDelegate> *libraryServicesDelegate;
@property (readonly, nonatomic) NSMutableArray *mutablePendingOperations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateSerializationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *helperQueue;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL finalizing;
@property (retain, nonatomic) NSProgress *preRunningProgress;
@property (retain, nonatomic) NSProgress *postRunningProgress;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } importMutex;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } fileSystemAssetImporterMutex;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } localeUpdateLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } contactsAuthorizationUpdateLock;
@property (readonly) long long state;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSString *logPrefix;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;
@property (readonly, weak) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSError *invalidationError;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) PLImageWriter *imageWriter;
@property (readonly) PLModelMigrator *modelMigrator;
@property (readonly) PLSearchIndexManager *searchIndexManager;
@property (readonly) PLDatabaseContext *databaseContext;
@property (readonly) PLDuplicateProcessor *duplicateProcessor;
@property (readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
@property (readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property (readonly) PLQuickActionManager *quickActionManager;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLBackgroundJobService *backgroundJobService;
@property (readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
@property (readonly) PLTrackableRequestManager *trackableRequestManager;
@property (readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
@property (readonly) PLPairing *pairingManager;
@property (readonly) PLLibraryServicesCPLReadiness *cplReadiness;
@property (readonly) PFClientSideEncryptionManager *clientSideEncryptionManager;
@property (readonly) PLSyndicationDeleteManager *syndicationDeleteManager;
@property (readonly) PLCacheDeleteSupport *cacheDeleteSupport;
@property (readonly) PLCacheDeleteRegistration *cacheDeleteRegistration;
@property (readonly) PLDeferredProcessingServiceHandler *deferredProcessingServicerHandler;
@property (readonly) CPLConfiguration *directServerConfiguration;
@property (readonly) PLRebuildJournalManager *rebuildJournalManager;
@property (readonly) PLComputeCacheManager *computeCacheManager;
@property (readonly) BOOL createMode;
@property (copy) NSString *upgradeClient;
@property (readonly) BOOL cloudPhotoLibraryEnabled;
@property (weak) NSObject<PLMigrationServiceProtocol> *migrationServiceProxy;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setLibraryServicesDelegateClass:(Class)class;
+ (Class)libraryServicesDelegateClass;
+ (long long)_initialState;
+ (long long)_finalState;
+ (id)libraryServicesManagerForLibraryURL:(id)url;
+ (id)errorForInvalidationError:(id)error userInfo:(id)info;

/* instance methods */
- (void)performTransactionForSyndicationDeleteManager:(id)manager name:(const char *)name transaction:(id /* block */)transaction;
- (id)statusDescription;
- (id)initWithLibraryBundle:(id)bundle backgroundJobService:(id)service cacheDeleteRegistration:(id)registration delegateClass:(Class)class;
- (void)dealloc;
- (void)_initLazyWellKnownPhotoLibraryIdentifier;
- (id)_determineWellKnownPhotoLibraryIdentifier;
- (void)_initCameraPreviewWellManager;
- (id)_newOrderKeyManager;
- (void)currentLocaleDidChangeNotification:(id)notification;
- (BOOL)updateSavedLocaleIfNeeded;
- (BOOL)updateGreenTeaSavedContactsAuthorizationIfNeeded;
- (void)invalidateReverseLocationDataOnAllAssets;
- (BOOL)isCloudPhotoLibraryEnabled;
- (unsigned long long)createOptions;
- (BOOL)isCreateMode;
- (void)setCreateMode:(BOOL)mode options:(id)options;
- (void)refreshAlbumCountForAlbumIDs:(id)ids;
- (void)refreshImportSessionCountForImportSessionIDs:(id)ids;
- (BOOL)isSystemPhotoLibrary;
- (BOOL)isSyndicationPhotoLibrary;
- (BOOL)isSearchIndexingEnabled;
- (void)_initSystemPhotoLibrarySpecificServices;
- (void)_invalidateSystemPhotoLibrarySpecificServices;
- (void)_initSyndicationPhotoLibrarySpecificServices;
- (void)_invalidateSyndicationPhotoLibrarySpecificServices;
- (void)_initCloudPhotoLibraryManager;
- (id)newAlbumCountCoalescer;
- (id)newImportSessionCountCoalescer;
- (void)_handleCoalescerActionWithScope:(id)scope class:(Class)class forIDs:(id)ids context:(id)context;
- (id)_newContainer:(Class)container scope:(id)scope;
- (id)newCloudPhotoLibraryManager;
- (id)newCrashRecoverySupport;
- (id)newSearchIndexManager;
- (id)newMomentGenerationDataManager;
- (void)_invalidateMomentGenerationDataManager;
- (void)_invalidateRebuildJournalManager;
- (void)_invalidateComputeCacheManager;
- (void)_invalidateSearchIndexManager;
- (void)_invalidateModelMigrator;
- (void)_invalidateAlbumCountCoalescer;
- (void)_invalidateImportSessionCountCoalescer;
- (void)_invalidateImageWriter;
- (void)_invalidateKeywordManager;
- (void)_invalidatePairingManager;
- (void)_invalidateDuplicateProcessor;
- (void)_invalidateRelationshipOrderKeyManager;
- (void)_invalidateQuickActionManager;
- (void)_invalidateDatabaseContext;
- (void)_invalidateCloudPhotoLibraryManager;
- (void)_invalidateCrashRecoverySupport;
- (void)_invalidateBackgroundJobService;
- (void)_invalidateCPLReadiness;
- (void)_invalidateClientSideEncryptionManager;
- (void)_invalidateDirectServerConfiguration;
- (void)_invalidateSyndicationDeleteManager;
- (void)_invalidateCacheDeleteSupport;
- (void)_invalidateOutstandingTransactionHandlerTimer;
- (id)newRebuildJournalManager;
- (id)newComputeCacheManager;
- (id)journalManagerForName:(id)name;
- (id)newClientSideEncryptionManager;
- (id)newDirectServerConfiguration;
- (void)initializeChangeHandling;
- (void)initializeConstraintsDirector;
- (id)_libraryServicesStateNodeWithState:(long long)state;
- (BOOL)enqueueOperation:(id)operation error:(id *)error;
- (void)shutdownLibraryWithDescription:(id)description;
- (void)_increaseStateQueueQoSIfNeeded;
- (void)_resetStateQueueQoS;
- (BOOL)_enqueueOperation:(id)operation error:(id *)error;
- (id)activeOperations;
- (id)pendingOperations;
- (BOOL)activate:(id *)activate;
- (void)_dispatchAwaitLibraryStateCompletionHandler:(id /* block */)handler group:(id)group error:(id)error;
- (void)_awaitLibraryState:(long long)state sync:(BOOL)sync completionHandler:(id /* block */)handler;
- (id)_enqueueAwaitOperation;
- (void)_waitForAwaitOperation:(id)operation;
- (BOOL)awaitLibraryState:(long long)state error:(id *)error;
- (void)awaitLibraryState:(long long)state completionHandler:(id /* block */)handler;
- (void)_enqueueExternalWaiterCompletionBlockForState:(long long)state completionBlock:(id /* block */)block;
- (BOOL)transitionToState:(long long)state error:(id *)error;
- (void)_invalidate;
- (BOOL)finalize:(id *)finalize;
- (void)deactivateWithInvalidationError:(id)error;
- (BOOL)_canTransitionToState:(long long)state error:(id *)error;
- (void)_transitionToState:(long long)state;
- (void)_dispatchExternalWaitersForState:(long long)state;
- (void)_startObservingLibraryStateCompletedAllOperations;
- (void)_stopObservingLibraryStateCompletedAllOperations;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_handleLibraryStateCompletedAllOperations;
- (long long)_state;
- (void)_setCurrentStateNode:(id)node;
- (void)_addPendingOperationsForStateNode:(id)node;
- (void)_cancelPendingOperations;
- (void)performBlockWithImportMutex:(id /* block */)mutex;
- (void)performFileSystemAssetImporterWorkWithLibrary:(id)library block:(id /* block */)block;
- (void)registerOutstandingTransactionsHandler:(id /* block */)handler;
- (void)_setCameraRollCountedInQuota:(BOOL)quota;
- (void)setICloudPhotosEnabledInternal:(BOOL)internal;
- (BOOL)willBecomeNonSystemPhotoLibrary:(id *)library;
- (void)didBecomeNonSystemPhotoLibrary;
- (void)didRemainSystemPhotoLibrary;
- (id)stateCaptureDictionary;
- (BOOL)isActive;
- (BOOL)isFinalizing;
@end

#endif /* PLLibraryServicesManager_h */