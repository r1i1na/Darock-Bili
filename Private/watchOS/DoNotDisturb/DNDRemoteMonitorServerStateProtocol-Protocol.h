//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteMonitorServerStateProtocol_Protocol_h
#define DNDRemoteMonitorServerStateProtocol_Protocol_h
@import Foundation;

@protocol DNDRemoteMonitorServerStateProtocol <NSObject>
/* instance methods */
- (void)registerForStateUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
@end

#endif /* DNDRemoteMonitorServerStateProtocol_Protocol_h */