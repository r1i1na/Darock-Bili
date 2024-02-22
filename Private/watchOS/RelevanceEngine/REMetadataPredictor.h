//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REMetadataPredictor_h
#define REMetadataPredictor_h
@import Foundation;

#include "REPredictor.h"

@class NSMutableDictionary;

@interface REMetadataPredictor : REPredictor {
  /* instance variables */
  NSMutableDictionary *_interactionFeatureValueCache;
  NSMutableDictionary *_sectionFeatureValueCache;
}

/* class methods */
+ (id)supportedFeatures;

/* instance methods */
- (id)_init;
- (id)featureValueForFeature:(id)feature element:(id)element engine:(id)engine trainingContext:(id)context;
- (void)update;
@end

#endif /* REMetadataPredictor_h */