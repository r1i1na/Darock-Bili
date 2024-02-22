//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSearchCategoryIntent_h
#define GEOPDSearchCategoryIntent_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDSearchTokenSet.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEOPDSearchCategoryIntent : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _keywordMuids;
  NSMutableArray *_canonicalNames;
  NSMutableArray *_categoryIds;
  NSMutableArray *_categoryMappings;
  NSMutableArray *_expandedCategoryIds;
  NSMutableArray *_featureMaps;
  NSMutableArray *_keywordMappings;
  NSMutableArray *_legacyCategoryIds;
  NSMutableArray *_modernToLegacyIdMappings;
  NSMutableArray *_negativeCategorys;
  GEOPDSearchTokenSet *_tokenSet;
  NSString *_trigger;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_keywordMuids; unsigned int x :1 read_canonicalNames; unsigned int x :1 read_categoryIds; unsigned int x :1 read_categoryMappings; unsigned int x :1 read_expandedCategoryIds; unsigned int x :1 read_featureMaps; unsigned int x :1 read_keywordMappings; unsigned int x :1 read_legacyCategoryIds; unsigned int x :1 read_modernToLegacyIdMappings; unsigned int x :1 read_negativeCategorys; unsigned int x :1 read_tokenSet; unsigned int x :1 read_trigger; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
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

#endif /* GEOPDSearchCategoryIntent_h */