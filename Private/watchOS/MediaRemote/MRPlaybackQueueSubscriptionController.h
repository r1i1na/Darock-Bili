//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRPlaybackQueueSubscriptionController_h
#define MRPlaybackQueueSubscriptionController_h
@import Foundation;

#include "MRPlayerPath.h"
#include "NSSecureCoding-Protocol.h"

@class MSVMutableBidirectionalDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueSubscriptionController : NSObject<NSSecureCoding> {
  /* instance variables */
  NSMutableArray *_requestFilters;
  NSMutableSet *_requests;
  MSVMutableBidirectionalDictionary *_offsets;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlayerPath:(id)path;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)restoreStateFromController:(id)controller;
- (void)addRequest:(id)request;
- (BOOL)hasRequest:(id)request;
- (void)removeRequest:(id)request;
- (id)contentItemIdentifierForOffset:(long long)offset;
- (id)offsetForIdentifier:(id)identifier;
- (void)augmentCommandOptions:(id)options forCommand:(unsigned int)command;
- (void)subscribeToPlaybackQueue:(id)queue forRequest:(id)request;
- (id)requestForSubscribedContentItemIdentifier:(id)identifier;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)items block:(id /* block */)block;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)items;
- (void)invalidate;
@end

#endif /* MRPlaybackQueueSubscriptionController_h */