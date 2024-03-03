//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _MFRootlessMailboxUid_h
#define _MFRootlessMailboxUid_h
@import Foundation;

#include "MFMailboxUid.h"

@interface _MFRootlessMailboxUid : MFMailboxUid
/* instance methods */
- (id)displayName;
- (id)fullPath;
- (id)tildeAbbreviatedPath;
- (id)storeForMailboxUid:(id)uid;
@end

#endif /* _MFRootlessMailboxUid_h */