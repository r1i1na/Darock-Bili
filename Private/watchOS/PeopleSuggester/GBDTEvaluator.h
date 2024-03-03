//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef GBDTEvaluator_h
#define GBDTEvaluator_h
@import Foundation;

@interface GBDTEvaluator : NSObject
/* class methods */
+ (void)initialize;

/* instance methods */
- (id)_makeKeysWithInputVectors:(id)vectors;
- (id)_computePredictionsFromModelWithInputVectors:(id)vectors currentModel:(id)model error:(id *)error;
- (id)_l1NormWithArray:(id)array;
- (id)_l2NormWithArray:(id)array;
- (id)_sumAbsoluteErrorWithPredictions:(id)predictions targets:(id)targets;
- (id)_sumAccuratePredictionsWithPredictions:(id)predictions targets:(id)targets;
- (float)_sigmoidWithValue:(float)value;
- (float)_firstOrderGradientWithPrediction:(float)prediction label:(float)label;
- (float)_secondOrderGradientWithPrediction:(float)prediction;
- (id)_computeFirstOrderGradientsWithTargets:(id)targets predictions:(id)predictions positiveSampleWeight:(id)weight;
- (id)_computeSecondOrderGradientsWithTargets:(id)targets predictions:(id)predictions positiveSampleWeight:(id)weight;
- (id)_findNodeSamplesWithDecisionPath:(id)path inputVectors:(id)vectors gradients:(id)gradients;
- (id)_computeSumOfGradientsLeftAndRightOfSplitWithFeature:(int)feature threshold:(float)threshold inputVectors:(id)vectors gradients:(id)gradients;
- (id)_evaluateResultWithGradients:(id)gradients questions:(id)questions inputVectors:(id)vectors reportGradientsBothSidesOfSplit:(BOOL)split reportNodeSumGradients:(BOOL)gradients reportPerFeatureResultDifference:(BOOL)difference reportPerNodeResultDifference:(BOOL)difference;
- (id)_weightResultWithWeightVector:(id)vector result:(id)result;
- (id)_translateResultWithTranslateVector:(id)vector result:(id)result;
- (id)_differenceArrayWithArray:(id)array;
- (id)evaluateWithModelURL:(id)url dataSource:(id)source processDataReturnDict:(id)dict error:(id *)error;
@end

#endif /* GBDTEvaluator_h */