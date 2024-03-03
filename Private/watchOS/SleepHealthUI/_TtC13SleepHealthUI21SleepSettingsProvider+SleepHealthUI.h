//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _TtC13SleepHealthUI21SleepSettingsProvider_SleepHealthUI_h
#define _TtC13SleepHealthUI21SleepSettingsProvider_SleepHealthUI_h
@import Foundation;

@interface SleepHealthUI.SleepSettingsProvider (SleepHealthUI) <HKSPSleepStorePrivateObserver>
/* instance methods */
- (void)sleepStore:(id)store sleepSettingsDidChange:(id)change;
- (void)sleepStore:(id)store sleepFocusConfigurationDidUpdate:(id)update;
@end

#endif /* _TtC13SleepHealthUI21SleepSettingsProvider_SleepHealthUI_h */