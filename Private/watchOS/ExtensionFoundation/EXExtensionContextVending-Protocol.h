//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXExtensionContextVending_Protocol_h
#define EXExtensionContextVending_Protocol_h
@import Foundation;

@protocol EXExtensionContextVending <NSObject>
/* instance methods */
- (void)_beginRequestWithExtensionItems:(id)items listenerEndpoint:(id)endpoint withContextUUID:(id)uuid completion:(id /* block */)completion;
- (void)_hostDidEnterBackgroundForContextUUID:(id)uuid completion:(id /* block */)completion;
- (void)_hostWillEnterForegroundForContextUUID:(id)uuid completion:(id /* block */)completion;
- (void)_hostWillResignActiveForContextUUID:(id)uuid completion:(id /* block */)completion;
- (void)_hostDidBecomeActiveForContextUUID:(id)uuid completion:(id /* block */)completion;
@end

#endif /* EXExtensionContextVending_Protocol_h */