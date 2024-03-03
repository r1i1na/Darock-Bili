//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAnnotatedItemListFilter_h
#define GEOPDAnnotatedItemListFilter_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPDAnnotatedItemListFilter : PBCodable<NSCopying> {
  /* instance variables */
  PBUnknownFields *_unknownFields;
  struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned int x0 :1; unsigned int x1 :1; } x2; } * _photoSizeFilters;
  unsigned long long _photoSizeFiltersCount;
  unsigned long long _photoSizeFiltersSpace;
}

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDAnnotatedItemListFilter_h */