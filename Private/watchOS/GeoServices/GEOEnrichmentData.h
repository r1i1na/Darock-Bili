//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOEnrichmentData_h
#define GEOEnrichmentData_h
@import Foundation;

#include "GEOPDEnrichmentData.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData;

@interface GEOEnrichmentData : NSObject<NSCopying> {
  /* instance variables */
  GEOPDEnrichmentData *_enrichmentData;
}

@property (readonly, nonatomic) NSArray *enrichmentEntities;
@property (readonly, nonatomic) NSData *placecardEnrichmentMetadata;

/* instance methods */
- (id)initWithEnrichmentData:(id)data;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GEOEnrichmentData_h */