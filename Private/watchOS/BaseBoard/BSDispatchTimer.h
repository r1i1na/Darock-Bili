//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSDispatchTimer_h
#define BSDispatchTimer_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BSDispatchTimer : NSObject {
  /* instance variables */
  NSString *_identifier;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_lock_queue;
  NSObject<OS_dispatch_source> *_lock_source;
  id _lock_context;
  id /* block */ _lock_handler;
  unsigned long long _lock_fireTime;
  long long _lock_repeatNanoseconds;
  long long _lock_leewayNanoseconds;
  unsigned long long _lock_fireCount;
  unsigned int _lock_scheduleToken;
  BOOL _lock_invalidated;
}

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* BSDispatchTimer_h */