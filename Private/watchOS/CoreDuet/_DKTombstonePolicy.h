//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKTombstonePolicy_h
#define _DKTombstonePolicy_h
@import Foundation;

@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {
  /* instance variables */
  NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
}

@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (readonly, nonatomic) NSArray *propertiesToFetchForTombstones;

/* class methods */
+ (id)defaultPolicy;

/* instance methods */
- (id)init;
- (id)initWithRequirements:(id)requirements;
- (id)tombstonesForEvents:(id)events resultingFromRequirementsWithIdentifiers:(id *)identifiers;
- (id)tombstonesForPartialEvents:(id)events resultingFromRequirementsWithIdentifiers:(id *)identifiers;
@end

#endif /* _DKTombstonePolicy_h */