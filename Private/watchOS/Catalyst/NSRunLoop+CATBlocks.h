//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef NSRunLoop_CATBlocks_h
#define NSRunLoop_CATBlocks_h
@import Foundation;

@interface NSRunLoop (CATBlocks)
/* class methods */
+ (void)cat_performBlock:(id /* block */)block;
+ (void)cat_performBlockOnMainRunLoop:(id /* block */)loop;

/* instance methods */
- (void)cat_performBlock:(id /* block */)block;
- (void)cat_performInModes:(id)modes block:(id /* block */)block;
@end

#endif /* NSRunLoop_CATBlocks_h */