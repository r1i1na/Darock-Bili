//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCharacteristicEventBaseModel_h
#define HMDCharacteristicEventBaseModel_h
@import Foundation;

#include "HMDEventModel.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class NSNumber, NSString;

@interface HMDCharacteristicEventBaseModel : HMDEventModel<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSString *accessory;
@property (retain, @dynamic, nonatomic) NSNumber *serviceID;
@property (retain, @dynamic, nonatomic) NSNumber *characteristicID;

/* class methods */
+ (Class)cd_entityClass;
+ (id)properties;
+ (id)eventModelWithDictionary:(id)dictionary home:(id)home eventTriggerUUID:(id)uuid className:(Class)name message:(id)message checkForSupport:(BOOL)support outCharateristic:(id *)charateristic;

/* instance methods */
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
- (id)dependentUUIDs;
@end

#endif /* HMDCharacteristicEventBaseModel_h */