//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCEnrollmentAuthenticationViewControllerDelegate_Protocol_h
#define DMCEnrollmentAuthenticationViewControllerDelegate_Protocol_h
@import Foundation;

@protocol DMCEnrollmentAuthenticationViewControllerDelegate <NSObject>
/* instance methods */
- (void)authenticationViewController:(id)controller didReceiveUsername:(id)username;
- (void)authenticationViewController:(id)controller didReceivePassword:(id)password forUsername:(id)username;
- (void)authenticationViewControllerDidCancel:(id)cancel;
@end

#endif /* DMCEnrollmentAuthenticationViewControllerDelegate_Protocol_h */