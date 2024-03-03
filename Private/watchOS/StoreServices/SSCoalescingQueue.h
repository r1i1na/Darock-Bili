//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSCoalescingQueue_h
#define SSCoalescingQueue_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSCoalescingQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)executeBlock;
@end

#endif /* SSCoalescingQueue_h */