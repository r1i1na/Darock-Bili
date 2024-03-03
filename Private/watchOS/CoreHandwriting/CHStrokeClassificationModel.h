//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHStrokeClassificationModel_h
#define CHStrokeClassificationModel_h
@import Foundation;

#include "CHRecurrentNeuralNetwork.h"

@class NSArray, NSIndexSet, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetwork {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  void * _model;
  long long _modelUseCount;
  long long _inferenceCount;
}

@property (readonly, nonatomic) NSArray *modelConfigurationsNumStrokes;
@property (readonly, nonatomic) NSArray *modelConfigurationsNumPoints;
@property (readonly, nonatomic) NSString *modelSmallestConfig;
@property (readonly, nonatomic) long long numInputFeatures;
@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAngleFeatureIndex;
@property (readonly, nonatomic) long long cosAngleFeatureIndex;
@property (readonly, nonatomic) long long modelDecoderSize;
@property (readonly, nonatomic) long long maxInputWidth;
@property (readonly, nonatomic) long long minPointsPerStroke;
@property (readonly, nonatomic) long long maxPointsPerStroke;
@property (readonly, nonatomic) long long recognitionMaxStrokes;
@property (readonly, nonatomic) long long contextMaxStrokes;
@property (readonly, nonatomic) long long maxNumberOfInputStrokes;
@property (readonly, nonatomic) double interpointDistance;
@property (readonly, nonatomic) long long numOutputClasses;
@property (readonly, nonatomic) long long nontextClassIndex;
@property (readonly, nonatomic) NSIndexSet *textLTRClassIndexes;
@property (readonly, nonatomic) NSIndexSet *textRTLClassIndexes;
@property (readonly, nonatomic) struct CHCodeMap { char * x0; unsigned long long x1; unsigned int * x2; unsigned int x3; } * codeMap;
@property (readonly, nonatomic) NSMutableDictionary *codeIndexDictionary;

/* class methods */
+ (id)modelWithModelName:(id)name;
+ (id)localesFromModelPrediction:(struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void * x0; void * x1; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void * x0; } x2; })prediction maxNumberOfLocales:(long long)locales numberOfOutputClass:(long long)class codePointDictionary:(id)dictionary;

/* instance methods */
- (void)dealloc;
- (id)_extractFeaturesFromDrawing:(id)drawing numStrokes:(unsigned long long)strokes numPoints:(unsigned long long)points error:(id *)error;
- (id)_subTilesForStrokeCount:(long long)count;
- (BOOL)_isContentStroke:(long long)stroke withinSubtile:(long long)subtile withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range ofTotal:(long long)total;
- (BOOL)classifyStrokes:(id)strokes outTextStrokeProbabilities:(void *)probabilities cancellationBlock:(id /* block */)block;
- (BOOL)classifyStrokes:(id)strokes outStrokeClassProbabilities:(void *)probabilities cancellationBlock:(id /* block */)block;
- (id)predictedScriptsForDrawing:(id)drawing maxNumberOfLocales:(long long)locales;
@end

#endif /* CHStrokeClassificationModel_h */