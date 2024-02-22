//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPVideoCaptionAnalyzer_h
#define VCPVideoCaptionAnalyzer_h
@import Foundation;

#include "VCPVideoAnalyzer.h"
#include "VCPTransforms.h"
#include "VCPVideoCaptionEncoder.h"

@class MAAsset, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_group;

@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer {
  /* instance variables */
  VCPVideoCaptionEncoder *_backbone;
  VCPTransforms *_transformImage;
  float * _inputData;
  int _inputWidth;
  int _inputHeight;
  int _inputNumFrames;
  int _skipNumFramesBothEnds;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
  int _frameIndex;
  int _validFrames;
  BOOL _enoughFrames;
  NSString *_resConfig;
  NSMutableArray *_videoCaptionResult;
  NSMutableArray *_activeFrameIndices;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeEnd;
  NSURL *_videoCaptionDecoder;
  NSURL *_videoCaptionEncoder;
  NSObject<OS_dispatch_group> *_downloadGroup;
  MAAsset *_videoCaptionEncoderAsset;
}

/* class methods */
+ (long long)mode;
+ (BOOL)gatingEnabled;
+ (id)videoCaptionEncoderTestURL;
+ (id)videoCaptionDecoderTestURL;
+ (id)imageCaptionModelTestURL;
+ (id)cloneCaptionModel:(id)model to:(id)to;
+ (id)queryVideoCaptionEncoderAsset;
+ (id)downloadMobileAssetIfNeeded:(id)needed;

/* instance methods */
- (id)initWithFrameRate:(float)rate timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)initWithFrameNumber:(unsigned long long)number;
- (void)dealloc;
- (int)configInputBasedOnDevice;
- (int)copyImage:(struct __CVBuffer *)image withChannels:(int)channels;
- (int)analyzeFrame:(struct __CVBuffer *)frame withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration flags:(unsigned long long *)flags;
- (int)inference:(struct { long long x0; int x1; unsigned int x2; long long x3; })inference duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pass;
- (id)results;
@end

#endif /* VCPVideoCaptionAnalyzer_h */