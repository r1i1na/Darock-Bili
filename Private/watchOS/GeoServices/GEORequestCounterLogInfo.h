//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORequestCounterLogInfo_h
#define GEORequestCounterLogInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface GEORequestCounterLogInfo : NSObject<NSSecureCoding> {
  /* instance variables */
  NSDictionary *_dict;
}

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } requestType;
@property (readonly, nonatomic) NSString *requestTypeString;
@property (readonly, nonatomic) unsigned char result;
@property (readonly, nonatomic) NSString *resultString;
@property (readonly, nonatomic) unsigned long long xmitBytes;
@property (readonly, nonatomic) unsigned long long recvBytes;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) unsigned long long usedInterfaceTypes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (id)counterLogInfoWithDictionary:(id)dictionary;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (void)_appendFormattedStringTo:(id)to;
- (void)_appendFormattedCSVStringTo:(id)to;
- (id)description;
@end

#endif /* GEORequestCounterLogInfo_h */