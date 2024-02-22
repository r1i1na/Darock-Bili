//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIEmojiSearchAnalyticsSession_h
#define TUIEmojiSearchAnalyticsSession_h
@import Foundation;

#include "TUIAnalyticsSession.h"

@class NSLocale, NSString;

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {
  /* instance variables */
  NSLocale *_locale;
  NSString *_trackedSearchQuery;
  NSString *_initialInputModeIdentifier;
  unsigned long long _numberOfInitialCharacters;
  unsigned long long _numberOfEmojiInserted;
  unsigned long long _numberOfCharactersInserted;
  unsigned long long _numberOfCharactersDeleted;
  unsigned long long _numberOfClearActions;
}

/* class methods */
+ (id)emojiSearchFieldSpecTuples;
+ (void)registerEventSpecIfNecessary;

/* instance methods */
- (id)initWithLocale:(id)locale;
- (void)beginSessionWithInitialSearchQuery:(id)query;
- (void)emojiInserted:(id)inserted;
- (void)searchQueryWasChangedTo:(id)to;
- (void)clearButtonPressed;
- (void)endSession;
@end

#endif /* TUIEmojiSearchAnalyticsSession_h */