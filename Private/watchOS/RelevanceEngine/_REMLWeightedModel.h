//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _REMLWeightedModel_h
#define _REMLWeightedModel_h
@import Foundation;

#include "REAutomaticExportedInterface-Protocol.h"
#include "REFeature.h"
#include "REInteractionDescriptor.h"

@interface _REMLWeightedModel : NSObject<REAutomaticExportedInterface> {
  /* instance variables */
  REInteractionDescriptor *_descriptor;
  REFeature *_biasFeature;
}

@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) REFeature *selectionFeature;

/* class methods */
+ (id)weightedModelWithDescriptor:(id)descriptor featureSet:(id)set;

/* instance methods */
- (id)initWithBiasFeature:(id)feature;
- (float)_biasForFeatureSet:(id)set;
- (void)enumerateModels:(id /* block */)models;
- (void)trainModelWithFeatureMap:(id)map positiveEvent:(id)event;
- (id)predictWithFeatures:(id)features;
- (BOOL)saveModelToURL:(id)url error:(id *)error;
- (BOOL)loadModelFromURL:(id)url error:(id *)error;
- (BOOL)_loadModel:(id)model fromURL:(id)url error:(id *)error;
- (void)_configureMode:(id)mode;
@end

#endif /* _REMLWeightedModel_h */