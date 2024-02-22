//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBarBackgroundPrototypingHelper_h
#define _UIBarBackgroundPrototypingHelper_h
@import Foundation;

#include "PTSettingsKeyObserver-Protocol.h"

@class NSMutableArray, NSString;

@interface _UIBarBackgroundPrototypingHelper : NSObject<PTSettingsKeyObserver> {
  /* instance variables */
  NSMutableArray *_callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)settings:(id)settings changedValueForKey:(id)key;
@end

#endif /* _UIBarBackgroundPrototypingHelper_h */