//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITraitStorageList_h
#define _UITraitStorageList_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject<NSCoding>

@property (readonly, weak, nonatomic) id topLevelObject;
@property (readonly, nonatomic) NSArray *traitStorages;
@property (readonly, nonatomic) NSSet *descendants;

/* instance methods */
- (id)initWithTopLevelObject:(id)object traitStorages:(id)storages descendants:(id)descendants;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _UITraitStorageList_h */