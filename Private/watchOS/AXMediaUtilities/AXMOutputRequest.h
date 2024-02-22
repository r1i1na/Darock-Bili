//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMOutputRequest_h
#define AXMOutputRequest_h
@import Foundation;

#include "AXMOutputRequestHandle.h"

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXMOutputRequest : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableArray *_queue_actions;
}

@property (readonly, nonatomic) AXMOutputRequestHandle *handle;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *speechActions;
@property (readonly, nonatomic) NSArray *oneShotSoundActions;
@property (readonly, nonatomic) NSArray *activeSoundActions;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL interruptsAndClearsQueue;

/* class methods */
+ (id)speechItemSeparator;

/* instance methods */
- (id)init;
- (void)_addAction:(id)action;
- (void)addSpeechItem:(id)item;
- (void)addSoundItemWithID:(id)id;
- (void)addSoundItemWithURL:(id)url;
- (void)addActiveSoundItemWithID:(id)id;
- (void)addActiveSoundItemWithURL:(id)url;
@end

#endif /* AXMOutputRequest_h */