//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPurchaseManagerDelegate_Protocol_h
#define SSPurchaseManagerDelegate_Protocol_h
@import Foundation;

@protocol SSPurchaseManagerDelegate <NSObject>
@optional
/* instance methods */
- (void)purchaseManager:(id)manager didFinishPurchasesWithResponses:(id)responses;
@end

#endif /* SSPurchaseManagerDelegate_Protocol_h */