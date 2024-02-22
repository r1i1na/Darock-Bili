//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef UIColor_CUIKPlatforms_h
#define UIColor_CUIKPlatforms_h
@import Foundation;

@interface UIColor (CUIKPlatforms)
/* class methods */
+ (id)cuik_systemBackgroundColor;

/* instance methods */
- (void)cuik_getRed:(double *)red green:(double *)green blue:(double *)blue alpha:(double *)alpha;
@end

#endif /* UIColor_CUIKPlatforms_h */