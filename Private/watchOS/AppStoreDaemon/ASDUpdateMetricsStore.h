//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDUpdateMetricsStore_h
#define ASDUpdateMetricsStore_h
@import Foundation;

@class NSArray, NSDate, NSLock;

@interface ASDUpdateMetricsStore : NSObject {
  /* instance variables */
  NSLock *_lock;
}

@property (readonly, nonatomic) double averagePollTime;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, nonatomic) NSDate *lastAutoPollDate;

/* instance methods */
- (id)init;
- (void)addPoll:(id)poll;
- (void)synchronize;
@end

#endif /* ASDUpdateMetricsStore_h */