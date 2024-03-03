//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFActionSet_Protocol_h
#define MKFActionSet_Protocol_h
@import Foundation;

@protocol MKFActionSet <MKFModel, MKFActionSetPublicExtensions>

@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;

/* instance methods */
- (id)materializeOrCreateActionsRelationOfType:(id)type modelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfType:(id)type modelID:(id)id;
- (id)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)id;
- (id)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)id;
- (id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)id;
- (id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)id;
- (id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)id;
- (id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)id;
- (id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfTypeNaturalLightingActionWithModelID:(id)id;
- (id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)id;
- (id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createActionsRelationOfTypeShortcutActionWithModelID:(id)id;
- (id)findActionsRelationOfTypeShortcutActionWithModelID:(id)id;
- (void)synchronizeActionsRelationWith:(id)with;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)relation;
@end

#endif /* MKFActionSet_Protocol_h */