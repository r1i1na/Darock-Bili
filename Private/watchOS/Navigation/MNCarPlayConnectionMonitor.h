//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNCarPlayConnectionMonitor_h
#define MNCarPlayConnectionMonitor_h
@import Foundation;

@interface MNCarPlayConnectionMonitor : NSObject {
  /* instance variables */
  BOOL _shouldWait;
}

@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnectedSynchronous;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* MNCarPlayConnectionMonitor_h */