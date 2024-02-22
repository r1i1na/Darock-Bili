//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocalTemporalClusterStore_h
#define PPLocalTemporalClusterStore_h
@import Foundation;

#include "PPTemporalClusterStorage.h"

@interface PPLocalTemporalClusterStore : NSObject {
  /* instance variables */
  PPTemporalClusterStorage *_storage;
}

/* class methods */
+ (id)defaultStore;

/* instance methods */
- (id)initWithStorage:(id)storage;
- (id)init;
- (id)rankedTemporalClusterForStartDate:(id)date endDate:(id)date error:(id *)error;
@end

#endif /* PPLocalTemporalClusterStore_h */