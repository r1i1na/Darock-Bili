//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLHLSSegment_h
#define BLHLSSegment_h
@import Foundation;

#include "BLHLSKey.h"
#include "BLHLSMap.h"

@class NSURL;

@interface BLHLSSegment : NSObject

@property (readonly, nonatomic) BLHLSMap *map;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BLHLSKey *key;

/* instance methods */
- (id)initWithURL:(id)url duration:(double)duration map:(id)map key:(id)key;
- (id)description;
@end

#endif /* BLHLSSegment_h */