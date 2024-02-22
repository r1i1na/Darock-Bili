//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIMindfulnessAppMigrator_h
#define FIMindfulnessAppMigrator_h
@import Foundation;

@class NSString;

@interface FIMindfulnessAppMigrator : NSObject {
  /* instance variables */
  NSString *_container;
}

/* instance methods */
- (id)init;
- (id)initWithContainer:(id)container;
- (void)migrateIfNeeded;
- (long long)_integerForKey:(id)key exists:(BOOL *)exists;
- (void)_setInteger:(long long)integer key:(id)key;
- (void)_removeObjectForKey:(id)key;
- (void)_synchronize;
@end

#endif /* FIMindfulnessAppMigrator_h */