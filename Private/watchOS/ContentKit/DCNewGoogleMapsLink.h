//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef DCNewGoogleMapsLink_h
#define DCNewGoogleMapsLink_h
@import Foundation;

#include "DCMapsLink.h"

@class NSArray, NSString, NSURL;

@interface DCNewGoogleMapsLink : DCMapsLink {
  /* instance variables */
  BOOL _showsTransit;
  BOOL _showsBicycling;
  BOOL _showsStreetView;
  BOOL _showsTraffic;
  unsigned long long _mapType;
  unsigned long long _directionsMode;
  long long _zoomLevel;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *mapsURLComponents;
@property (retain, nonatomic) NSString *location;
@property (readonly, nonatomic) BOOL parsed;
@property (readonly, nonatomic) int linkType;

/* class methods */
+ (BOOL)isMapsURL:(id)url;
+ (id)mapsLinkWithURL:(id)url;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)searchQuery;
- (id)searchNearQuery;
- (id)searchLocation;
- (id)startAddress;
- (id)destinationAddress;
- (unsigned long long)directionsMode;
- (id)centerLocation;
- (long long)zoomLevel;
- (unsigned long long)mapType;
- (BOOL)showsTraffic;
- (BOOL)showsTransit;
- (BOOL)showsStreetView;
- (BOOL)showsBicycling;
- (id)streetViewLocation;
- (id)mapsURLComponentAtIndex:(long long)index;
- (void)parseLinkType;
- (id)latLonZoomString;
- (void)parseLatLonZoom;
- (void)parse;
- (id)dataString;
- (void)parseMapsData;
@end

#endif /* DCNewGoogleMapsLink_h */