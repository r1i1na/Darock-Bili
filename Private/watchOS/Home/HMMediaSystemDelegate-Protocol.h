//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMMediaSystemDelegate_Protocol_h
#define HMMediaSystemDelegate_Protocol_h
@import Foundation;

@protocol HMMediaSystemDelegate <HMMediaObjectDelegate>
@optional
/* instance methods */
- (void)mediaSystem:(id)system didUpdateName:(id)name;
- (void)mediaSystem:(id)system didUpdateConfiguredName:(id)name;
- (void)mediaSystem:(id)system didUpdateComponents:(id)components;
- (void)mediaSystem:(id)system didUpdateApplicationData:(id)data;
- (void)mediaSystemDidUpdateAudioDestination:(id)destination;
@end

#endif /* HMMediaSystemDelegate_Protocol_h */