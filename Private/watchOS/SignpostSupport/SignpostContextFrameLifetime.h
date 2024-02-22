//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostContextFrameLifetime_h
#define SignpostContextFrameLifetime_h
@import Foundation;

#include "SignpostAnimationSubInterval.h"
#include "SignpostCARenderServerFrameMetadata-Protocol.h"
#include "SignpostContextInfo.h"
#include "SignpostFrameLifetimeInterval.h"
#include "SignpostSupportTimeInterval-Protocol.h"

@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval<SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) SignpostFrameLifetimeInterval *parentFrameLifetime;
@property (readonly, nonatomic) SignpostContextInfo *contextInfo;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *contextGlitchInterval;

/* instance methods */
- (id)initWithFrameLifetime:(id)lifetime contextInfo:(id)info;
@end

#endif /* SignpostContextFrameLifetime_h */