//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef _OSLogChunkStore_h
#define _OSLogChunkStore_h
@import Foundation;

@interface _OSLogChunkStore : NSObject {
  /* instance variables */
  const void * _ptr;
  unsigned long long _sz;
}

/* instance methods */
- (id)initWithBytes:(const void *)bytes size:(unsigned long long)size;
- (void)enumerateChunksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range usingBlock:(id /* block */)block;
- (void)enumerateChunksUsingBlock:(id /* block */)block;
@end

#endif /* _OSLogChunkStore_h */