//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAnalyticsUpdateEventTriggerData_h
#define HMDAnalyticsUpdateEventTriggerData_h
@import Foundation;

#include "HMFObject.h"

@interface HMDAnalyticsUpdateEventTriggerData : HMFObject

@property unsigned long long timestamp;
@property int requestOrigin;
@property unsigned int resultErrorCode;
@property int updateType;

@end

#endif /* HMDAnalyticsUpdateEventTriggerData_h */