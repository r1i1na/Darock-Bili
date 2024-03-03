//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOVideoPlayerView_h
#define NPTOVideoPlayerView_h
@import Foundation;

#include "UIView.h"
#include "NPTOVideoPlayerViewDelegate-Protocol.h"
#include "_NPTOPlayerView.h"

@class AVPlayerItem, AVQueuePlayer, NSValue, UIView;

@interface NPTOVideoPlayerView : UIView {
  /* instance variables */
  _NPTOPlayerView *_playerView;
  AVQueuePlayer *_player;
  AVPlayerItem *_playerItem;
  AVPlayerItem *_observedItem;
  id _periodicTimeObserver;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _willBeginPlayingTime;
  UIView *_pausedView;
  unsigned long long _servicingRequest;
  BOOL _playRequested;
  NSValue *_seekRequested;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekWithTolerance;
  BOOL _prerollRequested;
  BOOL _playing;
  NSObject<NPTOVideoPlayerViewDelegate> *_delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_handleDidPlayToEndTime:(id)time;
@end

#endif /* NPTOVideoPlayerView_h */