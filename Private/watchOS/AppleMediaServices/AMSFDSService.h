//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSFDSService_h
#define AMSFDSService_h
@import Foundation;

@interface AMSFDSService : NSObject
/* class methods */
+ (id)cacheFDS:(id)fds forPurchaseInfo:(id)info;
+ (id)cachedFDSForPurchaseInfo:(id)info;
+ (id)didConsumeFDSForPurchaseInfo:(id)info;
+ (id)generateFDSWithRequest:(id)request;
@end

#endif /* AMSFDSService_h */