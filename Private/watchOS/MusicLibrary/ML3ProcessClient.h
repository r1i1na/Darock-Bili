//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3ProcessClient_h
#define ML3ProcessClient_h
@import Foundation;

#include "ML3Client.h"

@interface ML3ProcessClient : ML3Client
/* class methods */
+ (id)sharedProcessClient;

/* instance methods */
- (id)init;
- (id)bundleID;
- (id)name;
- (int)processID;
@end

#endif /* ML3ProcessClient_h */