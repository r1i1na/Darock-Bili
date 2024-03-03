//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusStateObserver_h
#define _UIFocusStateObserver_h
@import Foundation;

@class NSMapTable;

@interface _UIFocusStateObserver : NSObject {
  /* instance variables */
  NSMapTable *_observers;
  struct { unsigned int x :1 wasActive; unsigned int x :1 supressNotifyObservers; } _flags;
}

@property (readonly, nonatomic) BOOL active;

/* instance methods */
- (id)init;
- (BOOL)isActive;
- (id)addObserver:(id /* block */)observer;
- (void)removeObserver:(id)observer;
- (void)notifyObserversIfNecessary;
- (void)performUpdatesAndNotifyObservers:(id /* block */)observers;
- (id)descriptionBuilder;
- (id)description;
@end

#endif /* _UIFocusStateObserver_h */