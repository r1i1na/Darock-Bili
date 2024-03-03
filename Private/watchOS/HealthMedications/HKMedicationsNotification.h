//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationsNotification_h
#define HKMedicationsNotification_h
@import Foundation;

@class NSDictionary, NSString;

@interface HKMedicationsNotification : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *argument;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *scheduleItemIdentifier;

/* class methods */
+ (id)notificationBeforeFirstUnlockWithScheduleItemIdentifier:(id)identifier;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)identifier;
+ (id)notificationMissedWithScheduleItemIdentifier:(id)identifier;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)identifier isCritical:(BOOL)critical isFollowUp:(BOOL)up;
+ (id)allNotificationCategories;
+ (id)notificationCategoryForString:(id)string;

/* instance methods */
- (id)init;
@end

#endif /* HKMedicationsNotification_h */