//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSMutableGlobalConfiguration_h
#define DNDSMutableGlobalConfiguration_h
@import Foundation;

#include "DNDSGlobalConfiguration.h"

@class DNDBypassSettings, NSDate;

@interface DNDSMutableGlobalConfiguration : DNDSGlobalConfiguration

@property (@dynamic, nonatomic) unsigned long long preventAutoReply;
@property (copy, @dynamic, nonatomic) DNDBypassSettings *bypassSettings;
@property (copy, @dynamic, nonatomic) NSDate *lastModified;
@property (@dynamic, nonatomic) BOOL automaticallyGenerated;
@property (@dynamic, nonatomic) unsigned long long modesCanImpactAvailability;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDSMutableGlobalConfiguration_h */