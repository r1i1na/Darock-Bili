//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAstronomyTimelineEntryModel_h
#define NTKAstronomyTimelineEntryModel_h
@import Foundation;

#include "NTKTimelineEntryModel.h"

@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel

@property (readonly, nonatomic) unsigned long long vista;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) CLLocation *anyLocation;

/* instance methods */
- (id)initWithVista:(unsigned long long)vista entryDate:(id)date currentDate:(id)date currentLocation:(id)location anyLocation:(id)location;
- (id)templateForComplicationFamily:(long long)family;
- (id)_graphicRectangular;
@end

#endif /* NTKAstronomyTimelineEntryModel_h */