//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUITableViewHeaderFooterView_h
#define RUITableViewHeaderFooterView_h
@import Foundation;

#include "PUICTableHeaderFooterView.h"

@class PUICTableView;
@protocol UIView<RUIHeader, UIView<RemoteUITableFooter;

@interface RUITableViewHeaderFooterView : PUICTableHeaderFooterView

@property (retain, nonatomic) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView;
@property (weak) PUICTableView *tableView;

/* instance methods */
- (BOOL)_useLegacyLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)removeEmbeddedView;
- (void)embedHeaderView:(id)view;
- (void)embedFooterView:(id)view;
- (void)_embedContentView:(id)view;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForHeaderFooter;
@end

#endif /* RUITableViewHeaderFooterView_h */