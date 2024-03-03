//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TASuspiciousDevice_h
#define TASuspiciousDevice_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAAccessoryInformation.h"
#include "TAMetricsDetection.h"
#include "TASPAdvertisement.h"

@class NSArray, NSData, NSDate, NSDictionary;

@interface TASuspiciousDevice : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSDictionary *detectionSummary;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, copy, nonatomic) NSArray *locationHistory;
@property (readonly, nonatomic) TAMetricsDetection *detectionMetrics;
@property (readonly, nonatomic) unsigned long long detectionType;
@property (readonly, nonatomic) unsigned long long immediacyType;
@property (copy, nonatomic) TAAccessoryInformation *accessoryInfo;
@property (readonly, nonatomic) unsigned long long forceSurfaceReason;

/* class methods */
+ (id)convertTANotificationImmediacyTypeToString:(unsigned long long)string;
+ (id)convertTAForceSurfaceReasonToString:(unsigned long long)string;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLatestAdv:(id)adv detectionSummary:(id)summary date:(id)date locHistory:(id)history detectionMetrics:(id)metrics detectionType:(unsigned long long)type immediacyType:(unsigned long long)type accessoryInfo:(id)info forceSurfaceReason:(unsigned long long)reason;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)descriptionDictionary;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)updateForceReasonWith:(unsigned long long)with;
@end

#endif /* TASuspiciousDevice_h */