//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MEComposeSessionHandler_Private_Protocol_h
#define MEComposeSessionHandler_Private_Protocol_h
@import Foundation;

@protocol MEComposeSessionHandler_Private <MEComposeSessionHandler>
/* instance methods */
- (void)session:(id)session getAdditionalHeadersWithCompletion:(id /* block */)completion;
- (void)session:(id)session hasSendMessageCheckWithCompletion:(id /* block */)completion;
@end

#endif /* MEComposeSessionHandler_Private_Protocol_h */