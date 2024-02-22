//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbiterClientSpringBoard_h
#define _UIKeyboardArbiterClientSpringBoard_h
@import Foundation;

#include "_UIKeyboardArbiterClientInputDestination.h"

@interface _UIKeyboardArbiterClientSpringBoard : _UIKeyboardArbiterClientInputDestination
/* instance methods */
- (id)init;
- (BOOL)allowedToShowKeyboard;
- (void)forceKeyboardAway;
- (BOOL)isSpotlight:(id)spotlight;
- (void)preserveKeyboardWithId:(id)id;
- (void)restoreKeyboardWithId:(id)id;
- (void)userSelectedApp:(id)app onCompletion:(id /* block */)completion;
- (void)userSelectedProcessIdentifier:(int)identifier withSceneIdentity:(id)identity onCompletion:(id /* block */)completion;
- (void)willLock:(id)lock;
- (void)queue_keyboardIAVChanged:(double)iavchanged onComplete:(id /* block */)complete;
@end

#endif /* _UIKeyboardArbiterClientSpringBoard_h */