//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAutomaticVolumeEnabledMonitor_h
#define CSAutomaticVolumeEnabledMonitor_h
@import Foundation;

#include "CSEventMonitor.h"

@class NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor {
  /* instance variables */
  BOOL _isAutomaticVolumeEnabled;
  NSUserDefaults *_defaults;
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_didReceiveAutomaticVolumeToggled:(BOOL)toggled;
- (void)_notifyObserver:(id)observer withEnabled:(BOOL)enabled;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
@end

#endif /* CSAutomaticVolumeEnabledMonitor_h */