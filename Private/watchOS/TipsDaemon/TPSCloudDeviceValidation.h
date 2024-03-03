//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSCloudDeviceValidation_h
#define TPSCloudDeviceValidation_h
@import Foundation;

#include "TPSTargetingValidation.h"
#include "TPSCloudDeviceDataSource-Protocol.h"
#include "TPSCloudDeviceInfo.h"

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo;
@property (weak, nonatomic) NSObject<TPSCloudDeviceDataSource> *dataSource;

/* class methods */
+ (id)normalizedVersion:(id)version;
+ (id)deviceInfoForIdentifier:(id)identifier;
+ (id)tvDeviceInfo;

/* instance methods */
- (id)initWithDeviceInfo:(id)info;
- (void)validateWithCompletion:(id /* block */)completion;
- (id)description;
@end

#endif /* TPSCloudDeviceValidation_h */