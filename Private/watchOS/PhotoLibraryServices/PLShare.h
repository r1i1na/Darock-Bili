//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLShare_h
#define PLShare_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLCloudDeletable-Protocol.h"

@class NSDate, NSSet, NSString, NSURL;

@interface PLShare : PLManagedObject<PLCloudDeletable>

@property (copy, @dynamic, nonatomic) NSString *uuid;
@property (copy, @dynamic, nonatomic) NSString *scopeIdentifier;
@property (copy, @dynamic, nonatomic) NSString *title;
@property (copy, @dynamic, nonatomic) NSDate *creationDate;
@property (copy, @dynamic, nonatomic) NSURL *shareURL;
@property (copy, @dynamic, nonatomic) NSDate *expiryDate;
@property (copy, @dynamic, nonatomic) NSDate *trashedDate;
@property (@dynamic, nonatomic) short status;
@property (nonatomic) long long scopeType;
@property (nonatomic) long long publicPermission;
@property (@dynamic, nonatomic) short localPublishState;
@property (@dynamic, nonatomic) short trashedState;
@property (@dynamic, nonatomic) short cloudDeleteState;
@property (retain, @dynamic, nonatomic) NSSet *participants;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_registeredSubclasses;
+ (void)_abortIfCalledOnBaseClass;
+ (id)scopeIdentifierPrefix;
+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)library;
+ (id)createOwnedShareWithUUID:(id)uuid creationDate:(id)date title:(id)title inPhotoLibrary:(id)library;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)change inPhotoLibrary:(id)library;
+ (BOOL)_shouldRecordCloudDeletionForShare:(id)share;
+ (id)shareWithScopedIdentifier:(id)identifier includeTrashed:(BOOL)trashed inManagedObjectContext:(id)context;
+ (id)shareWithScopeIdentifier:(id)identifier includeTrashed:(BOOL)trashed inManagedObjectContext:(id)context;
+ (id)shareWithScopeIdentifiers:(id)identifiers includeTrashed:(BOOL)trashed inManagedObjectContext:(id)context;
+ (id)shareWithUUID:(id)uuid includeTrashed:(BOOL)trashed inManagedObjectContext:(id)context;
+ (id)shareWithShareURL:(id)url includeTrashed:(BOOL)trashed inManagedObjectContext:(id)context;
+ (id)sharesWithPredicate:(id)predicate fetchLimit:(unsigned long long)limit inManagedObjectContext:(id)context;
+ (id)predicateToExcludeTrashedShares;
+ (id)predicateToExcludeExpiredShares;
+ (id)_basePredicateIncludeTrashedShares:(BOOL)shares;
+ (void)fetchShareFromShareURL:(id)url inPhotoLibrary:(id)library completionHandler:(id /* block */)handler;
+ (BOOL)incrementallyDeleteAndSaveShares:(id)shares logMessagePrefix:(id)prefix error:(id *)error;
+ (void)deleteAllSharesInManagedObjectContext:(id)context;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)context;
+ (void)deleteOldTrashedSharesInManagedObjectContext:(id)context;
+ (BOOL)validateCPLScopeChange:(id)change;
+ (BOOL)supportsCPLScopeType:(long long)type;
+ (BOOL)shouldAllowFetchURLWithScopeChange:(id)change photoLibrary:(id)library error:(id *)error;
+ (long long)cloudDeletionTypeForTombstone:(id)tombstone;
+ (long long)_cloudDeletionTypeForScopeType:(long long)type;
+ (long long)_cloudDeletionTypeForStatus:(short)status;
+ (id)cloudUUIDKeyForDeletion;

/* instance methods */
- (void)prepareForDeletion;
- (void)publishWithCompletionHandler:(id /* block */)handler;
- (void)acceptWithCompletionHandler:(id /* block */)handler;
- (void)autoAcceptShareIfNecessary;
- (id)cplScopeChange;
- (void)updateShareWithCPLShare:(id)cplshare inPhotoLibrary:(id)library;
- (id)owner;
- (id)currentUserParticipant;
- (BOOL)isCurrentUserOwner;
- (void)_updateShareStatusWithCurrentUser:(id)user;
- (void)trash;
- (void)untrash;
- (BOOL)incrementallyDeleteAndSaveWithError:(id *)error;
- (id)compactDescription;
- (id)_statusDescription;
@end

#endif /* PLShare_h */