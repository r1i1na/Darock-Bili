//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFPresenceBulletinCondition_h
#define _MKFPresenceBulletinCondition_h
@import Foundation;

#include "_MKFBulletinCondition.h"
#include "MKFBulletinRegistration-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFPresenceBulletinCondition-Protocol.h"
#include "MKFPresenceBulletinConditionDatabaseID.h"
#include "MKFPresenceBulletinConditionPrivateExtensions-Protocol.h"

@class NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;

@interface _MKFPresenceBulletinCondition : _MKFBulletinCondition<MKFPresenceBulletinCondition, MKFPresenceBulletinConditionPrivateExtensions>

@property (copy, @dynamic, nonatomic) NSNumber *presenceEventType;
@property (copy, @dynamic, nonatomic) NSNumber *presenceEventUserType;
@property (retain, @dynamic, nonatomic) NSSet *users_;
@property (copy, @dynamic, nonatomic) NSNumber *presenceEventType;
@property (copy, @dynamic, nonatomic) NSNumber *presenceEventUserType;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)to;
+ (id)backingModelProtocol;

/* instance methods */
- (id)castIfPresenceBulletinCondition;
- (id)materializeOrCreateUsersRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findUsersRelationWithModelID:(id)id;
- (void)addUsersObject:(id)object;
- (void)removeUsersObject:(id)object;
@end

#endif /* _MKFPresenceBulletinCondition_h */