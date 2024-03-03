//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCAccountUtilities_h
#define DMCAccountUtilities_h
@import Foundation;

#include "DMCHangDetectionQueue.h"

@interface DMCAccountUtilities : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *signInQueue;

/* instance methods */
- (void)signOutAllPrimaryAccounts;
@end

#endif /* DMCAccountUtilities_h */