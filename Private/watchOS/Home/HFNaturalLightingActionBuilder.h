//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFNaturalLightingActionBuilder_h
#define HFNaturalLightingActionBuilder_h
@import Foundation;

#include "HFActionBuilder.h"

@class HMLightProfile;

@interface HFNaturalLightingActionBuilder : HFActionBuilder

@property (retain, nonatomic) HMLightProfile *lightProfile;
@property (nonatomic) BOOL naturalLightEnabled;

/* class methods */
+ (Class)homeKitRepresentationClass;

/* instance methods */
- (id)compareToObject:(id)object;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)object inHome:(id)home;
- (id)copyForCreatingNewAction;
- (id)description;
- (BOOL)canUpdateWithActionBuilder:(id)builder;
- (BOOL)updateWithActionBuilder:(id)builder;
- (id)createNewAction;
- (BOOL)hasSameTargetAsAction:(id)action;
- (id)containedAccessoryRepresentables;
- (id)performValidation;
- (id)validationError;
- (id)commitItem;
@end

#endif /* HFNaturalLightingActionBuilder_h */