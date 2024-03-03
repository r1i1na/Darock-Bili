//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSSRXPCClient_h
#define CSSSRXPCClient_h
@import Foundation;

#include "CSSSRXPCClientDelegate-Protocol.h"
#include "CSSSRXPCServiceDelegate-Protocol.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CSSSRXPCClient : NSObject<CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) NSObject<CSSSRXPCClientDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)startXPCConnection;
- (id)_getRemoteServiceProxyObject;
- (void)_createClientConnection;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)card;
- (void)didFinishSpeakerRecognition:(id)recognition;
@end

#endif /* CSSSRXPCClient_h */