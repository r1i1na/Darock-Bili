//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDProtectedDataOperationDelegate_Protocol_h
#define HDProtectedDataOperationDelegate_Protocol_h
@import Foundation;

@protocol HDProtectedDataOperationDelegate <NSObject>
/* instance methods */
- (void)performWorkForOperation:(id)operation profile:(id)profile databaseAccessibilityAssertion:(id)assertion completion:(id /* block */)completion;
@end

#endif /* HDProtectedDataOperationDelegate_Protocol_h */