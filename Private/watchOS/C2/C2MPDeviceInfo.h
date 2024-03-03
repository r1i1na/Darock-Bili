//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2MPDeviceInfo_h
#define C2MPDeviceInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface C2MPDeviceInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 isAppleInternal; } _has;
}

@property (readonly, nonatomic) BOOL hasProductName;
@property (retain, nonatomic) NSString *productName;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hasProductVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) BOOL hasProductBuild;
@property (retain, nonatomic) NSString *productBuild;
@property (nonatomic) BOOL hasIsAppleInternal;
@property (nonatomic) BOOL isAppleInternal;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) BOOL hasProcessVersion;
@property (retain, nonatomic) NSString *processVersion;
@property (readonly, nonatomic) BOOL hasProcessUuid;
@property (retain, nonatomic) NSString *processUuid;
@property (readonly, nonatomic) BOOL hasUserDefaultTestName;
@property (retain, nonatomic) NSString *userDefaultTestName;
@property (retain, nonatomic) NSMutableArray *internalTestConfigs;

/* class methods */
+ (Class)internalTestConfigType;

/* instance methods */
- (void)clearInternalTestConfigs;
- (void)addInternalTestConfig:(id)config;
- (unsigned long long)internalTestConfigsCount;
- (id)internalTestConfigAtIndex:(unsigned long long)index;
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

#endif /* C2MPDeviceInfo_h */