//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFNotificationCenter_h
#define HMFNotificationCenter_h
@import Foundation;

@interface HMFNotificationCenter : NSObject
/* class methods */
+ (id)defaultCenter;

/* instance methods */
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;
- (void)removeObserver:(id)observer name:(id)name object:(id)object;
- (void)removeObserver:(id)observer;
- (void)postNotification:(id)notification;
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;
- (void)postNotificationName:(id)name object:(id)object;
@end

#endif /* HMFNotificationCenter_h */