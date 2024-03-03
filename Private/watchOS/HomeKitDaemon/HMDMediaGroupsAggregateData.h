//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaGroupsAggregateData_h
#define HMDMediaGroupsAggregateData_h
@import Foundation;

#include "HMEProtoBufferCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray;

@interface HMDMediaGroupsAggregateData : NSObject<HMEProtoBufferCoding, NSCopying, NSMutableCopying>

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;

/* instance methods */
- (id)initWithDestinations:(id)destinations destinationControllersData:(id)data groups:(id)groups;
- (id)initWithDestinations:(id)destinations destinationControllersData:(id)data;
- (id)groupWithIdentifier:(id)identifier;
- (id)initWithProtoBufferData:(id)data;
- (id)decodeDestinationsWithEncodedDestinations:(id)destinations;
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)controllers;
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)groups;
- (id)encodeToProtoBufferData;
- (id)encodedDestinationEvents;
- (id)encodedDestinationControllerEvents;
- (id)encodedMediaGroupEvents;
- (id)sentinelIdentifier;
- (id)sentinelDestinationControllerData;
- (id)sentinelDestination;
- (id)sentinelGroup;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMediaGroupsAggregateData_h */