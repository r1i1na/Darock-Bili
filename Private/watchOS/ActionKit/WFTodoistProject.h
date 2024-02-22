//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTodoistProject_h
#define WFTodoistProject_h
@import Foundation;

#include "MTLModel.h"
#include "MTLJSONSerializing-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, WFColor;

@interface WFTodoistProject : MTLModel<NSSecureCoding, MTLJSONSerializing>

@property (readonly, nonatomic) long long projectId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFColor *color;
@property (readonly, nonatomic) BOOL collapsed;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;
+ (id)collapsedJSONTransformer;

/* instance methods */
@end

#endif /* WFTodoistProject_h */