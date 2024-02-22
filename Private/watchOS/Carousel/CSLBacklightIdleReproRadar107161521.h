//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBacklightIdleReproRadar107161521_h
#define CSLBacklightIdleReproRadar107161521_h
@import Foundation;

#include "CSLRadarReproducing-Protocol.h"

@class NSString;

@interface CSLBacklightIdleReproRadar107161521 : NSObject<CSLRadarReproducing>

@property (readonly, nonatomic) unsigned long long radarNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)reproduceWithCompletion:(id /* block */)completion;
- (void)invalidate;
@end

#endif /* CSLBacklightIdleReproRadar107161521_h */