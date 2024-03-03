//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCWeeklyGoalStore_h
#define FCCWeeklyGoalStore_h
@import Foundation;

@class NSUserDefaults;

@interface FCCWeeklyGoalStore : NSObject {
  /* instance variables */
  NSUserDefaults *_userDefaults;
}

/* instance methods */
- (id)init;
- (id)currentDisplayContext;
- (void)updateDisplayContext:(id)context;
- (void)clearContext;
@end

#endif /* FCCWeeklyGoalStore_h */