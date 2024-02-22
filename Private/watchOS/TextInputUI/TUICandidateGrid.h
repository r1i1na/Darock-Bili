//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICandidateGrid_h
#define TUICandidateGrid_h
@import Foundation;

#include "UIView.h"
#include "TUICandidateGridDelegate-Protocol.h"
#include "TUICandidateLayout.h"
#include "TUICandidateLayoutDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, TIKeyboardCandidate, UICollectionView, UIView;
@protocol TUICandidateViewStyle;

@interface TUICandidateGrid : UIView<TUICandidateLayoutDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) TUICandidateLayout *singleRowLayout;
@property (retain, nonatomic) TUICandidateLayout *multiRowLayout;
@property (readonly, nonatomic) double rowHeight;
@property (retain, nonatomic) NSIndexPath *firstVisibleIndexPath;
@property (nonatomic) double lastUserSelectedCursorX;
@property (nonatomic) double selectedRowY;
@property (retain, nonatomic) UIView *selectedRowHighlightView;
@property (nonatomic) BOOL collectionViewLayoutWasSkipped;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *stylePending;
@property (nonatomic) double maximumRowHeight;
@property (retain, nonatomic) NSArray *candidateGroups;
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath;
@property (readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
@property (readonly, nonatomic) NSArray *visibleCandidates;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) long long rowType;
@property (nonatomic) BOOL candidateNumberEnabled;
@property (retain, nonatomic) UIView *customHeader;
@property (weak, nonatomic) NSObject<TUICandidateGridDelegate> *delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } arrowButtonSize;
@property (nonatomic) BOOL suppressCollectionViewLayout;
@property (readonly, nonatomic) NSIndexPath *firstIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isSafariPasswordSuggestionCandidate:(id)candidate;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)collectionViewLayout;
- (void)scrollToFirstCandidate;
- (void)layoutSubviews;
- (void)updateIndex;
- (void)setStyle:(id)style reload:(BOOL)reload;
- (void)setRowType:(long long)type animated:(BOOL)animated;
- (void)setRowType:(long long)type options:(unsigned long long)options animated:(BOOL)animated completion:(id /* block */)completion;
- (void)setRowType:(long long)type options:(unsigned long long)options style:(id)style animated:(BOOL)animated animator:(id)animator completion:(id /* block */)completion;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)updateContentInset;
- (void)updateBounce;
- (void)scrollToTop;
- (id)candidateAtIndexPath:(id)path;
- (BOOL)showingSlottedCandidates;
- (unsigned long long)slottedCandidatesCount;
- (unsigned long long)autofillExtraCandidatesCount;
- (id)lastIndexPath;
- (void)setSelectedIndexPath:(id)path animated:(BOOL)animated scrollPosition:(unsigned long long)position;
- (BOOL)indexPathIsValid:(id)valid;
- (id)indexPathInForwardDirection:(BOOL)direction granularity:(int)granularity;
- (BOOL)indexPathIsFullyVisible:(id)visible;
- (BOOL)hasCandidateInForwardDirection:(BOOL)direction granularity:(int)granularity;
- (void)showCandidateInForwardDirection:(BOOL)direction granularity:(int)granularity;
- (unsigned long long)candidateNumberForIndexPath:(id)path;
- (BOOL)canExpandCandidateGrid;
- (unsigned long long)candidateNumberInHorizontalLayoutForIndexPath:(id)path;
- (id)visibleAttributes;
- (unsigned long long)candidateNumberInVerticalLayoutForIndexPath:(id)path;
- (id)indexPathForVerticalCandidateNumber:(unsigned long long)number;
- (id)indexPathForCandidateNumber:(unsigned long long)number;
- (id)indexPathsInTheRowThatContainsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)indexPathsForSelectedRow;
- (id)indexPathForCandidate:(id)candidate;
- (long long)viewOffsetForCandidate:(id)candidate;
- (long long)rowForCandidate:(id)candidate;
- (BOOL)handleNumberKey:(unsigned long long)key;
- (void)updateSelectedRowHighlightView;
- (void)scrollToCandidateAtIndexPath:(id)path animated:(BOOL)animated;
- (void)forceUpdateVisibleCells;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout widthForGroupHeaderInSection:(long long)section;
- (void)scrollViewDidChangeContentSize:(id)size;
- (void)scrollViewDidScroll:(id)scroll;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (struct CGPoint { double x0; double x1; })collectionView:(id)view targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)setSlottedSeparatorHidden:(BOOL)hidden inCollectionView:(id)view nearHighlightItemAtIndexPath:(id)path;
- (void)didMoveHighlightFrame;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)_sectionIndexTitlesForCollectionView:(id)view;
- (id)_collectionView:(id)view indexPathForSectionIndexTitle:(id)title atIndex:(long long)index;
- (long long)numberOfTransliterationCandidatesInSection:(long long)section;
- (long long)numberOfNonPartialCandidatesInSection:(long long)section;
- (void)addAppCandidatesRenderSignposts;
@end

#endif /* TUICandidateGrid_h */