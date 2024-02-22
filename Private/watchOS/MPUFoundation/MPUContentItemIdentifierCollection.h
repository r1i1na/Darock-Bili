//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef MPUContentItemIdentifierCollection_h
#define MPUContentItemIdentifierCollection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject<NSCopying, NSMutableCopying, NSSecureCoding> {
  /* instance variables */
  NSMapTable *_identifierTypeToIdentifier;
}

@property (readonly, nonatomic) unsigned long long identifierCount;
@property (readonly, nonatomic) unsigned long long itemType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithItemType:(unsigned long long)type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)block;
- (id)identifierForIdentifierType:(unsigned long long)type;
- (id)_copyWithZone:(struct _NSZone *)zone class:(Class)class;
- (void)_setIdentifier:(id)identifier forIdentifierType:(unsigned long long)type;
@end

#endif /* MPUContentItemIdentifierCollection_h */