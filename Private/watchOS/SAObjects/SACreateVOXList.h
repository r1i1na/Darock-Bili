//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACreateVOXList_h
#define SACreateVOXList_h
@import Foundation;

#include "SABaseCommand.h"
#include "SAServerBoundCommand-Protocol.h"

@class NSArray, NSString;

@interface SACreateVOXList : SABaseCommand<SAServerBoundCommand>

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSArray *introductions;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long pageSize;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createVOXList;
+ (id)createVOXListWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SACreateVOXList_h */