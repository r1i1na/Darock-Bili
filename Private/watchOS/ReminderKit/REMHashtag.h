//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMHashtag_h
#define REMHashtag_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMDAChangeTrackableFetchableModel-Protocol.h"
#include "REMDAChangedModelObjectResult-Protocol.h"
#include "REMHashtagProtocol-Protocol.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"
#include "_REMDAChangeTrackableModel-Protocol.h"

@class NSDate, NSString;

@interface REMHashtag : NSObject<REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding, REMHashtagProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) REMObjectID *remObjectID;

/* class methods */
+ (BOOL)rem_DA_supportsFetching;
+ (BOOL)rem_DA_supportsConcealedObjects;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (BOOL)isChangeTrackableModel;
+ (BOOL)isChangeTrackableFetchableModel;
+ (BOOL)supportsSecureCoding;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initWithObjectID:(id)id accountID:(id)id reminderID:(id)id type:(long long)type name:(id)name;
- (id)initWithObjectID:(id)id accountID:(id)id reminderID:(id)id type:(long long)type name:(id)name creationDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToHashtag:(id)hashtag;
- (id)objectIdentifier;
@end

#endif /* REMHashtag_h */