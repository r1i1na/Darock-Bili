//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEventQueue_h
#define CSLEventQueue_h
@import Foundation;

#include "BSEventQueue.h"
#include "CSLEventQueueDelegate-Protocol.h"

@interface CSLEventQueue : BSEventQueue

@property (retain, nonatomic) NSObject<CSLEventQueueDelegate> *delegate;

/* instance methods */
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
@end

#endif /* CSLEventQueue_h */