//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASDemoData_h
#define ASDemoData_h
@import Foundation;

@interface ASDemoData : NSObject
/* class methods */
+ (id)_activitySnapshotForFriendOneWithFriendUUID:(id)uuid sourceUUID:(id)uuid;
+ (id)_activitySnapshotForFriendTwoWithFriendUUID:(id)uuid sourceUUID:(id)uuid;
+ (id)_activitySnapshotForFriendThreeWithFriendUUID:(id)uuid sourceUUID:(id)uuid;
+ (id)_activitySnapshotForFitnessJrFriendWithFriendUUID:(id)uuid sourceUUID:(id)uuid;
+ (id)_activitySnapshotForFriendWithIndex:(long long)index friendUUID:(id)uuid sourceUUID:(id)uuid;
+ (id)_achievementsForFriendTwoWithFriendUUID:(id)uuid;
+ (id)_achievementsForFriendWithIndex:(long long)index friendUUID:(id)uuid;
+ (id)_workoutsForFriendOneWithFriendUUID:(id)uuid;
+ (id)_workoutsForFriendTwoWithFriendUUID:(id)uuid;
+ (id)_workoutsForFitnessJrFriendTwoWithFriendUUID:(id)uuid;
+ (id)_workoutsForFriendWithIndex:(long long)index friendUUID:(id)uuid;
+ (id)createMeWithModel:(id)model;
+ (id)fakeAppFriendListForMarketing;
+ (id)fakeFirstGlanceFriendListForMarketing;
+ (id)_fakeFriendListWithDemoFileName:(id)name;
+ (id)_appleWatchSourceRevision;
+ (id)_fakeAchievementDuringDayStartingAtDate:(id)date personUUID:(id)uuid;
+ (id)_fakeWorkoutDuringDayStartingAtDate:(id)date personUUID:(id)uuid;
+ (id)_fakeWorkoutsForIndex:(long long)index personUUID:(id)uuid;
+ (id)_fakeWorkoutsForLastWeekWithPersonUUID:(id)uuid dailySnapshotProbability:(double)probability;
@end

#endif /* ASDemoData_h */