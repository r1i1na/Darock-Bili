//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBMutableTabGroup_h
#define WBMutableTabGroup_h
@import Foundation;

#include "WBTabGroup.h"

@class NSArray, NSString, WBSCRDTPosition;

@interface WBMutableTabGroup : WBTabGroup

@property (@dynamic, nonatomic) int identifier;
@property (copy, @dynamic, nonatomic) NSArray *deletedTabs;
@property (@dynamic, nonatomic) long long kind;
@property (@dynamic, nonatomic) BOOL hidden;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (copy, @dynamic, nonatomic) id /* block */ displayTitleProvider;
@property (copy, @dynamic, nonatomic) NSString *lastSelectedTabUUID;
@property (@dynamic, nonatomic) BOOL syncable;
@property (copy, @dynamic, nonatomic) NSArray *tabs;
@property (readonly, @dynamic, nonatomic) NSArray *allTabs;
@property (copy, @dynamic, nonatomic) NSString *title;

/* class methods */
+ (id)localTabGroup;
+ (id)localTabGroupWithUUID:(id)uuid;
+ (id)privateTabGroup;

/* instance methods */
- (id)initWithBookmark:(id)bookmark tabs:(id)tabs lastSelectedTabUUID:(id)uuid;
- (id)mutableTabWithUUID:(id)uuid;
- (void)appendTabs:(id)tabs;
- (void)_performWithMutableTabs:(id /* block */)tabs;
- (void)clearTabs;
- (void)insertTabs:(id)tabs afterTab:(id)tab;
- (void)deleteTabs:(id)tabs;
- (void)removeTab:(id)tab;
- (void)reorderTab:(id)tab afterTab:(id)tab;
- (void)clearDeletedTabs;
- (void)updateLastSelectedTab;
- (void)_fixLastSelectedTabIfNeeded;
- (void)truncateToNumberOfTabs:(unsigned long long)tabs;
- (void)mergeWithTabGroup:(id)group;
@end

#endif /* WBMutableTabGroup_h */