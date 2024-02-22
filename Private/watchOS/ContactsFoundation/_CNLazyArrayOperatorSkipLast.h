//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNLazyArrayOperatorSkipLast_h
#define _CNLazyArrayOperatorSkipLast_h
@import Foundation;

#include "_CNLazyArrayOperator.h"
#include "CNQueue.h"

@interface _CNLazyArrayOperatorSkipLast : _CNLazyArrayOperator {
  /* instance variables */
  CNQueue *_buffer;
  unsigned long long _limit;
  BOOL _haveFilledBuffer;
}

/* instance methods */
- (id)initWithInput:(id)input limit:(unsigned long long)limit;
- (id)nextObject;
- (BOOL)fillBuffer;
@end

#endif /* _CNLazyArrayOperatorSkipLast_h */