//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherPlatterViewLayoutAttributesAnimator_h
#define CSLAppSwitcherPlatterViewLayoutAttributesAnimator_h
@import Foundation;

#include "CSLAppSwitcherPlatterViewLayoutAttributesAnimatorDelegate-Protocol.h"
#include "_TtP8Carousel22SpringAnimatorDelegate_-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSOrderedSet, _TtC8Carousel14SpringAnimator;

@interface CSLAppSwitcherPlatterViewLayoutAttributesAnimator : NSObject<Carousel.SpringAnimatorDelegate> {
  /* instance variables */
  NSOrderedSet *_animatableAttributes;
  Carousel.SpringAnimator *_animator;
  NSDictionary *_animatableAccessoryAttributes;
  NSMutableDictionary *_actualAccessoryAttributes;
}

@property (readonly, nonatomic) NSOrderedSet *currentLayoutAttributes;
@property (retain, nonatomic) NSOrderedSet *targetLayoutAttributes;
@property (weak, nonatomic) NSObject<CSLAppSwitcherPlatterViewLayoutAttributesAnimatorDelegate> *delegate;

/* instance methods */
- (id)initWithAttributes:(id)attributes accessoryAttributes:(id)attributes;
- (void)completeImmediately;
- (void)begin;
- (void)removeItemsAtIndexes:(id)indexes;
- (id)layoutAttributesForAccessoryOfType:(unsigned long long)type;
- (void)updateTargetLayoutAttributes:(id)attributes forAccessoryOfType:(unsigned long long)type;
- (void)springAnimator:(id)animator springForKey:(id)key updatedWithValue:(double)value;
- (void)springAnimatorDidComplete:(id)complete;
- (void)springAnimator:(id)animator zoomSpringForKey:(id)key updatedWithZoom:(double)zoom transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform;
@end

#endif /* CSLAppSwitcherPlatterViewLayoutAttributesAnimator_h */