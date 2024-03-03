//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIPBUIPluginListResponse_h
#define CSLUIPBUIPluginListResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *usages;

/* instance methods */
- (void)clearNames;
- (void)addName:(id)name;
- (unsigned long long)namesCount;
- (id)nameAtIndex:(unsigned long long)index;
- (void)clearUsages;
- (void)addUsage:(id)usage;
- (unsigned long long)usagesCount;
- (id)usageAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CSLUIPBUIPluginListResponse_h */