//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EDThreadScopeInfo_h
#define _EDThreadScopeInfo_h
@import Foundation;

@class NSDate;

@interface _EDThreadScopeInfo : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) NSDate *lastViewedDate;

/* instance methods */
- (id)initWithDatabaseID:(long long)id needsUpdate:(BOOL)update lastViewedDate:(id)date;
- (id)description;
@end

#endif /* _EDThreadScopeInfo_h */