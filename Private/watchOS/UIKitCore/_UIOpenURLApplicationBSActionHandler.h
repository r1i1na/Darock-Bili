//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIOpenURLApplicationBSActionHandler_h
#define _UIOpenURLApplicationBSActionHandler_h
@import Foundation;

#include "_UIApplicationBSActionHandler-Protocol.h"

@class NSString;

@interface _UIOpenURLApplicationBSActionHandler : NSObject<_UIApplicationBSActionHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_respondToApplicationActions:(id)actions fromTransitionContext:(id)context;
@end

#endif /* _UIOpenURLApplicationBSActionHandler_h */