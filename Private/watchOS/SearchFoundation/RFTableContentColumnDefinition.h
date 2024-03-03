//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef RFTableContentColumnDefinition_h
#define RFTableContentColumnDefinition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RFTableContentColumnDefinition-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface RFTableContentColumnDefinition : NSObject<RFTableContentColumnDefinition, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 horizontal_alignment; } _has;
}

@property (copy, nonatomic) NSNumber *size_percent;
@property (nonatomic) int horizontal_alignment;
@property (copy, nonatomic) NSNumber *drop_order;
@property (copy, nonatomic) NSNumber *equal_size_column_group;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasHorizontal_alignment;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* RFTableContentColumnDefinition_h */