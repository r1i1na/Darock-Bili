//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 47.1.0.0.0
//
#ifndef _RPTTestRunnerResultsDelegate_h
#define _RPTTestRunnerResultsDelegate_h
@import Foundation;

#include "RPTTestRunnerDelegate-Protocol.h"

@class NSString;

@interface _RPTTestRunnerResultsDelegate : NSObject<RPTTestRunnerDelegate>

@property (copy, nonatomic) id /* block */ resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)testRunner:(id)runner didFinishRunningParameters:(id)parameters;
- (void)testRunner:(id)runner didFailRunningParameters:(id)parameters withError:(id)error;
- (BOOL)testRunner:(id)runner shouldManagePPTLifetimeEvent:(long long)event forParamaters:(id)paramaters;
@end

#endif /* _RPTTestRunnerResultsDelegate_h */