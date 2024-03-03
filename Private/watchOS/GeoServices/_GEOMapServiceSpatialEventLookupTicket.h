//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOMapServiceSpatialEventLookupTicket_h
#define _GEOMapServiceSpatialEventLookupTicket_h
@import Foundation;

#include "_GEOPlaceRequestTicket.h"
#include "GEOMapServiceSpatialEventLookupTicket-Protocol.h"
#include "GEOMapServiceTraits.h"

@class NSArray, NSString;

@interface _GEOMapServiceSpatialEventLookupTicket : _GEOPlaceRequestTicket<GEOMapServiceSpatialEventLookupTicket>

@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)maxParametersCount;

/* instance methods */
- (id)initWithRequest:(id)request parameters:(id)parameters traits:(id)traits;
- (void)submitWithHandler:(id /* block */)handler queue:(id)queue;
- (void)submitWithHandler:(id /* block */)handler auditToken:(id)token queue:(id)queue;
- (void)handleResponse:(id)response completion:(id /* block */)completion queue:(id)queue;
- (void)createSpatialEventLookupResultForLookupResults:(id)results usingPlaces:(id)places completion:(id /* block */)completion queue:(id)queue;
- (id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)places;
- (id)spatialEventLookupResultsFromResponse:(id)response;
- (id)eventsForEventLookupResponses:(id)responses usingIdentifierToEventMap:(id)map;
- (void)callCompletion:(id /* block */)completion onQueue:(id)queue withResult:(id)result error:(id)error;
@end

#endif /* _GEOMapServiceSpatialEventLookupTicket_h */