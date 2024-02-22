//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFContextDonation_Protocol_h
#define AFContextDonation_Protocol_h
@import Foundation;

@protocol AFContextDonation <NSObject>
/* instance methods */
- (void)registerContextTransformer:(id)transformer forType:(id)type;
- (void)donateContext:(id)context withMetadata:(id)metadata pushToRemote:(BOOL)remote;
@end

#endif /* AFContextDonation_Protocol_h */