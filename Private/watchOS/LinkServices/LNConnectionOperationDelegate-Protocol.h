//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNConnectionOperationDelegate_Protocol_h
#define LNConnectionOperationDelegate_Protocol_h
@import Foundation;

@protocol LNConnectionOperationDelegate <NSObject>
/* instance methods */
- (void)connectionOperationWillStart:(id)start;
- (void)connectionOperation:(id)operation didFinishWithError:(id)error;
@end

#endif /* LNConnectionOperationDelegate_Protocol_h */