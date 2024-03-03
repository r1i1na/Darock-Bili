//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMEMessageDatagramClientDataSource_Protocol_h
#define HMEMessageDatagramClientDataSource_Protocol_h
@import Foundation;

@protocol HMEMessageDatagramClientDataSource 
/* instance methods */
- (BOOL)clientIsEnabled:(id)enabled;
- (BOOL)client:(id)client isConnectionTerminatingError:(id)error;
- (id)client:(id)client upstreamTopicsForTopic:(id)topic;
- (id)client:(id)client forwardingTopicsForTopics:(id)topics;
@end

#endif /* HMEMessageDatagramClientDataSource_Protocol_h */