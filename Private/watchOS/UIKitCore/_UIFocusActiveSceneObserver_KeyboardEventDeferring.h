//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusActiveSceneObserver_KeyboardEventDeferring_h
#define _UIFocusActiveSceneObserver_KeyboardEventDeferring_h
@import Foundation;

#include "_UIFocusActiveSceneObserver.h"

@interface _UIFocusActiveSceneObserver_KeyboardEventDeferring : _UIFocusActiveSceneObserver
/* instance methods */
- (id)_initWithScene:(id)scene;
- (void)dealloc;
- (void)_activeStateChanged:(id)changed;
- (BOOL)isActive;
@end

#endif /* _UIFocusActiveSceneObserver_KeyboardEventDeferring_h */