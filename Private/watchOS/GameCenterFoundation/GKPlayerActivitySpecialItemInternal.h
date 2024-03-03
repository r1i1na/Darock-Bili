//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKPlayerActivitySpecialItemInternal_h
#define GKPlayerActivitySpecialItemInternal_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSDate, NSString;

@interface GKPlayerActivitySpecialItemInternal : GKInternalRepresentation

@property (nonatomic) long long activityType;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *alternateMessage;
@property (retain, nonatomic) NSString *sfSymbol;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSString *instrumentationKey;

/* class methods */
+ (id)secureCodedPropertyKeys;
+ (id)typeToConstantMap;
+ (id)constantToTypeMap;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
@end

#endif /* GKPlayerActivitySpecialItemInternal_h */