//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSystemState_h
#define RBSystemState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface RBSystemState : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL preventLaunch;
@property (readonly, nonatomic) NSSet *preventIdleSleepIdentifiers;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSSet *preventLaunchPredicates;
@property (readonly, copy, nonatomic) NSSet *allowLaunchPredicates;
@property (readonly, copy, nonatomic) NSDictionary *conditions;
@property (readonly, copy, nonatomic) NSDictionary *prewarmConfiguration;

/* instance methods */
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* RBSystemState_h */