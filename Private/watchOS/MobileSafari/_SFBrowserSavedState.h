//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBrowserSavedState_h
#define _SFBrowserSavedState_h
@import Foundation;

#include "SFBrowserStateSQLiteStore.h"

@class NSArray, NSCountedSet, NSMutableArray;

@interface _SFBrowserSavedState : NSObject {
  /* instance variables */
  SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
  BOOL _checkPointWriteAheadLogOnNextUpdate;
  NSCountedSet *_tabCountByWindowUUID;
  BOOL _haveLoadedRecentlyClosedTabs;
}

@property (copy, nonatomic) NSArray *browserWindows;
@property (retain, nonatomic) NSArray *recentlyClosedTabs;
@property (nonatomic) BOOL secureDeleteEnabled;
@property (readonly, nonatomic) BOOL shouldBeUsedDuringTest;

/* class methods */
+ (id)sharedBrowserSavedState;
+ (void)setSharedBrowserSavedState:(id)state;
+ (id)ephemeralSavedState;
+ (BOOL)shouldMergeAllWindowsIfNeeded;
+ (void)setShouldMergeAllWindowsIfNeeded:(BOOL)needed;
+ (id)inMemoryDatabase;
+ (id)defaultBrowserStateDatabase;
+ (id)defaultPPTBrowserStateDatabase;

/* instance methods */
- (id)initWithDatabaseURL:(id)url;
- (void)dealloc;
- (void)_readBrowserControllersSavedState;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)uuid;
- (void)saveTabsState:(id)state forBrowserControllerWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)uuid andRemoveWindow:(BOOL)window;
- (void)setActiveDocumentIsValid:(BOOL)valid forBrowserControllerWithUUID:(id)uuid;
- (BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)uuid;
- (void)saveTabStateData:(id)data;
- (id)tabStateDataForUUID:(id)uuid;
- (void)clearAllSavedStatesClosingDatabase:(BOOL)database;
- (void)updateSceneID:(id)id;
- (void)updateBrowserWindowState:(id)state tabs:(id)tabs;
- (id)readSavedSessionStateDataForTabWithUUID:(id)uuid;
- (void)removeTabStateWithTabData:(id)data;
- (void)addRecentlyClosedTabs:(id)tabs;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)tab;
- (void)clearRecentlyClosedTabs;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)removed;
- (void)_historyItemsWereRemoved:(id)removed;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (void)_removeRecentlyClosedTabStateData:(id)data;
- (void)removeRecentlyClosedTabWithStateData:(id)data;
- (void)regenerateTabUUIDsForDeviceRestoration;
@end

#endif /* _SFBrowserSavedState_h */