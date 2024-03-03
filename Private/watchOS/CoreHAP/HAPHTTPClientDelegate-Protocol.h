//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPHTTPClientDelegate_Protocol_h
#define HAPHTTPClientDelegate_Protocol_h
@import Foundation;

@protocol HAPHTTPClientDelegate <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;

/* instance methods */
- (void)httpClient:(id)client didReceiveEvent:(id)event;
- (void)httpClientDidCloseConnectionDueToServer:(id)server;
- (void)httpClient:(id)client didReceiveSocketEvent:(unsigned long long)event;
@end

#endif /* HAPHTTPClientDelegate_Protocol_h */