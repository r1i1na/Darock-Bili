//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRCardioFitnessBridgeSettings_h
#define HKHRCardioFitnessBridgeSettings_h
@import Foundation;

#include "HKHRCardioFitnessFooter.h"

@interface HKHRCardioFitnessBridgeSettings : NSObject

@property (nonatomic) BOOL settingVisible;
@property (nonatomic) BOOL settingEnabled;
@property (nonatomic) BOOL showOnboarding;
@property (retain, nonatomic) HKHRCardioFitnessFooter *footer;

/* class methods */
+ (id)hiddenSettings;

/* instance methods */
- (id)initWithSettingVisible:(BOOL)visible settingEnabled:(BOOL)enabled showOnboarding:(BOOL)onboarding footer:(id)footer;
@end

#endif /* HKHRCardioFitnessBridgeSettings_h */