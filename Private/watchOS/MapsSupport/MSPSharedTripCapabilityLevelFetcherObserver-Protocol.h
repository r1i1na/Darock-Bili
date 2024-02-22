//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPSharedTripCapabilityLevelFetcherObserver_Protocol_h
#define MSPSharedTripCapabilityLevelFetcherObserver_Protocol_h
@import Foundation;

@protocol MSPSharedTripCapabilityLevelFetcherObserver <NSObject>
@optional
/* instance methods */
- (void)capabilityLevelFetcher:(id)fetcher didUpdateCapabilityLevelsForHandles:(id)handles;
- (void)capabilityLevelsDidUpdate;
@end

#endif /* MSPSharedTripCapabilityLevelFetcherObserver_Protocol_h */