//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMSoundComponent_h
#define AXMSoundComponent_h
@import Foundation;

#include "AXMOutputComponent.h"

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {
  /* instance variables */
  AVAudioEngine *_engine;
  AVAudioPlayerNode *_oneShotSoundPlayer;
  NSMutableArray *_activeSounds;
}

@property (retain, nonatomic) id configChangedObserverToken;

/* class methods */
+ (BOOL)isSupported;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)transitionToState:(long long)state completion:(id /* block */)completion;
- (BOOL)canHandleRequest:(id)request;
- (void)handleRequest:(id)request completion:(id /* block */)completion;
- (id)_scheduleActiveSound:(id)sound;
- (void)_scheduleOneShotSound:(id)sound completion:(id /* block */)completion;
- (BOOL)_startEngineIfNeeded:(id *)needed;
- (void)_stopActiveSound:(id)sound;
- (void)_logAudioFileInfo:(id)info;
@end

#endif /* AXMSoundComponent_h */