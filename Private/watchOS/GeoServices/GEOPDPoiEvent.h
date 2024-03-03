//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDPoiEvent_h
#define GEOPDPoiEvent_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocalizedString.h"
#include "GEOPDMapsIdentifier.h"
#include "GEOTimezone.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOPDPoiEvent : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_eventCategorys;
  NSMutableArray *_eventDateTimes;
  GEOPDMapsIdentifier *_eventId;
  GEOLocalizedString *_name;
  NSMutableArray *_performers;
  NSMutableArray *_poiIds;
  GEOTimezone *_timezone;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _expectedAttendance;
  struct { unsigned int x :1 has_expectedAttendance; unsigned int x :1 read_unknownFields; unsigned int x :1 read_eventCategorys; unsigned int x :1 read_eventDateTimes; unsigned int x :1 read_eventId; unsigned int x :1 read_name; unsigned int x :1 read_performers; unsigned int x :1 read_poiIds; unsigned int x :1 read_timezone; unsigned int x :1 wrote_anyField; } _flags;
}

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

#endif /* GEOPDPoiEvent_h */