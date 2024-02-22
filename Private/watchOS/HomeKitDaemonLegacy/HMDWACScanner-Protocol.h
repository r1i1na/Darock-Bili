//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWACScanner_Protocol_h
#define HMDWACScanner_Protocol_h
@import Foundation;

#include "HAPAirPlayAccessoryBrowserDelegate-Protocol.h"
#include "HMDWACScanner-Protocol.h"
#include "HMDWACScannerDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class CUWiFiScanner, NSString;
@protocol OS_dispatch_queue;

@protocol HMDWACScanner 
/* instance methods */
- (void)setDelegate:(id)delegate queue:(id)queue;
- (void)start;
- (void)stop;
- (void)backoff;
- (void)resume;
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)browser;
@end

#endif /* HMDWACScanner_Protocol_h */