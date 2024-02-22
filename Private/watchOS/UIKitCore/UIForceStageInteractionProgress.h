//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIForceStageInteractionProgress_h
#define UIForceStageInteractionProgress_h
@import Foundation;

#include "UIInteractionProgress.h"
#include "NSObservable-Protocol.h"
#include "NSObserver-Protocol.h"

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress : UIInteractionProgress<NSObservable, NSObserver> {
  /* instance variables */
  NSObservation *_observation;
  BOOL _completed;
  BOOL _started;
}

@property (nonatomic) BOOL completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)receiveObservedValue:(id)value;
- (void)_reset;
@end

#endif /* UIForceStageInteractionProgress_h */