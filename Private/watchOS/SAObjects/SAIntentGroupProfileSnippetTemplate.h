//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupProfileSnippetTemplate_h
#define SAIntentGroupProfileSnippetTemplate_h
@import Foundation;

#include "SAIntentGroupSnippetTemplate.h"

@class NSArray, NSString;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *imageStyle;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *labelComponents;

/* class methods */
+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAIntentGroupProfileSnippetTemplate_h */