//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef NSError_FBSSceneEvent_h
#define NSError_FBSSceneEvent_h
@import Foundation;

#include "FBSSceneMessage.h"
#include "FBSSceneClientSettingsDiff.h"
#include "FBSSceneSettingsDiff.h"
#include "FBSSceneTransitionContext.h"

@class NSSet;

@interface NSError (FBSSceneEvent)
/* class methods */
+ (id)sceneMessageErrorWithCode:(long long)code;
@end

#endif /* NSError_FBSSceneEvent_h */