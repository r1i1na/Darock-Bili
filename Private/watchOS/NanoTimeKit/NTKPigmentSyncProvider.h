//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPigmentSyncProvider_h
#define NTKPigmentSyncProvider_h
@import Foundation;

#include "NTKPigmentEditOptionStore.h"
#include "NTKPigmentEditOptionStoreListener-Protocol.h"
#include "NTKPigmentPersistentStorageController.h"

@class CLKDevice, NSMutableArray, NSMutableSet, NSString;
@protocol NTKPigmentSyncProviderDelegate, OS_dispatch_queue;

@interface NTKPigmentSyncProvider : NSObject<NTKPigmentEditOptionStoreListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKPigmentEditOptionStore *pigmentStore;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (nonatomic) BOOL shouldSyncSharedCollections;
@property (retain, nonatomic) NSMutableSet *domainsRequiringDeltaSync;
@property (retain, nonatomic) NSMutableArray *faceDomainsToBeSynced;
@property (nonatomic) BOOL requestDeltaSyncAfterSyncing;
@property (nonatomic) BOOL receivedUpdateDuringSync;
@property (weak, nonatomic) NSObject<NTKPigmentSyncProviderDelegate> *delegate;
@property (nonatomic) BOOL syncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)areCollections:(id)collections equalToCollections:(id)collections;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (BOOL)prepareForSyncing:(BOOL)syncing;
- (void)enumerateAllFacesPigmentDomains:(id /* block */)domains;
- (id)nextSyncData:(inout id *)data;
- (BOOL)isSyncing;
- (void)finishSyncing:(BOOL)syncing;
- (void)saveSyncVersion;
- (BOOL)shouldForceFullSync;
- (void)colorBundleContentChanged;
- (void)faceBundlesUpdated;
- (void)colorEditOptionStore:(id)store didChangeForDomain:(id)domain;
- (void)_requestDeltaSyncIfNeeded;
- (id)compareLocalSyncDifferences;
- (id)allAvailableFacesSupportingPigment;
@end

#endif /* NTKPigmentSyncProvider_h */