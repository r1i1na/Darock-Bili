//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDemoModeAccessoryObserver_Protocol_h
#define HFDemoModeAccessoryObserver_Protocol_h
@import Foundation;

@protocol HFDemoModeAccessoryObserver <NSObject>
@optional
/* instance methods */
- (void)didUpdateDemoModeStateForAccessory:(id)accessory;
@end

#endif /* HFDemoModeAccessoryObserver_Protocol_h */