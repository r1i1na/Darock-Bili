//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDAuthenticationDialogManagerProtocol_Protocol_h
#define ACDAuthenticationDialogManagerProtocol_Protocol_h
@import Foundation;

@protocol ACDAuthenticationDialogManagerProtocol <NSObject>
/* instance methods */
- (void)contextForAuthenticationDialog:(id /* block */)dialog;
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)success response:(id)response;
@end

#endif /* ACDAuthenticationDialogManagerProtocol_Protocol_h */