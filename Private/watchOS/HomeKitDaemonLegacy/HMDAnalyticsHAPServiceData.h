//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAnalyticsHAPServiceData_h
#define HMDAnalyticsHAPServiceData_h
@import Foundation;

#include "HMFObject.h"

@class NSString;

@interface HMDAnalyticsHAPServiceData : HMFObject

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL ownerUser;

/* instance methods */
- (id)initWithServiceType:(id)type isPrimary:(BOOL)primary ownerUser:(BOOL)user;
@end

#endif /* HMDAnalyticsHAPServiceData_h */