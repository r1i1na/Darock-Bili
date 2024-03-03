//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKHideMyEmailManager_h
#define PKHideMyEmailManager_h
@import Foundation;

@class AKPrivateEmailController;

@interface PKHideMyEmailManager : NSObject {
  /* instance variables */
  AKPrivateEmailController *_controller;
  unsigned long long _isAvailable;
}

/* instance methods */
- (id)init;
- (void)isAvailable:(id /* block */)available;
- (void)createHideMyEmailAddressWithKey:(id)key completion:(id /* block */)completion;
- (void)registerHideMyEmailAddressWithKey:(id)key originIdentifier:(id)identifier merchantIdentifier:(id)identifier isWebPayment:(BOOL)payment completion:(id /* block */)completion;
- (void)findHideMyEmailAddressWithKey:(id)key completion:(id /* block */)completion;
- (void)bestDomainForAppIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)isAccountConfigured;
- (BOOL)_isHSA2Enabled;
- (id)_primaryAccount;
- (id)_primaryAccountAltDSID;
- (id)forwardingEmailForPrimaryAccount;
@end

#endif /* PKHideMyEmailManager_h */