//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFOperationFutureAdapter_h
#define HMFOperationFutureAdapter_h
@import Foundation;

#include "HMFFuture.h"
#include "HMFPromise.h"

@interface HMFOperationFutureAdapter : NSObject {
  /* instance variables */
  HMFPromise *_promise;
  HMFFuture *_future;
}

/* instance methods */
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* HMFOperationFutureAdapter_h */