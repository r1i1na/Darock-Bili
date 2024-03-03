//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSearchSectionGuide_h
#define GEOSearchSectionGuide_h
@import Foundation;

@class NSArray;

@interface GEOSearchSectionGuide : NSObject

@property (readonly, nonatomic) NSArray *placeCollections;

/* instance methods */
- (id)init;
- (id)initWithPlaceCollections:(id)collections;
- (id)initWithSearchSectionGuide:(id)guide mapsResults:(id)results;
@end

#endif /* GEOSearchSectionGuide_h */