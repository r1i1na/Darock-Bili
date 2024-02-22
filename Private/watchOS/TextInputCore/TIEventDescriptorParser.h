//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIEventDescriptorParser_h
#define TIEventDescriptorParser_h
@import Foundation;

#include "TIDescriptorParser.h"

@interface TIEventDescriptorParser : TIDescriptorParser
/* instance methods */
- (id)init;
- (void)parseEventDescriptors:(id)descriptors andEventSpecs:(id)specs fromConfig:(id)config errors:(id)errors;
- (void)parseEventDescriptor:(id *)descriptor andEventSpec:(id *)spec withName:(id)name fromConfig:(id)config errors:(id)errors;
- (void)parseFieldDescriptor:(id *)descriptor andFieldSpec:(id *)spec withName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseStringFieldSpecWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseIntegerFieldSpecWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseFloatFieldSpecWithName:(id)name fromConfig:(id)config errors:(id)errors;
- (id)parseBooleanFieldSpecWithName:(id)name fromConfig:(id)config errors:(id)errors;
@end

#endif /* TIEventDescriptorParser_h */