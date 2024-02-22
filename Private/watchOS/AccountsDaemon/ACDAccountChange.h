//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDAccountChange_h
#define ACDAccountChange_h
@import Foundation;

@class ACAccount;

@interface ACDAccountChange : NSObject

@property (readonly, nonatomic) int changeType;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) ACAccount *oldAccount;

/* class methods */
+ (id)changeWithChangeType:(int)type account:(id)account oldAccount:(id)account;

/* instance methods */
- (id)initWithChangeType:(int)type account:(id)account oldAccount:(id)account;
@end

#endif /* ACDAccountChange_h */