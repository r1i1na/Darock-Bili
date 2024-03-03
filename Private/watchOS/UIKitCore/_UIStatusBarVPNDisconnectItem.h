//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarVPNDisconnectItem_h
#define _UIStatusBarVPNDisconnectItem_h
@import Foundation;

#include "_UIStatusBarItem.h"
#include "_UIStatusBarVPNDisconnectView.h"

@class NSTimer;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView;
@property (retain, nonatomic) NSTimer *slashBeginTimer;

/* instance methods */
- (id)dependentEntryKeys;
- (BOOL)canEnableDisplayItem:(id)item fromData:(id)data;
- (void)_create_disconnectView;
- (id)viewForIdentifier:(id)identifier;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
@end

#endif /* _UIStatusBarVPNDisconnectItem_h */