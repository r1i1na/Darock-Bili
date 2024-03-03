//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomePersonManagerSettingsModel_h
#define HMDHomePersonManagerSettingsModel_h
@import Foundation;

#include "HMDHomeSettingsBaseModel.h"

@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel

@property (retain, @dynamic) NSString *zoneUUIDString;
@property (retain) NSUUID *zoneUUID;

/* class methods */
+ (id)properties;
+ (id)modelIDForHomeUUID:(id)uuid;
+ (id)defaultModelForHomeUUID:(id)uuid;

/* instance methods */
- (id)initWithHomeUUID:(id)uuid;
- (id)createSettings;
@end

#endif /* HMDHomePersonManagerSettingsModel_h */