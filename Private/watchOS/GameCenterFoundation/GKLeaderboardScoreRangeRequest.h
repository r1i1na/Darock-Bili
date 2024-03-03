//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKLeaderboardScoreRangeRequest_h
#define GKLeaderboardScoreRangeRequest_h
@import Foundation;

#include "GKLeaderboardScoreRequest.h"

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GKLeaderboardScoreRangeRequest_h */