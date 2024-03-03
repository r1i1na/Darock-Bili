//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef UIPointFIFO_h
#define UIPointFIFO_h
@import Foundation;

#include "UIPointFIFO.h"

@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

/* instance methods */
- (id)initWithFIFO:(id)fifo;
- (void)dealloc;
- (void)emitPoint:;
- (void)addPoint:;
- (void)flush;
- (void)clear;
@end

#endif /* UIPointFIFO_h */