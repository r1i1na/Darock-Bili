//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSRateLimiter_h
#define IDSRateLimiter_h
@import Foundation;

@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;

/* instance methods */
- (id)initWithLimit:(long long)limit timeLimit:(double)limit;
- (BOOL)underLimitForItem:(id)item;
- (void)noteItem:(id)item;
- (void)clearItem:(id)item;
- (void)clearAllItems;
- (double)timeToUnderLimit:(id)limit;
- (void)cleanupExpiredItems;
- (id)description;
- (id)_unlockedDescription;
@end

#endif /* IDSRateLimiter_h */