//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusBase_h
#define RMModelStatusBase_h
@import Foundation;

#include "RMModelPayloadBase.h"

@interface RMModelStatusBase : RMModelPayloadBase
/* class methods */
+ (id)statusItemType;
+ (BOOL)isArrayValue;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)serializePayloadWithType:(short)type;
@end

#endif /* RMModelStatusBase_h */