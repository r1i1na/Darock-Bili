//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef STGenericIntentHelper_h
#define STGenericIntentHelper_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface STGenericIntentHelper : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore;

/* class methods */
+ (id)sharedHelper;

/* instance methods */
- (id)init;
- (void)finishedLaunching:(BOOL)launching;
- (void)handleSiriTask:(id)task withApplication:(id)application;
- (void)_handleIntent:(id)intent withTask:(id)task andApplication:(id)application;
- (void)forIntentParam:(id)param predict:(id)predict;
- (void)forIntent:(id)intent registerHandler:(id /* block */)handler;
- (BOOL)_invokeHandlerForIntent:(id)intent;
@end

#endif /* STGenericIntentHelper_h */