//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 137.60.2.0.0
//
#ifndef AWAttentionSampler_h
#define AWAttentionSampler_h
@import Foundation;

#include "AWSampleLogger.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWAttentionSampler : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  unsigned long long _nextDeadline;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) BOOL lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) double lastDistance;
@property (nonatomic) unsigned long long lastFaceState;
@property (nonatomic) double lastFrameNumber;
@property (nonatomic) BOOL lastIsCameraObstructed;
@property (nonatomic) unsigned long long lastMetadataType;
@property (readonly, nonatomic) BOOL unitTestSampling;
@property (retain, nonatomic) NSMutableArray *lastMotionData;

/* instance methods */
- (id)init;
- (id)description;
- (void)setUnitTestMode;
- (void)startDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)deadline forClient:(id)client;
- (void)finishDeadlineComputationWithOptions:(struct { BOOL x0; BOOL x1; })options;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)interval ignoreDisplayState:(BOOL)state;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(BOOL)sample withDeadline:(unsigned long long)deadline withOptions:(struct { BOOL x0; BOOL x1; })options;
- (void)setSmartCoverClosed:(BOOL)closed;
- (id)initWithOptions:(id)options;
@end

#endif /* AWAttentionSampler_h */