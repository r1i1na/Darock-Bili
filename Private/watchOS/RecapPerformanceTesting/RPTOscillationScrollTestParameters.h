//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 47.1.0.0.0
//
#ifndef RPTOscillationScrollTestParameters_h
#define RPTOscillationScrollTestParameters_h
@import Foundation;

#include "RPTCoordinateSpaceConverter.h"
#include "RPTTestParameters-Protocol.h"
#include "_RPTCoordinateSpaces-Protocol.h"

@class CAMediaTimingFunction, NSString;

@interface RPTOscillationScrollTestParameters : NSObject<_RPTCoordinateSpaces, RPTTestParameters>

@property (nonatomic) unsigned long long iterations;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollingBounds;
@property (retain, nonatomic) CAMediaTimingFunction *curveFunction;
@property (nonatomic) BOOL shouldFlick;
@property (nonatomic) double useDefaultDurationForFlick;
@property (nonatomic) BOOL preventDismissalGestures;
@property (nonatomic) BOOL finishWithHalfIteration;
@property (nonatomic) double amplitudeVariationPerIteration;
@property (nonatomic) double initialAmplitude;
@property (nonatomic) long long initialDirection;
@property (nonatomic) double iterationDuration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepareWithComposer:(id)composer;
- (id)initWithTestName:(id)name iterations:(unsigned long long)iterations scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds useFlicks:(BOOL)flicks preventDismissalGestures:(BOOL)gestures initialAmplitude:(double)amplitude amplitudeVariationPerIteration:(double)iteration initialDirection:(long long)direction iterationDuration:(double)duration finishWithHalfIteration:(BOOL)iteration;
- (id)initWithTestName:(id)name iterations:(unsigned long long)iterations scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds useFlicks:(BOOL)flicks preventDismissalGestures:(BOOL)gestures initialAmplitude:(double)amplitude amplitudeVariationPerIteration:(double)iteration initialDirection:(long long)direction iterationDuration:(double)duration finishWithHalfIteration:(BOOL)iteration completionHandler:(id /* block */)handler;
- (struct CGPoint { double x0; double x1; })_incrementPoint:(struct CGPoint { double x0; double x1; })point final:(BOOL)final;
- (id /* block */)composerBlock;
- (void)scrollWithComposer:(id)composer fromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point duration:(double)duration;
- (struct CGPoint { double x0; double x1; })initialFingerPosition;
- (struct CGPoint { double x0; double x1; })finalFingerPosition;
@end

#endif /* RPTOscillationScrollTestParameters_h */