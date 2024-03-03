//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTypingIndicatorLayerProtocol_Protocol_h
#define IMTypingIndicatorLayerProtocol_Protocol_h
@import Foundation;

@protocol IMTypingIndicatorLayerProtocol <NSObject>

@property (nonatomic) BOOL hasDarkBackground;

/* instance methods */
- (void)startGrowAnimationWithCompletionBlock:(id /* block */)block;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)block;
- (void)startPulseAnimation;
- (void)stopPulseAnimation;
- (void)stopAnimation;
- (void)startGrowAnimation;
@optional
/* instance methods */
- (void)setTraitCollection:(id)collection;
@end

#endif /* IMTypingIndicatorLayerProtocol_Protocol_h */