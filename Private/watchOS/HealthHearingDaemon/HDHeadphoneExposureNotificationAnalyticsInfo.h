//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeadphoneExposureNotificationAnalyticsInfo_h
#define HDHeadphoneExposureNotificationAnalyticsInfo_h
@import Foundation;

@class NSDate;

@interface HDHeadphoneExposureNotificationAnalyticsInfo : NSObject {
  /* instance variables */
  NSDate *_lastLockDate;
  NSDate *_lastNotificationDate;
}

/* instance methods */
- (id)initWithLastLockDate:(id)date lastNotificationDate:(id)date;
- (id)boundedIntegerForMinutesSinceLastUnlockWithNowDate:(id)date;
- (id)boundedIntegerForTimeSinceLastNotificationWithNowDate:(id)date;
@end

#endif /* HDHeadphoneExposureNotificationAnalyticsInfo_h */