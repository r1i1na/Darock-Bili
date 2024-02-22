//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDReplaceMergeableDeltasOperation_h
#define CKDReplaceMergeableDeltasOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSArray;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, @dynamic, nonatomic) NSObject<CKReplaceMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (int)operationType;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_encryptMergeableDeltas;
- (void)_replaceMergeableDeltas;
- (void)handleReplaceDeltasRequest:(id)request result:(id)result;
@end

#endif /* CKDReplaceMergeableDeltasOperation_h */