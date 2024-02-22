//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMAdParameters_h
#define EDAMAdParameters_h
@import Foundation;

#include "FATObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface EDAMAdParameters : FATObject

@property (retain, nonatomic) NSString *clientLanguage;
@property (retain, nonatomic) NSArray *impressions;
@property (retain, nonatomic) NSNumber *supportHtml;
@property (retain, nonatomic) NSDictionary *clientProperties;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMAdParameters_h */