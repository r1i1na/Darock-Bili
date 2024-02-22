//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTrackingCapableThirdParty_h
#define WBSTrackingCapableThirdParty_h
@import Foundation;

@class NSArray, NSString;

@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *firstParties;

/* instance methods */
- (id)init;
- (id)initWithDomain:(id)domain firstParties:(id)parties;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WBSTrackingCapableThirdParty_h */