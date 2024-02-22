//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLSimBufferStoragePool_h
#define MTLSimBufferStoragePool_h
@import Foundation;

#include "MTLDevice-Protocol.h"

@protocol OS_dispatch_semaphore;

@interface MTLSimBufferStoragePool : NSObject {
  /* instance variables */
  NSObject<MTLDevice> *device;
  struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry * x2; } * head;
  struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry * x2; } * tail;
  unsigned long long storageSize;
  NSObject<OS_dispatch_semaphore> *semaphore;
}

/* instance methods */
- (id)initWithEntrySize:(unsigned long long)size device:(id)device;
- (void)dealloc;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry * x2; } *)allocStorage;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry * x2; } *)getStorage;
- (void)returnStorage:(struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry * x2; } *)storage;
@end

#endif /* MTLSimBufferStoragePool_h */