//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ACAccount_SSExtensions_h
#define ACAccount_SSExtensions_h
@import Foundation;

@interface ACAccount (SSExtensions)
/* instance methods */
- (id)_ss_altDSID;
- (id)_ss_DSID;
- (id)_ss_hashedDescription;
- (BOOL)_ss_isAppleAuthenticationAccount;
- (BOOL)_ss_isiCloudAccount;
- (BOOL)_ss_isIDMSAccount;
- (BOOL)_ss_isiTunesAccount;
- (BOOL)_ss_isLocalAccount;
- (id)_ss_secureToken;
- (void)_ss_setSecureToken:(id)token;
- (BOOL)_ss_isDuplicate:(id)duplicate;
@end

#endif /* ACAccount_SSExtensions_h */