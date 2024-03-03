//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 308.64.1.0.0
//
#ifndef DRConfig_h
#define DRConfig_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface DRConfig : NSObject<NSSecureCoding>

@property (readonly, nonatomic) BOOL payloadIsJSON;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *configDescription;
@property (readonly, nonatomic) NSUUID *configUUID;
@property (readonly, nonatomic) NSDate *receivedDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSDictionary *payloadDictionaryRepresentation;
@property (readonly, nonatomic) BOOL skippedHysteresis;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithBuild:(id)build teamID:(id)id configDescription:(id)description configUUID:(id)uuid receivedDate:(id)date startDate:(id)date endDate:(id)date payload:(id)payload payloadIsJSON:(BOOL)json skipHysteresis:(BOOL)hysteresis;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToConfig:(id)config;
- (id)initWithJSONDict:(id)jsondict receivedDate:(id)date;
- (id)jsonDictRepresentation;
@end

#endif /* DRConfig_h */