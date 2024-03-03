//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIUserConfirmationAction_h
#define WNUIUserConfirmationAction_h
@import Foundation;

#include "BSAction.h"
#include "BSSettingDescriptionProvider-Protocol.h"
#include "WNUIUserConfirmationEvent.h"

@class NSString;

@interface WNUIUserConfirmationAction : BSAction<BSSettingDescriptionProvider>

@property (readonly, nonatomic) WNUIUserConfirmationEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEvent:(id)event;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
@end

#endif /* WNUIUserConfirmationAction_h */