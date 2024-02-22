//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSTimelineController_h
#define CHSTimelineController_h
@import Foundation;

#include "CHSChronoServicesConnection.h"

@class NSString;

@interface CHSTimelineController : NSObject {
  /* instance variables */
  CHSChronoServicesConnection *_connection;
}

@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;

/* instance methods */
- (id)initWithExtensionBundleIdentifier:(id)identifier kind:(id)kind;
- (id)reloadTimelineWithReason:(id)reason;
- (id)reloadTimelineBudgetedWithReason:(id)reason;
- (id)initForAvocadoIdentifier:(id)identifier inBundleIdentifier:(id)identifier;
- (id)reloadTimeline;
- (id)reloadTimelineBudgeted;
@end

#endif /* CHSTimelineController_h */