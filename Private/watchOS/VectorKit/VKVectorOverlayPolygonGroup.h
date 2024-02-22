//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKVectorOverlayPolygonGroup_h
#define VKVectorOverlayPolygonGroup_h
@import Foundation;

#include "VKVectorOverlayData.h"

@class NSArray;
@protocol struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style * x0; struct __shared_weak_count * x1; }, {shared_ptr<md::PolygonOverlayRenderable::Style>="__ptr_"^{Style}"__cntrl_"^{__shared_weak_count}};

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData {
  /* instance variables */
  struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _propertiesLock;
}

@property (readonly, nonatomic) struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style * x0; struct __shared_weak_count * x1; } style;
@property (readonly, nonatomic) NSArray *polygons;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) struct CGColor * fillColor;
@property (nonatomic) struct CGColor * strokeColor;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

/* instance methods */
- (id)initWithPolygons:(id)polygons;
- (void)dealloc;
- (void)setBlendMode:(long long)mode;
- (void)_updateStyleColor;
- (struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style * x0; struct __shared_weak_count * x1; })_style;
@end

#endif /* VKVectorOverlayPolygonGroup_h */