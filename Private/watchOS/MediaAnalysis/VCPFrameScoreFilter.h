//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPFrameScoreFilter_h
#define VCPFrameScoreFilter_h
@import Foundation;

@interface VCPFrameScoreFilter : NSObject {
  /* instance variables */
  int _numFilterTabs;
  float * _scoreArray;
  float _distanceVariance;
  float _diffVariance;
  int _numOfScores;
}

/* instance methods */
- (id)initWithFilterTabs:(int)tabs distanceVariance:(float)variance diffVariance:(float)variance;
- (void)dealloc;
- (float)processFrameScore:(float)score validScore:(BOOL)score;
@end

#endif /* VCPFrameScoreFilter_h */