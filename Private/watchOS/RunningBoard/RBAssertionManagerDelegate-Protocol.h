//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBAssertionManagerDelegate_Protocol_h
#define RBAssertionManagerDelegate_Protocol_h
@import Foundation;

@protocol RBAssertionManagerDelegate <NSObject>
/* instance methods */
- (void)assertionManager:(id)manager didUpdateProcessStates:(id)states completion:(id /* block */)completion;
- (void)assertionManager:(id)manager didResolveSystemState:(id)state;
- (void)assertionManager:(id)manager willInvalidateAssertion:(id)assertion;
- (void)assertionManager:(id)manager willExpireAssertionsSoonForProcess:(id)process expirationTime:(double)time;
- (void)assertionManager:(id)manager didInvalidateAssertions:(id)assertions;
- (void)assertionManager:(id)manager didAddProcess:(id)process withState:(id)state;
- (void)assertionManager:(id)manager didRemoveProcess:(id)process withState:(id)state;
- (void)assertionManager:(id)manager didBeginTrackingStateForProcessIdentity:(id)identity;
- (void)assertionManager:(id)manager didEndTrackingStateForProcessIdentity:(id)identity;
- (void)assertionManager:(id)manager didBeginTrackingInFightUpdatesForProcessIdentity:(id)identity;
- (void)assertionManager:(id)manager didEndTrackingInFightUpdatesForProcessIdentity:(id)identity;
- (void)assertionManager:(id)manager didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)assertions;
@end

#endif /* RBAssertionManagerDelegate_Protocol_h */