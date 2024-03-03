//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAClientUserActivity_h
#define SAClientUserActivity_h
@import Foundation;

#include "SAUserActivity.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *requiredUserInfoKeys;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSURL *webpageURL;

/* class methods */
+ (id)clientUserActivity;
+ (id)clientUserActivityWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAClientUserActivity_h */