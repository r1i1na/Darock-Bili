//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef RouteRenderLayerObserverProxy_h
#define RouteRenderLayerObserverProxy_h
@import Foundation;

#include "VKPolylineGroupOverlayObserver-Protocol.h"

@class NSString;
@protocol {set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>>="__tree_"{__tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>>="__value_"Q}}}, {vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>="__value_"^v}};

@interface RouteRenderLayerObserverProxy : NSObject<VKPolylineGroupOverlayObserver> {
  /* instance variables */
  struct PolylineGroupChangeObserver { undefined * * x0; } * _polylineGroupObserver;
  struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { void *__value_; } __end_cap_; } _retainedGroups;
  struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { struct __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>> { unsigned long long __value_; } __pair3_; } __tree_; } _observedGroupsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver { undefined * * x0; } *)observer;
- (void)dealloc;
- (void)polylineGroup:(id)group didAddPolyline:(id)polyline;
- (void)polylineGroup:(id)group didRemovePolyline:(id)polyline;
- (void)polylineGroup:(id)group didSelectPolyline:(id)polyline;
- (void)polylineGroup:(id)group didFocusPolyline:(id)polyline;
- (void)startObserving:(id)observing;
- (void)stopObserving:(id)observing;
@end

#endif /* RouteRenderLayerObserverProxy_h */