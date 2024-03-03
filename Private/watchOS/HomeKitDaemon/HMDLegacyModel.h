//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLegacyModel_h
#define HMDLegacyModel_h
@import Foundation;

#include "HMBModel.h"

@interface HMDLegacyModel : HMBModel
/* class methods */
+ (id)createWithLegacyRecord:(id)record modelContainer:(id)container error:(id *)error;

/* instance methods */
- (id)encodeWithExistingRecord:(id)record cloudZone:(id)zone modelContainer:(id)container error:(id *)error;
@end

#endif /* HMDLegacyModel_h */