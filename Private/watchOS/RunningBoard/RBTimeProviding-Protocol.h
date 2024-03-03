//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBTimeProviding_Protocol_h
#define RBTimeProviding_Protocol_h
@import Foundation;

@protocol RBTimeProviding <NSObject>
/* instance methods */
- (double)currentTime;
- (double)startTimeForProcess:(id)process;
- (void)executeAfter:(double)after onQueue:(id)queue block:(id /* block */)block;
- (id)executeWithCancellingAfter:(double)after onQueue:(id)queue block:(id /* block */)block;
@end

#endif /* RBTimeProviding_Protocol_h */