//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKWalrusDaemonProtocol_Protocol_h
#define AKWalrusDaemonProtocol_Protocol_h
@import Foundation;

@protocol AKWalrusDaemonProtocol <NSObject>
/* instance methods */
- (void)PCSAuthContextForWebSessionIdentifier:(id)identifier serviceName:(id)name completion:(id /* block */)completion;
- (void)removeAllPCSAuthCredentialWithCompletion:(id /* block */)completion;
- (void)verifyEnableWalrusAllowedWithContext:(id)context completion:(id /* block */)completion;
- (void)postWalrusStateUpdateToServerWithContext:(id)context urlBagKey:(id)key username:(id)username password:(id)password completion:(id /* block */)completion;
@end

#endif /* AKWalrusDaemonProtocol_Protocol_h */