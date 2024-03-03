//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPAppleMapsMetadataProviderSpecialization_h
#define LPAppleMapsMetadataProviderSpecialization_h
@import Foundation;

#include "LPMetadataProviderSpecialization.h"
#include "LPMapCollectionMetadata.h"
#include "LPMapCollectionPublisherMetadata.h"
#include "LPMapMetadata.h"

@class CLGeocoder, MKPlaceCuratedCollectionRefiner, MKPlacePublisherRefiner, _MKURLParser;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
  /* instance variables */
  BOOL _cancelled;
  CLGeocoder *_geocoder;
  _MKURLParser *_parser;
  LPMapMetadata *_mapMetadata;
  LPMapCollectionMetadata *_collectionMetadata;
  LPMapCollectionPublisherMetadata *_publisherMetadata;
  MKPlaceCuratedCollectionRefiner *_curatedCollectionRefiner;
  MKPlacePublisherRefiner *_publisherRefiner;
}

/* class methods */
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)context;

/* instance methods */
- (void)resolveMapRegionWithCompletionHandler:(id /* block */)handler;
- (id)geocoder;
- (BOOL)isSearch;
- (void)populateImageWithMapSnapshot:(id)snapshot;
- (void)start;
- (void)continueWithLookAroundSnapshotWithOptions:(id)options;
- (void)continueWithSnapshotOfMapRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })region;
- (void)continueWithSnapshotOfMapItems:(id)items inRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })region;
- (void)cancel;
- (void)fail;
- (void)completeWithSearchQuery:(id)query;
- (void)completeWithMapItem:(id)item;
- (void)completeWithPlacemark:(id)placemark;
- (void)completeWithDirections;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithPublisher;
- (void)complete;
@end

#endif /* LPAppleMapsMetadataProviderSpecialization_h */