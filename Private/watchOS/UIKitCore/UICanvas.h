//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICanvas_h
#define UICanvas_h
@import Foundation;

#include "UIWindowScene.h"

@class FBSScene;

@interface UICanvas : UIWindowScene

@property (readonly, @dynamic, nonatomic) FBSScene *scene;
@property (readonly, @dynamic, nonatomic) _UICanvasDefinition *_definition;
@property (readonly, @dynamic, nonatomic) long long state;
@property (readonly, @dynamic, nonatomic) BOOL keyCanvas;

@end

#endif /* UICanvas_h */