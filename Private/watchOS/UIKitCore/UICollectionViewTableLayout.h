//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewTableLayout_h
#define UICollectionViewTableLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"
#include "UICollectionViewTableAttributes-Protocol.h"
#include "UIColor.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollView.h"
#include "UISwipeActionController.h"
#include "UISwipeActionHost-Protocol.h"
#include "UITableConstants-Protocol.h"
#include "UITableViewRowData.h"
#include "UITable_Internal-Protocol.h"
#include "UIView.h"
#include "UIVisualEffect.h"

@class BOOL *, NSIndexPath, NSMutableArray, NSMutableSet, NSSet, NSString;
@protocol UICollectionViewDataSourceTableLayout, UICollectionViewDelegateTableLayout;

@interface UICollectionViewTableLayout : UICollectionViewLayout<UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal, UISwipeActionHost> {
  /* instance variables */
  NSSet *_floatingElementKinds;
  UIColor *_darkenedSeparatorColor;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _previousLayoutMargins;
  NSMutableArray *_indexPathCache;
  NSMutableSet *_preferredAttributesCache;
  NSMutableSet *_headerPreferredAttributesCache;
  NSMutableSet *_footerPreferredAttributesCache;
  double _memoizedScale;
}

@property (retain, nonatomic) NSObject<UITableConstants> *constants;
@property (retain, nonatomic) UITableViewRowData *rowData;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (readonly, nonatomic) NSObject<UICollectionViewDelegateTableLayout> *delegateActual;
@property (readonly, nonatomic) NSObject<UICollectionViewDelegateTableLayout> *delegateProxy;
@property (readonly, nonatomic) NSObject<UICollectionViewDataSourceTableLayout> *dataSourceActual;
@property (retain, nonatomic) UISwipeActionController *swipeActionController;
@property (retain, nonatomic) NSIndexPath *deletedIndexPath;
@property (nonatomic) BOOL showsAdditionalSeparators;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } separatorInset;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) long long separatorStyle;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;
@property (nonatomic) BOOL insetsContentViewsToSafeArea;
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double headerFooterLeadingMarginWidth;
@property (readonly, nonatomic) double headerFooterTrailingMarginWidth;
@property (readonly, nonatomic) double defaultSectionHeaderHeight;
@property (readonly, nonatomic) double defaultSectionFooterHeight;
@property (readonly, nonatomic) double sidePadding;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _contentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tableContentInset;
@property (readonly, nonatomic) double paddingAboveFirstSectionHeader;
@property (readonly, nonatomic) double paddingAboveSectionHeaders;
@property (readonly, nonatomic) double sectionHeaderToFirstRowPadding;
@property (readonly, nonatomic) double sectionFooterToLastRowPadding;
@property (readonly, nonatomic) long long headerFooterPinningBehavior;
@property (readonly, nonatomic) double rowSpacing;
@property (readonly, nonatomic) BOOL isTableHeaderAutohiding;
@property (readonly, nonatomic) double heightForTableHeader;
@property (readonly, nonatomic) double heightForTableFooter;
@property (readonly, nonatomic) BOOL providesRowHeights;
@property (readonly, nonatomic) BOOL estimatesHeights;
@property (readonly, nonatomic) BOOL estimatesRowHeights;
@property (readonly, nonatomic) BOOL estimatesSectionHeaderHeights;
@property (readonly, nonatomic) BOOL estimatesSectionFooterHeights;
@property (readonly, nonatomic) UIView *tableHeaderView;
@property (readonly, nonatomic) UIView *tableFooterView;
@property (readonly, nonatomic) BOOL shouldUseSearchBarHeaderBehavior;
@property (readonly, nonatomic) BOOL shouldUseNewHeaderFooterBehavior;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic) BOOL usesVariableMargins;
@property (readonly, nonatomic) BOOL overlapsSectionHeaderViews;
@property (readonly, nonatomic) double backgroundInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cellSafeAreaInsets;
@property (nonatomic) BOOL _sectionHeadersHugContent;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double bottomPadding;
@property (readonly, nonatomic) BOOL showingIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } indexFrame;
@property (readonly, nonatomic) double indexBarExtentFromEdge;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } rawSectionContentInset;
@property (readonly, nonatomic) double sectionCornerRadius;
@property (readonly, nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;
@property (readonly, nonatomic) UIColor *accessoryBaseColor;
@property (readonly, nonatomic) UIColor *multiselectCheckmarkColor;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (nonatomic) BOOL editing;
@property (readonly, nonatomic) long long tableStyle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } rawSeparatorInset;

/* class methods */
+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_floatingElementKinds;
- (void)_setFloatingElementKinds:(id)kinds;
- (void)prepareLayout;
- (void)prepareForTransitionFromLayout:(id)layout;
- (void)prepareForTransitionToLayout:(id)layout;
- (void)_setCollectionView:(id)view;
- (struct CGPoint { double x0; double x1; })_contentOffsetFromProposedContentOffset:(struct CGPoint { double x0; double x1; })offset forScrollingToItemAtIndexPath:(id)path atScrollPosition:(unsigned long long)position;
- (BOOL)_estimatesSizes;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (id)_indexPathsBelowIndexPath:(id)path;
- (void)_invalidateIndexPathsBelowIndexPath:(id)path withInvalidationContext:(id)context;
- (id)invalidationContextForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (BOOL)_wantsBandSelectionVisualsInSection:(long long)section;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForInteractivelyMovingItems:(id)items withTargetPosition:(struct CGPoint { double x0; double x1; })position previousIndexPaths:(id)paths previousPosition:(struct CGPoint { double x0; double x1; })position;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)invalidateLayoutWithContext:(id)context;
- (id)_layoutAttributesForCellWithIndexPath:(id)path;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)path withTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (id)_layoutAttributesForViewElementKind:(id)kind;
- (id)_layoutAttributesForSectionElementKind:(id)kind atSection:(long long)section;
- (id)_layoutAttributesForSeparatorWithIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (void)_setShowsAdditionalSeparators:(BOOL)separators;
- (BOOL)_shouldDrawThickSeparators;
- (BOOL)_shouldApplyReadableWidthInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_extraSeparatorFrameForIndexPath:(id)path offset:(double)offset;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(double *)offset;
- (BOOL)_separatorInsetIsRelativeToCellEdges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleRect;
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredLayoutMargins;
- (void)_darkenedColorsChanged:(id)changed;
- (void)_separatorColorChanged;
- (id)_delegateActual;
- (id)_delegateProxy;
- (id)_dataSourceActual;
- (long long)_accessoryTypeForCell:(id)cell forRowAtIndexPath:(id)path;
- (BOOL)_canReorderRowAtIndexPath:(id)path;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)path;
- (long long)_indentationLevelForRowAtIndexPath:(id)path;
- (long long)_editingStyleForRowAtIndexPath:(id)path;
- (BOOL)_shouldDrawTopSeparatorDueToMergedBarForSectionAtIndex:(long long)index;
- (BOOL)_shouldDrawSeparatorAtTop:(BOOL)top ofSection:(long long)section;
- (BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)path;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSectionElementKind:(id)kind atSection:(long long)section visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect floating:(BOOL *)floating canGuess:(BOOL)guess;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_sectionRangeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (double)_defaultCellHeight;
- (BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
- (BOOL)_wantsSwipes;
- (id)gestureRecognizerViewForSwipeActionController:(id)controller;
- (id)itemContainerViewForSwipeActionController:(id)controller;
- (id)swipeActionController:(id)controller leadingSwipeConfigurationForItemAtIndexPath:(id)path;
- (id)swipeActionController:(id)controller trailingSwipeConfigurationForItemAtIndexPath:(id)path;
- (long long)layoutDirectionForSwipeActionController:(id)controller;
- (id)swipeActionController:(id)controller indexPathForTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (id)swipeActionController:(id)controller viewForItemAtIndexPath:(id)path;
- (void)swipeActionController:(id)controller willPerformAction:(id)action atIndexPath:(id)path;
- (void)swipeActionController:(id)controller didCompleteAction:(id)action cancelled:(BOOL)cancelled atIndexPath:(id)path;
- (void)swipeActionController:(id)controller animateView:(id)view actionsView:(id)view forDestructiveAction:(id)action atIndexPath:(id)path withSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info completion:(id /* block */)completion;
- (BOOL)swipeActionController:(id)controller mayBeginSwipeForItemAtIndexPath:(id)path;
- (void)swipeActionController:(id)controller willBeginSwipeForItemAtIndexPath:(id)path;
- (void)swipeActionController:(id)controller didEndSwipeForItemAtIndexPath:(id)path;
- (void)resetSwipedRowWithCompletion:(id /* block */)completion;
- (id)swipeActionForDeletingRowAtIndexPath:(id)path;
- (id)contextualActionForDeletingRowAtIndexPath:(id)path;
- (BOOL)isEditing;
- (id)_scrollView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_rawSeparatorInset;
- (void)_setSectionContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_rawSectionContentInset;
- (BOOL)_sectionContentInsetFollowsLayoutMargins;
- (double)_sectionCornerRadius;
- (double)_indexBarExtentFromEdge;
- (long long)_tableStyle;
- (long long)_numberOfSections;
- (long long)_numberOfRowsInSection:(long long)section;
- (double)_headerFooterLeadingMarginWidth;
- (double)_headerFooterTrailingMarginWidth;
- (double)_defaultSectionHeaderHeight;
- (double)_defaultSectionFooterHeight;
- (double)_sidePadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tableContentInset;
- (double)_paddingAboveFirstSectionHeader;
- (double)_paddingAboveSectionHeaders;
- (double)_sectionHeaderToFirstRowPadding;
- (double)_sectionFooterToLastRowPadding;
- (long long)_headerFooterPinningBehavior;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellSafeAreaInsets;
- (BOOL)_isTableHeaderAutohiding;
- (double)_heightForTableHeader;
- (double)_heightForTableFooter;
- (BOOL)_providesRowHeights;
- (BOOL)_estimatesHeights;
- (BOOL)_estimatesRowHeights;
- (BOOL)_estimatesSectionHeaderHeights;
- (BOOL)_estimatesSectionFooterHeights;
- (double)_heightForRowAtIndexPath:(id)path;
- (double)_heightForHeaderInSection:(long long)section useRowData:(BOOL)data;
- (double)_heightForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })_sizeForHeaderInSection:(long long)section;
- (double)_heightForFooterInSection:(long long)section useRowData:(BOOL)data;
- (double)_heightForFooterInSection:(long long)section;
- (double)_estimatedHeightForRowAtIndexPath:(id)path;
- (double)_estimatedHeightForHeaderInSection:(long long)section;
- (double)_estimatedHeightForFooterInSection:(long long)section;
- (double)_dataSourceHeightForRowAtIndexPath:(id)path;
- (double)_dataSourceHeightForHeaderInSection:(long long)section;
- (double)_dataSourceHeightForFooterInSection:(long long)section;
- (void)_prepareForRowDataHeaderFooterSizing;
- (void)_coalesceContentSizeUpdateWithDelta:(double)delta;
- (void)_applyContentSizeDeltaImmediately:(double)immediately;
- (BOOL)_shouldHaveViewForElementOfKind:(id)kind atSection:(long long)section useRowData:(BOOL)data;
- (BOOL)_shouldHaveHeaderViewForSection:(long long)section;
- (BOOL)_shouldHaveFooterViewForSection:(long long)section;
- (BOOL)_shouldHaveGlobalViewForElementOfKind:(id)kind;
- (void)_headerFooterDidInvalidateIntrinsicContentSize:(id)size;
- (id)_tableHeaderView;
- (id)_tableFooterView;
- (id)_titleForHeaderInSection:(long long)section;
- (id)_titleForFooterInSection:(long long)section;
- (id)_detailTextForHeaderInSection:(long long)section;
- (long long)_titleAlignmentForHeaderInSection:(long long)section;
- (long long)_titleAlignmentForFooterInSection:(long long)section;
- (double)_maxTitleWidthForHeaderInSection:(long long)section;
- (double)_maxTitleWidthForFooterInSection:(long long)section;
- (BOOL)_shouldStripHeaderTopPaddingForSection:(long long)section;
- (BOOL)_shouldUseSearchBarHeaderBehavior;
- (BOOL)_shouldUseNewHeaderFooterBehavior;
- (void)_setHeight:(double)height forRowAtIndexPath:(id)path usingPresentationValues:(BOOL)values;
- (void)_cellAccessoryButtonTappedAtIndexPath:(id)path;
- (void)_swipeToDeleteCell:(id)cell;
- (double)_backgroundInset;
- (double)_topPadding;
- (double)_bottomPadding;
- (BOOL)_isShowingIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indexFrame;
- (id)_accessoryBaseColor;
- (id)_multiselectCheckmarkColor;
- (id)_constants;
- (double)_rowSpacing;
- (id)_swipeActionController;
- (void)_setSwipeActionController:(id)controller;
- (BOOL)_showsAdditionalSeparators;
@end

#endif /* UICollectionViewTableLayout_h */