//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXMessenger_Protocol_h
#define DTXMessenger_Protocol_h
@import Foundation;

@protocol DTXMessenger <NSObject>

@property (copy, nonatomic) NSString *label;

/* instance methods */
- (void)setMessageHandler:(id /* block */)handler;
- (void)setDispatchTarget:(id)target;
- (void)registerDisconnectHandler:(id /* block */)handler;
- (void)cancel;
- (void)sendControlAsync:(id)async replyHandler:(id /* block */)handler;
- (void)sendControlSync:(id)sync replyHandler:(id /* block */)handler;
- (void)sendMessage:(id)message replyHandler:(id /* block */)handler;
- (BOOL)sendMessageAsync:(id)async replyHandler:(id /* block */)handler;
- (void)sendMessageSync:(id)sync replyHandler:(id /* block */)handler;
@end

#endif /* DTXMessenger_Protocol_h */