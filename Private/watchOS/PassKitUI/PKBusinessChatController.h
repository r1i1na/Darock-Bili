//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBusinessChatController_h
#define PKBusinessChatController_h
@import Foundation;

@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject {
  /* instance variables */
  ACAccountStore *_accountStore;
  AKAnisetteProvisioningController *_provisioningController;
}

/* class methods */
+ (BOOL)deviceSupportsBusinessChat;

/* instance methods */
- (id)init;
- (void)openBusinessChatWithContext:(id)context completion:(id /* block */)completion;
@end

#endif /* PKBusinessChatController_h */