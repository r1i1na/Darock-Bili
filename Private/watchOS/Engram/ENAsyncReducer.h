//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef ENAsyncReducer_h
#define ENAsyncReducer_h
@import Foundation;

@class CUTResult, NSArray;

@interface ENAsyncReducer : NSObject

@property (retain, nonatomic) NSArray *input;
@property (retain, nonatomic) CUTResult *result;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ reducerBlock;

/* instance methods */
- (id)initWithInput:(id)input initialValue:(id)value;
- (void)reduceWithCompletion:(id /* block */)completion;
- (void)_completeWithResult:(id)result;
- (void)_reduceWithPending:(id)pending visited:(id)visited currentResult:(id)result completion:(id /* block */)completion;
@end

#endif /* ENAsyncReducer_h */