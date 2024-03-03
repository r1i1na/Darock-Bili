//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDAsyncContext_Protocol_h
#define _CDAsyncContext_Protocol_h
@import Foundation;

@protocol _CDAsyncContext <_CDContext>
/* instance methods */
- (void)objectForContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)lastModifiedDateForContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
@end

#endif /* _CDAsyncContext_Protocol_h */