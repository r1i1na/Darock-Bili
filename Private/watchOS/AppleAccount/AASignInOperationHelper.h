//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AASignInOperationHelper_h
#define AASignInOperationHelper_h
@import Foundation;

@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {
  /* instance variables */
  ACAccountStore *_accountStore;
}

/* instance methods */
- (id)init;
- (void)signInAccount:(id)account enablingDataclasses:(BOOL)dataclasses completion:(id /* block */)completion;
- (void)_saveAccount:(id)account completion:(id /* block */)completion;
- (void)_refreshEnabledDataclassesForAccount:(id)account;
@end

#endif /* AASignInOperationHelper_h */