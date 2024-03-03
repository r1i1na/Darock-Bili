//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewSetPlacementInvisibleAssistantBar_h
#define UIInputViewSetPlacementInvisibleAssistantBar_h
@import Foundation;

#include "UIInputViewSetPlacementInvisible.h"
#include "NSSecureCoding-Protocol.h"

@interface UIInputViewSetPlacementInvisibleAssistantBar : UIInputViewSetPlacementInvisible<NSSecureCoding>
/* class methods */
+ (id)placementWithPlacement:(id)placement;

/* instance methods */
- (id)applicatorInfoForOwner:(id)owner;
- (BOOL)isFloatingAssistantView;
- (BOOL)isCompactAssistantView;
@end

#endif /* UIInputViewSetPlacementInvisibleAssistantBar_h */