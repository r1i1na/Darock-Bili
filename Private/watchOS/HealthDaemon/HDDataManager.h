//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDataManager_h
#define HDDataManager_h
@import Foundation;

#include "HDDiagnosticObject-Protocol.h"
#include "HDProfile.h"
#include "HDQuantitySeriesManager.h"

@class NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HDDataManager : NSObject<HDDiagnosticObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_notificationQueue;
  NSMutableDictionary *_observersByDataType;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synchronousObserverLock;
  NSMutableDictionary *_synchronousObserversBySampleType;
  BOOL _needsSynchronousNotification;
  unsigned long long _openTransactions;
  NSMutableDictionary *_pendingObjectsBySampleType;
  NSNumber *_lastAnchor;
  double _lastNotifyLogTime;
  long long _notifyCount;
  long long _samplesAddedCount;
  long long _samplesJournaledCount;
  HDProfile *_profile;
}

@property (readonly, nonatomic) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (BOOL)insertDataObjects:(id)objects sourceEntity:(id)entity deviceEntity:(id)entity sourceVersion:(id)version creationDate:(double)date error:(id *)error;
- (BOOL)insertDataObjects:(id)objects error:(id *)error;
- (BOOL)insertDataObjects:(id)objects withProvenance:(id)provenance creationDate:(double)date error:(id *)error;
- (BOOL)insertDataObjects:(id)objects withProvenance:(id)provenance creationDate:(double)date skipInsertionFilter:(BOOL)filter error:(id *)error;
- (BOOL)insertDataObjects:(id)objects withProvenance:(id)provenance creationDate:(double)date skipInsertionFilter:(BOOL)filter updateSourceOrder:(BOOL)order resolveAssociations:(BOOL)associations error:(id *)error;
- (BOOL)associateObjectUUIDs:(id)uuids objectUUID:(id)uuid error:(id *)error;
- (void)shouldNotifyForDataObjects:(id)objects provenance:(id)provenance database:(id)database anchor:(id)anchor;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)types intervals:(id)intervals userRequested:(BOOL)requested transaction:(id)transaction anchor:(id)anchor;
- (BOOL)deleteObjectsWithUUIDCollection:(id)uuidcollection configuration:(id)configuration error:(id *)error;
- (BOOL)deleteDataObjects:(id)objects restrictedSourceEntities:(id)entities failIfNotFound:(BOOL)found recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteDataObjectsOfClass:(Class)class predicate:(id)predicate limit:(unsigned long long)limit deletedSampleCount:(unsigned long long *)count notifyObservers:(BOOL)observers generateDeletedObjects:(BOOL)objects recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteDataObjectsOfClass:(Class)class predicate:(id)predicate limit:(unsigned long long)limit deletedSampleCount:(unsigned long long *)count notifyObservers:(BOOL)observers generateDeletedObjects:(BOOL)objects userRequested:(BOOL)requested recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteSamplesWithTypes:(id)types sourceBundleIdentifier:(id)identifier userRequested:(BOOL)requested recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteSamplesWithTypes:(id)types sourceEntities:(id)entities recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteSamplesWithSourceEntities:(id)entities error:(id *)error;
- (BOOL)deleteSamplesWithUUIDs:(id)uuids userRequested:(BOOL)requested recursiveDeleteAuthorizationBlock:(id /* block */)block error:(id *)error;
- (BOOL)deleteSamplesWithUUIDs:(id)uuids generateDeletedObjects:(BOOL)objects transaction:(id)transaction error:(id *)error;
- (BOOL)containsDataObject:(id)object;
- (long long)hasSampleWithBundleIdentifier:(id)identifier error:(id *)error;
- (void)addObserverForAllTypes:(id)types;
- (void)removeObserverForAllTypes:(id)types;
- (void)addObserver:(id)observer forDataType:(id)type;
- (void)removeObserver:(id)observer forDataType:(id)type;
- (void)addSynchronousObserver:(id)observer forSampleType:(id)type;
- (void)removeSynchronousObserver:(id)observer forSampleType:(id)type;
- (void)openObserverTransaction;
- (void)closeObserverTransaction;
- (void)synchronouslyCloseObserverTransactionAndNotify;
- (void)setBackgroundObserverFrequency:(id)frequency forDataType:(id)type frequency:(long long)frequency appSDKVersion:(unsigned int)sdkversion completion:(id /* block */)completion;
- (id)diagnosticDescription;
@end

#endif /* HDDataManager_h */