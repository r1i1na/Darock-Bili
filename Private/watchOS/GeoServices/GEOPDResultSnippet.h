//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDResultSnippet_h
#define GEOPDResultSnippet_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDPriceDescription.h"
#include "GEOPDRating.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDResultSnippet : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSString *_category;
  NSMutableArray *_childItems;
  NSMutableArray *_childPlaces;
  NSString *_locationString;
  NSString *_name;
  GEOPDPriceDescription *_priceDescription;
  GEOPDRating *_priceRange;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _distanceDisplayThreshold;
  struct { unsigned int x :1 has_distanceDisplayThreshold; unsigned int x :1 read_unknownFields; unsigned int x :1 read_category; unsigned int x :1 read_childItems; unsigned int x :1 read_childPlaces; unsigned int x :1 read_locationString; unsigned int x :1 read_name; unsigned int x :1 read_priceDescription; unsigned int x :1 read_priceRange; unsigned int x :1 wrote_anyField; } _flags;
}

/* class methods */
+ (id)resultSnippetForPlaceData:(id)data;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDResultSnippet_h */