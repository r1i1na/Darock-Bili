//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUlyssesAccessResource_h
#define WFUlyssesAccessResource_h
@import Foundation;

#include "WFAccessResource.h"

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme;

/* class methods */
+ (BOOL)refreshesAvailabilityOnApplicationResume;

/* instance methods */
- (id)associatedAppIdentifier;
- (id)initWithDefinition:(id)definition;
- (void)dealloc;
- (id)protectedResourceDescription;
- (unsigned long long)status;
- (void)makeAvailableWithUserInterface:(id)interface completionHandler:(id /* block */)handler;
@end

#endif /* WFUlyssesAccessResource_h */