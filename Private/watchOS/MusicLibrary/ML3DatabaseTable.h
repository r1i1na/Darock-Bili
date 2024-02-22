//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3DatabaseTable_h
#define ML3DatabaseTable_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSString;

@interface ML3DatabaseTable : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSArray *foreignKeyConstraints;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)columnDefinitionsSQL;
- (id)createTableSQLWithExistenceClause:(BOOL)clause;
- (id)_copyWithZone:(struct _NSZone *)zone concreteClass:(Class)class;
@end

#endif /* ML3DatabaseTable_h */