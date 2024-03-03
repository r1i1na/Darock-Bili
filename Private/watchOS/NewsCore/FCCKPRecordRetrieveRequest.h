//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPRecordRetrieveRequest_h
#define FCCKPRecordRetrieveRequest_h
@import Foundation;

#include "PBRequest.h"
#include "FCCKPRecordIdentifier.h"
#include "FCCKPRequestedFields.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FCCKPRecordRetrieveRequest : PBRequest<NSCopying> {
  /* instance variables */
  NSString *_clientVersionETag;
  FCCKPRecordIdentifier *_recordIdentifier;
  FCCKPRequestedFields *_requestedFields;
  NSString *_versionETag;
}

/* class methods */
+ (id)options;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* FCCKPRecordRetrieveRequest_h */