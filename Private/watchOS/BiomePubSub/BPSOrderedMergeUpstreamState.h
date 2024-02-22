//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSOrderedMergeUpstreamState_h
#define BPSOrderedMergeUpstreamState_h
@import Foundation;

#include "BMBookmark-Protocol.h"
#include "BPSPublisher-Protocol.h"

@class NSString;

@interface BPSOrderedMergeUpstreamState : NSObject<BMBookmark>

@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream;
@property (retain, nonatomic) id nextEvent;
@property (retain, nonatomic) id lastReturnedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithNextEvent:(id)event lastReturnedEvent:(id)event;
- (void)attachUpstream:(id)upstream;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BPSOrderedMergeUpstreamState_h */