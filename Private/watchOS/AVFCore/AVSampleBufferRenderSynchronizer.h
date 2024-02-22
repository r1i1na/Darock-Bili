//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVSampleBufferRenderSynchronizer_h
#define AVSampleBufferRenderSynchronizer_h
@import Foundation;

#include "AVSampleBufferRenderSynchronizerInternal.h"

@class NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject {
  /* instance variables */
  AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

@property (readonly) NSArray *renderers;
@property (readonly, retain) struct OpaqueCMTimebase * timebase;
@property (nonatomic) float rate;
@property (nonatomic) BOOL delaysRateChangeUntilHasSufficientMediaData;

/* class methods */
+ (id)currentFigRenderSynchronizerFactory;
+ (void)setFigRenderSynchronizerFactory:(id)factory forQueue:(id)queue;

/* instance methods */
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval queue:(id)queue usingBlock:(id /* block */)block;
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id /* block */)block;
- (void)removeTimeObserver:(id)observer;
- (BOOL)isDefunct;
- (BOOL)_canAddRendererInternal:(id)internal error:(id *)error;
- (BOOL)_rendererConfigurationIsValid:(id *)valid;
- (BOOL)_multipleAudioRenderersDisallowed;
- (long long)_addedAudioRendererCount;
- (long long)_addedAudioRendererCountInternal;
- (BOOL)_addRenderer:(id)renderer error:(id *)error;
- (void)addRenderer:(id)renderer;
- (id)_getTimebaseObserverForRenderer:(id)renderer;
- (id /* block */)_getClientCompletionHandlerForRenderer:(id)renderer;
- (void)_removeTimebaseObserverForRenderer:(id)renderer;
- (void)_storeObserver:(id)observer clientCompletionHandler:(id /* block */)handler forRenderer:(id)renderer;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)renderer atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)_scheduleTimedRendererRemovalAtTime:(id)time atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time withClientCompletionHandler:(id /* block */)handler;
- (void)removeRenderer:(id)renderer atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time withCompletionHandler:(id /* block */)handler;
- (void)removeRenderer:(id)renderer atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (void)_performRendererRemoval:(id)removal;
- (id)init;
- (int)_initializeTimebase;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time error:(id *)error;
- (int)_setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)_updateRateFromTimebase;
@end

#endif /* AVSampleBufferRenderSynchronizer_h */