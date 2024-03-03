//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewServiceSessionActivityRecord_h
#define _UIViewServiceSessionActivityRecord_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "UIWindow.h"
#include "_UIActiveViewServiceSessionTracker.h"
#include "_UIViewServiceSessionActivityProviding-Protocol.h"

@class NSHashTable, NSString, NSUUID;

@interface _UIViewServiceSessionActivityRecord : NSObject<BSDebugDescriptionProviding> {
  /* instance variables */
  NSHashTable *_activityWindows;
  BOOL _hasInvalidated;
  int _lastViewControllerAppearState;
  _UIActiveViewServiceSessionTracker *_tracker;
  NSObject<_UIViewServiceSessionActivityProviding> *_lastActivityProvider;
  unsigned long long _lastActivity;
  unsigned long long _lastActivityTimestamp;
  NSUUID *_sessionIdentifier;
  long long _userInterfaceIdiom;
  UIWindow *_primaryHostedWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* _UIViewServiceSessionActivityRecord_h */