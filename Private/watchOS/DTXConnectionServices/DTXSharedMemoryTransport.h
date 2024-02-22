//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXSharedMemoryTransport_h
#define DTXSharedMemoryTransport_h
@import Foundation;

#include "DTXTransport.h"

@protocol OS_dispatch_queue;

@interface DTXSharedMemoryTransport : DTXTransport {
  /* instance variables */
  struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; atomic  x7; int x8; atomic  x9; int x10; atomic  x11; unsigned int x12; atomic  x13; int x14; atomic  x15; int x16; atomic  x17; int x18; atomic  x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; char x24[0] } * _shm;
  NSObject<OS_dispatch_queue> *_listenQueue;
  BOOL _creator;
}

@property (readonly, nonatomic) struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; atomic  x7; int x8; atomic  x9; int x10; atomic  x11; unsigned int x12; atomic  x13; int x14; atomic  x15; int x16; atomic  x17; int x18; atomic  x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; char x24[0] } * sharedMemory;
@property (readonly, nonatomic) unsigned long long totalSharedMemorySize;
@property (nonatomic) int remotePid;

/* class methods */
+ (id)schemes;
+ (id)addressForPosixSharedMemoryWithName:(id)name;
+ (id)addressForMemory:(unsigned long long)memory inProcess:(int)process;

/* instance methods */
- (BOOL)_setupWithShm:(struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; atomic  x7; int x8; atomic  x9; int x10; atomic  x11; unsigned int x12; atomic  x13; int x14; atomic  x15; int x16; atomic  x17; int x18; atomic  x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; char x24[0] } *)shm asCreator:(BOOL)creator;
- (BOOL)_setupCreatingSharedMemory:(id)memory size:(int)size;
- (id)initWithLocalName:(id)name size:(int)size;
- (id)initWithRemoteAddress:(id)address;
- (id)initWithMemoryAddress:(unsigned long long)address inTask:(unsigned int)task;
- (id)initWithMappedMemory:(struct DTXSharedMemory { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; atomic  x7; int x8; atomic  x9; int x10; atomic  x11; unsigned int x12; atomic  x13; int x14; atomic  x15; int x16; atomic  x17; int x18; atomic  x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; char x24[0] } *)memory;
- (void)dealloc;
- (unsigned long long)transmit:(const void *)transmit ofLength:(unsigned long long)length;
- (void)disconnect;
- (id)localAddresses;
- (id)permittedBlockCompressionTypes;
@end

#endif /* DTXSharedMemoryTransport_h */