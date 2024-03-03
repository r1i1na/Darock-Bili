//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef _SCNSceneRendererDelegateSPI_Protocol_h
#define _SCNSceneRendererDelegateSPI_Protocol_h
@import Foundation;

@protocol _SCNSceneRendererDelegateSPI <NSObject>
@optional
/* instance methods */
- (double)_renderer:(id)_renderer inputTimeForCurrentFrameWithTime:(double)time;
- (void)_renderer:(id)_renderer didBuildSubdivDataForHash:(id)hash dataProvider:(id /* block */)provider;
- (id)_renderer:(id)_renderer subdivDataForHash:(id)hash;
@end

#endif /* _SCNSceneRendererDelegateSPI_Protocol_h */