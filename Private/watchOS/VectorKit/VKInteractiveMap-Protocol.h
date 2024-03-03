//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKInteractiveMap_Protocol_h
#define VKInteractiveMap_Protocol_h
@import Foundation;

@protocol VKInteractiveMap <NSObject>

@property (weak, nonatomic) NSObject<VKInteractiveMapDelegate> *delegate;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *visibleTileSets;

/* class methods */
+ (BOOL)supportsMapType:(int)type scale:(int)scale;
/* instance methods */
- (id)detailedDescription;
- (id)consoleString:(BOOL)string;
- (void)setMapType:(int)type animated:(BOOL)animated;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })point highlightTarget:(unsigned char)target;
- (id /* block */)annotationRectTest;
- (id /* block */)annotationCoordinateTest;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (struct { double x0; double x1; })convertPointToCoordinate:(struct CGPoint { double x0; double x1; })coordinate;
- (struct { double x0; double x1; })convertPointToMapPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })convertMapPointToPoint:(struct { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })convertCoordinateToPoint:(struct { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })convertCoordinateToCameraModelPoint:(struct { double x0; double x1; })point;
- (void)addOverlay:(id)overlay;
- (void)removeOverlay:(id)overlay;
- (void)insertOverlay:(id)overlay aboveOverlay:(id)overlay;
- (void)insertOverlay:(id)overlay belowOverlay:(id)overlay;
- (id)attributionsForCurrentRegion;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })gesturing;
- (void)transitionToTracking:(BOOL)tracking mapMode:(long long)mode startLocation:(struct { double x0; double x1; })location startCourse:(double)course cameraController:(id)controller pounceCompletionHandler:(id /* block */)handler;
@end

#endif /* VKInteractiveMap_Protocol_h */