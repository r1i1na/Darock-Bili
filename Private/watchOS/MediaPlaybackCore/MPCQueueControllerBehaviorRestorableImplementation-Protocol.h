//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCQueueControllerBehaviorRestorableImplementation_Protocol_h
#define MPCQueueControllerBehaviorRestorableImplementation_Protocol_h
@import Foundation;

@protocol MPCQueueControllerBehaviorRestorableImplementation <MPCQueueControllerBehaviorImplementation, NSSecureCoding>

@property (readonly, nonatomic) BOOL containsRestorableContent;

/* instance methods */
- (id)finalizeStateRestorationWithTargetContentItemID:(id)id completion:(id /* block */)completion;
@end

#endif /* MPCQueueControllerBehaviorRestorableImplementation_Protocol_h */