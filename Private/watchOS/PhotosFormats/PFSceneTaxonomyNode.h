//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFSceneTaxonomyNode_h
#define PFSceneTaxonomyNode_h
@import Foundation;

#include "PFSceneTaxonomy.h"

@class NSSet, NSString;

@interface PFSceneTaxonomyNode : NSObject {
  /* instance variables */
  void * _nodeRef;
}

@property (readonly) PFSceneTaxonomy *taxonomy;
@property (readonly) unsigned int sceneClassId;
@property (readonly) unsigned long long networkId;
@property (readonly, copy) NSString *name;
@property (readonly) BOOL indexed;
@property (readonly) double searchThreshold;
@property (readonly) double threshold;
@property (readonly) double highRecallThreshold;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double precision0point6Threshold;
@property (readonly) double f0point5Threshold;
@property (readonly) double f1Threshold;
@property (readonly) double f2Threshold;
@property (readonly) double graphHighPrecisionThreshold;
@property (readonly) double graphHighRecallThreshold;
@property (readonly, copy) NSSet *parents;
@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly) BOOL root;

/* instance methods */
- (id)initWithNodeRef:(void *)ref taxonomy:(id)taxonomy;
- (BOOL)isRoot;
- (BOOL)isIndexed;
- (void)traverse:(long long)traverse visitor:(id /* block */)visitor;
- (id)localizedLabel;
- (id)localizedSynonyms;
- (BOOL)isEqualToNode:(id)node;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PFSceneTaxonomyNode_h */