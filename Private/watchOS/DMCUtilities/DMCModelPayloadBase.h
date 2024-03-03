//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCModelPayloadBase_h
#define DMCModelPayloadBase_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface DMCModelPayloadBase : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSSet *unknownPayloadKeys;

/* class methods */
+ (id)load:(id)load serializationType:(short)type error:(id *)error;
+ (id)loadData:(id)data serializationType:(short)type error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)mergeUnknownKeysFrom:(id)from parentKey:(id)key;
- (id)createNestedObjectWithClass:(Class)class serializationType:(short)type parentKey:(id)key payload:(id)payload error:(id *)error;
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)serializeAsDataWithType:(short)type error:(id *)error;
- (BOOL)_loadObjectOfClass:(Class)class fromDictionary:(id)dictionary usingKey:(id)key isRequired:(BOOL)required defaultValue:(id)value payloadValue:(id *)value error:(id *)error;
- (BOOL)loadStringFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (BOOL)loadIntegerFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (BOOL)loadFloatFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (BOOL)loadBooleanFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (BOOL)loadDateFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type error:(id *)error;
- (BOOL)loadDataFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type error:(id *)error;
- (BOOL)loadArrayFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path validator:(id /* block */)validator isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (BOOL)loadArrayFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path classType:(Class)type nested:(BOOL)nested isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type error:(id *)error;
- (BOOL)loadDictionaryFromDictionary:(id)dictionary usingKey:(id)key forKeyPath:(id)path classType:(Class)type isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type error:(id *)error;
- (BOOL)getModelObjectFromDictionary:(id)dictionary usingKey:(id)key classType:(Class)type isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type payloadValue:(id *)value error:(id *)error;
- (void)_serializeItemIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required isDefaultValue:(BOOL)value;
- (void)serializeStringIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeIntegerIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeFloatIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeBooleanIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeDateIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type;
- (void)serializeDataIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value isRequired:(BOOL)required defaultValue:(id)value serializationType:(short)type;
- (void)serializeArrayIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value itemSerializer:(id /* block */)serializer isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeDictionaryIntoDictionary:(id)dictionary usingKey:(id)key value:(id)value dictSerializer:(id /* block */)serializer isRequired:(BOOL)required defaultValue:(id)value;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DMCModelPayloadBase_h */