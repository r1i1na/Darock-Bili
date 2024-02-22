//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef ARUICountdownAnimatorDelegate_Protocol_h
#define ARUICountdownAnimatorDelegate_Protocol_h
@import Foundation;

@protocol ARUICountdownAnimatorDelegate <NSObject>
@optional
/* instance methods */
- (void)countdownAnimatorWillBeginAnimating:(id)animating;
- (void)countdownAnimator:(id)animator willBeginAnimation:(id)animation afterDelay:(double)delay;
- (void)countdownAnimator:(id)animator performingAnimation:(id)animation withDuration:(double)duration;
- (void)countdownAnimator:(id)animator completedAnimation:(id)animation;
- (void)countdownAnimatorDidFinishAnimating:(id)animating;
@end

#endif /* ARUICountdownAnimatorDelegate_Protocol_h */