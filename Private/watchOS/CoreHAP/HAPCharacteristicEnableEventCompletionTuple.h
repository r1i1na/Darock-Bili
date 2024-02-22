//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPCharacteristicEnableEventCompletionTuple_h
#define HAPCharacteristicEnableEventCompletionTuple_h
@import Foundation;

#include "HMFObject.h"

@protocol OS_dispatch_queue;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

/* class methods */
+ (id)enableEventCompletionTupleWithHandler:(id /* block */)handler queue:(id)queue;

/* instance methods */
@end

#endif /* HAPCharacteristicEnableEventCompletionTuple_h */