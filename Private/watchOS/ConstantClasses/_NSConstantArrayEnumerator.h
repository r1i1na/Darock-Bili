//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _NSConstantArrayEnumerator_h
#define _NSConstantArrayEnumerator_h
@import Foundation;

#include "NSEnumerator.h"

@interface _NSConstantArrayEnumerator : NSEnumerator {
  /* instance variables */
  id * objects;
  unsigned long long capacity;
  unsigned long long index;
}

/* instance methods */
- (id)initWithArray:(id *)array capacity:(unsigned long long)capacity;
- (id)allObjects;
- (id)nextObject;
@end

#endif /* _NSConstantArrayEnumerator_h */