//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextCollectionViewFlowLayout_h
#define NTKUpNextCollectionViewFlowLayout_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"
#include "NTKFrameNotchProviding-Protocol.h"
#include "NTKUpNextCollectionViewFlowLayoutAttributes.h"

@class CLKDevice, NSDictionary, NSIndexPath, NSSet;

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {
  /* instance variables */
  CLKDevice *_device;
  NSDictionary *_layoutInfo;
  NSDictionary *_headerLayoutInfo;
  NSDictionary *_tritiumLayoutInfo;
  NTKUpNextCollectionViewFlowLayoutAttributes *_decorationLayoutInfo;
  NSSet *_previousSectionsWithHeaders;
  NSSet *_sectionsWithHeaders;
  BOOL _needsHeaderUpdate;
  BOOL _needsInsetsUpdate;
  NSIndexPath *_lastIndexPathContainingContent;
  BOOL _needsNotchesUpdated;
  NSIndexPath *_tritiumHighlightedIndexPath;
  double _tritiumHighlightedProgress;
}

@property (nonatomic) double topItemsAlpha;
@property (nonatomic) double headerAlpha;
@property (nonatomic) double topItemsShift;
@property (nonatomic) double statusBarDecorationHeight;
@property (retain, nonatomic) NSIndexPath *topElementIndexPath;
@property (retain, nonatomic) NSIndexPath *bottomElementIndexPath;
@property (nonatomic) double topOffsetForSnapping;
@property (nonatomic) double topOffsetForScrolling;
@property (nonatomic) double lowTransitionScale;
@property (nonatomic) double lowTransitionShift;
@property (nonatomic) double highTransitionScale;
@property (nonatomic) double highTransitionShift;
@property (nonatomic) BOOL useFixedLowTransitionLayout;
@property (nonatomic) double maximumDarkeningAmount;
@property (nonatomic) double highTransitionBottomOffset;
@property (nonatomic) BOOL snappingEnabled;
@property (nonatomic) BOOL showingAllAttributes;
@property (retain, nonatomic) NSIndexPath *indexPathToSnapTo;
@property (nonatomic) double snappingOffset;
@property (readonly, nonatomic) NSSet *dwellIndexPathes;
@property (weak, nonatomic) NSObject<NTKFrameNotchProviding> *notchProvider;
@property (nonatomic) BOOL tritium_renderOverlayCards;
@property (nonatomic) double tritium_topOverlayElementAlpha;
@property (nonatomic) double tritium_bottomOverlayElementAlpha;
@property (nonatomic) double tritium_topElementTritiumProgress;
@property (nonatomic) double tritium_bottomElementTritiumProgress;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)init;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)_tritium_invalidateLayoutWithTritiumContext;
- (void)tritium_setRenderOverlayCards:(BOOL)cards;
- (void)tritium_setTopOverlayElementAlpha:(double)alpha;
- (void)tritium_setBottomOverlayElementAlpha:(double)alpha;
- (void)tritium_setTopElementTritiumProgress:(double)progress;
- (void)tritium_setBottomElementTritiumProgress:(double)progress;
- (void)tritium_setCellAtIndexPath:(id)path highlightProgress:(double)progress;
- (void)invalidateLayoutWithContext:(id)context;
- (void)prepareLayout;
- (id)_findLastIndexPathWithContent;
- (void)finalizeCollectionViewUpdates;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (void)_updateVisibilityForLayoutAttributes:(id)attributes inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;
- (void)_updateSectionHeaderListIfNeeded;
- (void)_updateContentInsetsIfNeeded;
- (BOOL)_hasHeaderForSection:(long long)section;
- (BOOL)isSnappingEnabled;
- (BOOL)isShowingAllAttributes;
@end

#endif /* NTKUpNextCollectionViewFlowLayout_h */