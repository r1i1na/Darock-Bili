//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIProgressIndicator_h
#define UIProgressIndicator_h
@import Foundation;

#include "UIActivityIndicatorView.h"

@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

/* class methods */
+ (struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)setStyle:(int)style;
- (void)setAnimating:(BOOL)animating;
- (void)startAnimation;
- (void)stopAnimation;
@end

#endif /* UIProgressIndicator_h */