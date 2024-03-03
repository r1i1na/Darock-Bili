//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 72.0.0.0.0
//
#ifndef RPDCompressedTexture_h
#define RPDCompressedTexture_h
@import Foundation;

#include "RPDTexture.h"

@class NSData;

@interface RPDCompressedTexture : RPDTexture {
  /* instance variables */
  NSData *_mappedData;
}

/* class methods */
+ (id)textureWithContentsOfURL:(id)url width:(int)width height:(int)height;

/* instance methods */
- (id)initWithContentsOfURL:(id)url width:(int)width height:(int)height;
@end

#endif /* RPDCompressedTexture_h */