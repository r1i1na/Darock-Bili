//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISActivityContinuationAction_h
#define UISActivityContinuationAction_h
@import Foundation;

#include "BSAction.h"

@class NSData, NSDate, NSString;

@interface UISActivityContinuationAction : BSAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *activityTypeIdentifier;
@property (readonly, nonatomic) NSString *originatingDeviceType;
@property (readonly, nonatomic) NSString *originatingDeviceName;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) NSData *userActivityData;

/* class methods */
+ (void)buildWithUserActivity:(id)activity completion:(id /* block */)completion;

/* instance methods */
- (id)initWithSettings:(id)settings;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (BOOL)isKindOfClass:(Class)class;
@end

#endif /* UISActivityContinuationAction_h */