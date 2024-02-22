//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef NSValueTransformer_MTLInversionAdditions_h
#define NSValueTransformer_MTLInversionAdditions_h
@import Foundation;

@interface NSValueTransformer (MTLInversionAdditions)
/* class methods */
+ (id)mtl_URLValueTransformer;
+ (id)mtl_UUIDValueTransformer;
+ (id)mtl_booleanValueTransformer;
+ (id)mtl_arrayMappingTransformerWithTransformer:(id)transformer;
+ (id)mtl_validatingTransformerForClass:(Class)class;
+ (id)mtl_valueMappingTransformerWithDictionary:(id)dictionary defaultValue:(id)value reverseDefaultValue:(id)value;
+ (id)mtl_valueMappingTransformerWithDictionary:(id)dictionary;
+ (id)mtl_dateTransformerWithDateFormat:(id)format calendar:(id)calendar locale:(id)locale timeZone:(id)zone defaultDate:(id)date;
+ (id)mtl_dateTransformerWithDateFormat:(id)format locale:(id)locale;
+ (id)mtl_numberTransformerWithNumberStyle:(unsigned long long)style locale:(id)locale;
+ (id)mtl_transformerWithFormatter:(id)formatter forObjectClass:(Class)class;
+ (id)mtl_JSONDictionaryTransformerWithModelClass:(Class)class;
+ (id)mtl_JSONArrayTransformerWithModelClass:(Class)class;

/* instance methods */
- (id)mtl_invertedTransformer;
@end

#endif /* NSValueTransformer_MTLInversionAdditions_h */