//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSTouchAuthenticationSpecification_h
#define BKSTouchAuthenticationSpecification_h
@import Foundation;

#include "BSDescriptionStreamable-Protocol.h"
#include "BSProtobufSerializable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface BKSTouchAuthenticationSpecification : NSObject<NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable> {
  /* instance variables */
  unsigned short _backgroundStatisticsTopEdgeInset;
  unsigned short _backgroundStatisticsLeftEdgeInset;
  unsigned short _backgroundStatisticsBottomEdgeInset;
  unsigned short _backgroundStatisticsRightEdgeInset;
}

@property (readonly, copy, nonatomic) NSSet *displays;
@property (readonly, nonatomic) unsigned int slotID;
@property (readonly, nonatomic) unsigned long long authenticationMessageContext;
@property (readonly, nonatomic) unsigned int secureName;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } backgroundStatisticsRegion;
@property (readonly, nonatomic) float backgroundStatisticsForeground;
@property (readonly, nonatomic) float backgroundStatisticsPassingContrast;
@property (readonly, nonatomic) float backgroundStatisticsFailingContrast;
@property (readonly, nonatomic) unsigned long long hitTestInformationMask;
@property (readonly, nonatomic) long long initialSampleEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)buildSpecification:(id /* block */)specification;
+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BKSTouchAuthenticationSpecification_h */