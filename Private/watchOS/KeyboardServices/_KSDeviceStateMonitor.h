//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 157.200.0.0.0
//
#ifndef _KSDeviceStateMonitor_h
#define _KSDeviceStateMonitor_h
@import Foundation;

@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

/* class methods */
+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isDataAvailableForClassC;
@end

#endif /* _KSDeviceStateMonitor_h */