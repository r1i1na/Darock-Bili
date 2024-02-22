//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFTrigger_h
#define _MKFTrigger_h
@import Foundation;

#include "_MKFModel.h"
#include "HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h"
#include "MKFHome-Protocol.h"
#include "MKFTrigger-Protocol.h"
#include "MKFTriggerDatabaseID.h"
#include "MKFTriggerPrivateExtensions-Protocol.h"
#include "MKFUser-Protocol.h"

@class NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;

@interface _MKFTrigger : _MKFModel<HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTrigger, MKFTriggerPrivateExtensions>

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, @dynamic, nonatomic) NSNumber *active;
@property (copy, @dynamic, nonatomic) NSNumber *autoDelete;
@property (copy, @dynamic, nonatomic) NSString *configuredName;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSDate *mostRecentFireDate;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (retain, @dynamic, nonatomic) NSSet *actionSets_;
@property (retain, @dynamic, nonatomic) _MKFHome *home;
@property (retain, @dynamic, nonatomic) _MKFUser *owner;
@property (copy, @dynamic, nonatomic) NSNumber *active;
@property (copy, @dynamic, nonatomic) NSNumber *autoDelete;
@property (copy, @dynamic, nonatomic) NSString *configuredName;
@property (copy, @dynamic, nonatomic) NSDate *mostRecentFireDate;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSArray *actionSets;
@property (readonly, retain, @dynamic, nonatomic) NSObject<MKFHome> *home;
@property (retain, @dynamic, nonatomic) NSObject<MKFUser> *owner;
@property (readonly, copy, nonatomic) MKFTriggerDatabaseID *databaseID;
@property (readonly, copy, @dynamic, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (Class)cd_modelClass;
+ (id)modelIDForParentRelationshipTo:(id)to;
+ (id)homeRelation;
+ (id)backingModelProtocol;

/* instance methods */
- (id)castIfTrigger;
- (void)addActionSetsObject:(id)object;
- (void)removeActionSetsObject:(id)object;
@end

#endif /* _MKFTrigger_h */