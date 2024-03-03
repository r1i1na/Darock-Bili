//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKButtonListener_h
#define NPKButtonListener_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface NPKButtonListener : NSObject

@property (copy, nonatomic) id /* block */ buttonHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;

/* instance methods */
- (id)initWithHandlerQueue:(id)queue;
- (id /* block */)_handlerQueue_buttonHandler;
@end

#endif /* NPKButtonListener_h */