//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISceneDisplayLinkTargetAndAction_h
#define _UISceneDisplayLinkTargetAndAction_h
@import Foundation;

@interface _UISceneDisplayLinkTargetAndAction : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
@end

#endif /* _UISceneDisplayLinkTargetAndAction_h */