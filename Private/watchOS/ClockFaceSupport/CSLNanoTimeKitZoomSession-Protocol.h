//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CSLNanoTimeKitZoomSession_Protocol_h
#define CSLNanoTimeKitZoomSession_Protocol_h
@import Foundation;

@protocol CSLNanoTimeKitZoomSession <NSObject>
/* instance methods */
- (void)setZoomFraction:(double)fraction diameter:(double)diameter completion:(id /* block */)completion;
- (void)cleanupAfterZoom:(id /* block */)zoom;
- (void)prepareToZoomWithIconViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame minDiameter:(double)diameter maxDiameter:(double)diameter parameters:(id)parameters completion:(id /* block */)completion;
@end

#endif /* CSLNanoTimeKitZoomSession_Protocol_h */