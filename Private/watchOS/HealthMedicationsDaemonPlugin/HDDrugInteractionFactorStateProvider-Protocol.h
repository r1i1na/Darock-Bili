//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDrugInteractionFactorStateProvider_Protocol_h
#define HDDrugInteractionFactorStateProvider_Protocol_h
@import Foundation;

#include "HDDrugInteractionFactorStateProvider-Protocol.h"
#include "HDKeyValueDomainObserver-Protocol.h"

@class HDDaemon, HDKeyValueDomain;
@protocol HKObserverSet<HDDrugInteractionFactorStateObserver;

@protocol HDDrugInteractionFactorStateProvider 

@property (readonly, weak, nonatomic) HDDaemon *daemon;

/* instance methods */
- (void)monitorDrugInteractionFactorsInProfile:(id)profile;
- (long long)hasDrugInteractionFactorInProfile:(id)profile;
- (void)addDrugInteractionFactorStateObserver:(id)observer queue:(id)queue;
- (void)removeDrugInteractionFactorStateObserver:(id)observer;
@end

#endif /* HDDrugInteractionFactorStateProvider_Protocol_h */