//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef MicaPlayer_h
#define MicaPlayer_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class CALayer, NSDictionary, NSString, NSTimer;
@protocol MicaPlayerDelegate;

@interface MicaPlayer : NSObject<NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (retain, nonatomic) NSTimer *playTimer;
@property (weak, nonatomic) NSObject<MicaPlayerDelegate> *delegate;
@property (nonatomic) double retinaScale;
@property (nonatomic) double documentDuration;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) double playbackTime;
@property (nonatomic) float preferredPlaybackSpeed;
@property (readonly, nonatomic) BOOL isPlaybackAtEnd;
@property (nonatomic) BOOL loopDuringPlayback;

/* class methods */
+ (id)rootDictForPath:(id)path;
+ (BOOL)boolFromDictionary:(id)dictionary key:(id)key defaultValue:(BOOL)value;
+ (id)updatePublishedObjects:(id)objects toReferenceLayersInTree:(id)tree ratherThanLayersInTree:(id)tree;

/* instance methods */
- (id)initWithData:(id)data url:(id)url retinaScale:(double)scale;
- (id)initWithFileName:(id)name retinaScale:(double)scale;
- (id)initWithPath:(id)path retinaScale:(double)scale;
- (id)initWithPath:(id)path retinaScale:(double)scale rootLayer:(id)layer publishedObjects:(id)objects;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addToLayer:(id)layer onTop:(BOOL)top gravity:(id)gravity;
- (void)removeFromSuperlayer;
- (void)moveAndResizeWithinParentLayer:(id)layer usingGravity:(id)gravity animate:(BOOL)animate;
- (id)publishedLayerWithKey:(id)key required:(BOOL)required;
- (id)publishedObjectWithKey:(id)key required:(BOOL)required;
- (void)play;
- (void)pause;
- (void)notifyDelegateDidStartPlaying;
- (void)notifyDelegateDidStopPlaying;
- (void)notifyDelegateDidChangePlaybackTime;
- (void)notifyDelegateDidChangePlaybackTimeIsPlaybackAtEnd:(BOOL)end;
- (BOOL)isTimerNeeded;
- (void)startPlayTimerIfNeeded;
- (void)stopPlayTimer;
- (void)runPlayTimer:(id)timer;
@end

#endif /* MicaPlayer_h */