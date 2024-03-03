//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemChildPlace_h
#define GEOMapItemChildPlace_h
@import Foundation;

#include "GEOMapItemIdentifier.h"
#include "GEOPDChildPlace.h"

@class NSString;

@interface GEOMapItemChildPlace : NSObject {
  /* instance variables */
  GEOPDChildPlace *_childPlace;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;

/* instance methods */
- (id)initWithChildPlace:(id)place;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GEOMapItemChildPlace_h */