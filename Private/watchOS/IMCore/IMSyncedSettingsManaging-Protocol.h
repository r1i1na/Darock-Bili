//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSyncedSettingsManaging_Protocol_h
#define IMSyncedSettingsManaging_Protocol_h
@import Foundation;

@protocol IMSyncedSettingsManaging <NSObject>
/* instance methods */
- (id)settingValueForKey:(long long)key;
- (void)setSettingValue:(id)value forKey:(long long)key;
@optional
/* instance methods */
- (void)addObserver:(id)observer selector:(SEL)selector key:(long long)key;
- (void)removeObserver:(id)observer key:(long long)key;
@end

#endif /* IMSyncedSettingsManaging_Protocol_h */