//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudZoneConfiguration_h
#define HMBCloudZoneConfiguration_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@interface HMBCloudZoneConfiguration : HMFObject<NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSkipCloudPulls;

/* instance methods */
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMBCloudZoneConfiguration_h */