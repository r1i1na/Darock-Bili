//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPHIDTouchEvent_h
#define RPHIDTouchEvent_h
@import Foundation;

@interface RPHIDTouchEvent : NSObject

@property (nonatomic) int finger;
@property (nonatomic) struct CGPoint { double x0; double x1; } location;
@property (nonatomic) int phase;
@property (nonatomic) double timestampSeconds;

@end

#endif /* RPHIDTouchEvent_h */