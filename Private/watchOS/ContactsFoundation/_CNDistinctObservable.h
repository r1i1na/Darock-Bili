//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNDistinctObservable_h
#define _CNDistinctObservable_h
@import Foundation;

#include "CNObservable.h"
#include "CNObservable-Protocol.h"

@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {
  /* instance variables */
  NSObject<CNObservable> *_observable;
  NSMutableSet *_previouslyObservedResults;
}

/* instance methods */
- (id)initWithObservable:(id)observable;
- (id)subscribe:(id)subscribe;
- (BOOL)_resultIsDistinct:(id)distinct;
@end

#endif /* _CNDistinctObservable_h */