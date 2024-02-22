//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetSynchronousInspectorLoader_h
#define AVAssetSynchronousInspectorLoader_h
@import Foundation;

#include "AVAssetInspectorLoader.h"
#include "AVAssetInspector.h"

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
  /* instance variables */
  AVAssetInspector *_assetInspector;
}

/* instance methods */
- (id)initWithAssetInspector:(id)inspector;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)assetInspector;
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)keys completionHandler:(id /* block */)handler;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)lyrics;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
@end

#endif /* AVAssetSynchronousInspectorLoader_h */