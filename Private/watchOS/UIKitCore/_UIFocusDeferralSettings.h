//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusDeferralSettings_h
#define _UIFocusDeferralSettings_h
@import Foundation;

#include "PTSettings.h"

@interface _UIFocusDeferralSettings : PTSettings

@property (nonatomic) double userEngagementTimeoutInSeconds;

/* class methods */
+ (id)settingsControllerModule;

/* instance methods */
- (void)setDefaultValues;
@end

#endif /* _UIFocusDeferralSettings_h */