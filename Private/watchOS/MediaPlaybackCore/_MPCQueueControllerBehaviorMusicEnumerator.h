//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCQueueControllerBehaviorMusicEnumerator_h
#define _MPCQueueControllerBehaviorMusicEnumerator_h
@import Foundation;

#include "NSEnumerator.h"
#include "MPCQueueControllerBehaviorMusicIdentifierComponents.h"
#include "_MPCQueueControllerEnumerator.h"

@interface _MPCQueueControllerBehaviorMusicEnumerator : NSEnumerator {
  /* instance variables */
  MPCQueueControllerBehaviorMusicIdentifierComponents *_startingComponents;
  MPCQueueControllerBehaviorMusicIdentifierComponents *_repeatOneComponents;
  long long _repeatIteration;
}

@property (readonly, nonatomic) _MPCQueueControllerEnumerator *queueEnumerator;

/* instance methods */
- (id)initWithQueueEnumerator:(id)enumerator startingComponents:(id)components;
- (id)_loadingComponentsForHeadOfSection:(id)section;
- (id)nextObject;
@end

#endif /* _MPCQueueControllerBehaviorMusicEnumerator_h */