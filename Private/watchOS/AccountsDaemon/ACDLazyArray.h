//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDLazyArray_h
#define ACDLazyArray_h
@import Foundation;

#include "NSArray.h"

@class NSArray;

@interface ACDLazyArray : NSArray {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializationLock;
  id /* block */ _initializationBlock;
  NSArray *_underlyingArray;
}

/* instance methods */
- (id)init;
- (id)initWithInitializer:(id /* block */)initializer;
- (id)initWithCoder:(id)coder;
- (id)initWithObjects:(const id *)objects count:(unsigned long long)count;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)index;
@end

#endif /* ACDLazyArray_h */