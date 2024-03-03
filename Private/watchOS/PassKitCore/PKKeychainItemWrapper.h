//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKKeychainItemWrapper_h
#define PKKeychainItemWrapper_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject {
  /* instance variables */
  BOOL _invisible;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long accessibility;
@property (retain, nonatomic) NSMutableDictionary *keychainItemData;
@property (retain, nonatomic) NSMutableDictionary *genericPasswordQuery;
@property (copy, nonatomic) NSString *label;

/* instance methods */
- (id)initWithIdentifier:(id)identifier accessGroup:(id)group serviceName:(id)name;
- (id)initWithIdentifier:(id)identifier accessGroup:(id)group serviceName:(id)name type:(unsigned long long)type invisible:(BOOL)invisible;
- (id)initWithIdentifier:(id)identifier accessGroup:(id)group serviceName:(id)name type:(unsigned long long)type invisible:(BOOL)invisible accessibility:(unsigned long long)accessibility;
- (void)setObject:(id)object forKey:(id)key;
- (id)objectForKey:(id)key;
- (void)resetKeychainItem;
- (void)resetLocalKeychainItem;
- (void)_resetKeychainItem:(BOOL)item;
- (id)dictionaryToSecItemFormat:(id)format;
- (id)secItemFormatToDictionary:(id)dictionary;
- (void)writeToKeychain;
- (void)applySynchronizableValueToDictionary:(id)dictionary;
- (void)applyAccessibilityValueToDictionary:(id)dictionary;
@end

#endif /* PKKeychainItemWrapper_h */