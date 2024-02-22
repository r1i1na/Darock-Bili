//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SALocalSearchShowLocalSearchResult_h
#define SALocalSearchShowLocalSearchResult_h
@import Foundation;

#include "SADomainCommand.h"

@class NSData, NSDate, NSString;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSData *rawData;

/* class methods */
+ (id)showLocalSearchResult;
+ (id)showLocalSearchResultWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SALocalSearchShowLocalSearchResult_h */