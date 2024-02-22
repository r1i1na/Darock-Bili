//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FAEligiblityEvaluationRequest_h
#define FAEligiblityEvaluationRequest_h
@import Foundation;

#include "FAFamilyCircleRequest.h"

@class NSString;

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *bundleID;

/* instance methods */
- (id)initWithPropertyName:(id)name bundleID:(id)id;
- (void)startRequestWithCompletion:(id /* block */)completion;
- (unsigned long long)fetchEligibilityWithError:(id *)error;
@end

#endif /* FAEligiblityEvaluationRequest_h */