//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPingSubscriptionInfo_Protocol_h
#define BLTPingSubscriptionInfo_Protocol_h
@import Foundation;

@protocol BLTPingSubscriptionInfo <NSObject>

@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) BOOL forBulletin;
@property (readonly, nonatomic) BOOL canAck;
@property (readonly, nonatomic) BOOL canAckOnLocalConnection;

@end

#endif /* BLTPingSubscriptionInfo_Protocol_h */