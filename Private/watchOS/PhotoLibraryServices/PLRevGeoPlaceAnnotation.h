//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLRevGeoPlaceAnnotation_h
#define PLRevGeoPlaceAnnotation_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject<NSCopying>

@property (nonatomic) int placeLevel;
@property (retain, nonatomic) NSString *placeName;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PLRevGeoPlaceAnnotation_h */