//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUSimpleSerializer_h
#define VMUSimpleSerializer_h
@import Foundation;

#include "VMUAbstractSerializer.h"

@interface VMUSimpleSerializer : VMUAbstractSerializer {
  /* instance variables */
  void * _map;
  unsigned int _internCursor;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)serialize32:(unsigned int)serialize32;
- (void)serialize64:(unsigned long long)serialize64;
- (unsigned int)serializeString:(id)string;
- (unsigned int)serializeNullTerminatedBytes:(const char *)bytes;
- (void)_serializeValues:(unsigned int *)values count:(unsigned int)count;
- (id)copyContiguousData;
@end

#endif /* VMUSimpleSerializer_h */