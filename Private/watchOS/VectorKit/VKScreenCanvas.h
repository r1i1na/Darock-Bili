//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKScreenCanvas_h
#define VKScreenCanvas_h
@import Foundation;

#include "MDRenderTarget-Protocol.h"
#include "VKCameraController.h"

@class ARSession;
@protocol MDMapControllerDelegate, struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { undefined * * x0; id x1; struct _retain_objc_arc x2; struct _release_objc_arc x3; }, struct shared_ptr<gdc::Camera> { struct Camera * x0; struct __shared_weak_count * x1; }, {PerspectiveView<double>="_transform"{RigidTransform<double, double>="_translation"{Matrix<double, 3, 1>="_e"[3d]}"_rotation"{Quaternion<double>="_imaginary"{Matrix<double, 3, 1>="_e"[3d]}"_scalar"d}}"_projectionMatrix"{Matrix<double, 4, 4>="_e"[16d]}"_inverseProjection"{Matrix<double, 4, 4>="_e"[16d]}"_matrix"{Matrix<double, 4, 4>="_e"[16d]}"_ndcZNear"d"_aspectRatio"d"_size"{ViewSize="width"S"height"S}"_type"i"_verticalFOV"{Unit<geo::RadianUnitDescription, double>="_value"d}"_near"d"_far"d}, {_retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>="_vptr$_retain_ptr"^^?"_obj"@"VKCamera""_retain"{_retain_objc_arc=}"_release"{_release_objc_arc=}}, {shared_ptr<gdc::Camera>="__ptr_"^{Camera}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<md::TaskContext>="__ptr_"^{TaskContext}"__cntrl_"^{__shared_weak_count}};

@interface VKScreenCanvas : NSObject {
  /* instance variables */
  struct RunLoopController { struct MapEngine * x0; long long x1; } * _runLoopController;
  struct AnimationRunner { struct MapEngine * x0; } * _animationRunner;
  struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
  NSObject<MDRenderTarget> *_displayTarget;
  BOOL _userIsGesturing;
  VKCameraController *_cameraController;
  BOOL _deallocing;
  struct PerspectiveView<double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x[3] _e; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x[3] _e; } _imaginary; double _scalar; } _rotation; } _transform; struct Matrix<double, 4, 4> { double x[16] _e; } _projectionMatrix; struct Matrix<double, 4, 4> { double x[16] _e; } _inverseProjection; struct Matrix<double, 4, 4> { double x[16] _e; } _matrix; double _ndcZNear; double _aspectRatio; struct ViewSize { unsigned short width; unsigned short height; } _size; int _type; struct Unit<geo::RadianUnitDescription, double> { double _value; } _verticalFOV; double _near; double _far; } _view;
  ARSession *_arSession;
}

@property (nonatomic) struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { undefined * * x0; id x1; struct _retain_objc_arc x2; struct _release_objc_arc x3; } vkCamera;
@property (nonatomic) struct shared_ptr<gdc::Camera> { struct Camera * x0; struct __shared_weak_count * x1; } camera;
@property (readonly, nonatomic) void * mapEngine;
@property (nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } fullyOccludedEdgeInsets;
@property (weak, nonatomic) NSObject<MDMapControllerDelegate> *mapDelegate;
@property (nonatomic) BOOL gesturing;

/* instance methods */
- (id)initWithMapEngine:(void *)engine inBackground:(BOOL)background;
- (void)dealloc;
- (BOOL)wantsTimerTick;
- (void)updateWithTimestamp:(double)timestamp withContext:(void *)context;
- (void)didPresent;
- (void)updateCameraForFrameResize;
- (void)setContentsScale:(double)scale;
- (void)runAnimation:(id)animation;
- (BOOL)isGesturing;
- (void)setCameraController:(id)controller;
- (id)cameraController;
- (void)cameraController:(id)controller requestsDisplayRate:(long long)rate;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })point enableExtendedFeatureMarkers:(BOOL)markers;
- (void)didReceiveMemoryWarning:(BOOL)warning beAggressive:(BOOL)aggressive;
- (void)transferStateFromCanvas:(id)canvas;
- (void)didBecomeActive;
- (void)didBecomeInActive;
- (long long)tileSize;
@end

#endif /* VKScreenCanvas_h */