//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RemoteUIWebViewControllerDelegate_Protocol_h
#define RemoteUIWebViewControllerDelegate_Protocol_h
@import Foundation;

@protocol RemoteUIWebViewControllerDelegate 
@optional
/* instance methods */
- (void)remoteUIWebViewControllerDonePressed:(id)pressed;
- (void)remoteUIWebViewController:(id)controller dismissWithPayload:(id)payload;
- (void)remoteUIWebViewControllerDidDismiss:(id)dismiss;
@end

#endif /* RemoteUIWebViewControllerDelegate_Protocol_h */