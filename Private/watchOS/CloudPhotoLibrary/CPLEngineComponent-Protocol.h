//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineComponent_Protocol_h
#define CPLEngineComponent_Protocol_h
@import Foundation;

@protocol CPLEngineComponent <NSObject>
/* instance methods */
- (void)openWithCompletionHandler:(id /* block */)handler;
- (void)closeAndDeactivate:(BOOL)deactivate completionHandler:(id /* block */)handler;
- (id)componentName;
@optional
/* instance methods */
- (void)getStatusWithCompletionHandler:(id /* block */)handler;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)handler;
- (void)testKey:(id)key value:(id)value completionHandler:(id /* block */)handler;
@end

#endif /* CPLEngineComponent_Protocol_h */