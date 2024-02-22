//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef UIView_UIAccessibilityElementTraversal_h
#define UIView_UIAccessibilityElementTraversal_h
@import Foundation;

@interface UIView (UIAccessibilityElementTraversal)
/* class methods */
+ (id)_accessibilityTitleForSystemTag:(long long)tag;
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)necessary;
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)views options:(id)options sorted:(BOOL)sorted;

/* instance methods */
- (void)_accessibilityClearChildren;
- (struct CGSize { double x0; double x1; })_accessibilityFrameExpansion;
- (void)_accessibilitySetFrameExpansion:(struct CGSize { double x0; double x1; })expansion;
- (BOOL)_accessibilityViewIsActive;
- (BOOL)_accessibilityViewIsVisible;
- (void)_accessibilitySetViewIsVisible:(BOOL)visible;
- (BOOL)_accessibilityViewIsVisibleIgnoringAXOverrides:(BOOL)axoverrides;
- (BOOL)_accessibilityViewIsVisibleIgnoringAXOverrides:(BOOL)axoverrides stoppingBeforeContainer:(id)container;
- (id)_accessibleSubviews:(int)subviews;
- (id)_accessibleSubviews;
- (id)_accessibleNonSupplementarySubviews;
- (id)_accessibilitySubviews;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (void)_accessibilitySetOverridesInvalidFrames:(BOOL)frames;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(BOOL)overgrown;
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)item;
- (BOOL)_accessibilityShouldIgnoreSwipeActionCompletionHandler;
- (struct CGPoint { double x0; double x1; })accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint { double x0; double x1; })coordinates;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coordinates;
- (BOOL)_accessibilityShouldUseSupplementaryViews;
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)options;
- (BOOL)_accessibilityIsSortingInUpperFrame;
- (void)_accessibilitySetIsSortingInUpperFrame:(BOOL)frame;
- (id)_accessibilityViewChildrenWithOptions:(id)options;
- (BOOL)_accessibilityShouldBeProcessed:(id)processed;
@end

#endif /* UIView_UIAccessibilityElementTraversal_h */