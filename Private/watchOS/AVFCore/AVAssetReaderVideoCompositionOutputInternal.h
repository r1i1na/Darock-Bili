//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetReaderVideoCompositionOutputInternal_h
#define AVAssetReaderVideoCompositionOutputInternal_h
@import Foundation;

#include "AVCustomVideoCompositorSession.h"
#include "AVVideoComposition.h"
#include "AVVideoOutputSettings.h"

@class NSArray;

@interface AVAssetReaderVideoCompositionOutputInternal : NSObject {
  /* instance variables */
  NSArray *videoTracks;
  NSArray *sampleDataTrackIDs;
  AVVideoOutputSettings *videoOutputSettings;
  AVVideoComposition *videoComposition;
  void * figVideoCompositor;
  AVCustomVideoCompositorSession *customVideoCompositorSession;
}

@end

#endif /* AVAssetReaderVideoCompositionOutputInternal_h */