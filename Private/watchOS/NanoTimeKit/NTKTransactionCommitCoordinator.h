//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTransactionCommitCoordinator_h
#define NTKTransactionCommitCoordinator_h
@import Foundation;

@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject {
  /* instance variables */
  NSMutableArray *_commitHandlers;
}

/* class methods */
+ (BOOL)addTransactionCommitHandler:(id /* block */)handler;
+ (id)_sharedInstance;
+ (void)flushCommitHandlers;

/* instance methods */
- (id)init;
- (BOOL)_addTransactionCommitHandler:(id /* block */)handler;
- (void)_registerCATransactionCommitHandler;
@end

#endif /* NTKTransactionCommitCoordinator_h */