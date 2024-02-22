//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPSharedTripGroupSessionDelegate_Protocol_h
#define MSPSharedTripGroupSessionDelegate_Protocol_h
@import Foundation;

@protocol MSPSharedTripGroupSessionDelegate <NSObject>
/* instance methods */
- (void)groupSession:(id)session participantDidJoin:(id)join;
- (void)groupSession:(id)session participantDidLeave:(id)leave;
- (void)groupSessionEnded:(id)ended withError:(id)error;
@end

#endif /* MSPSharedTripGroupSessionDelegate_Protocol_h */