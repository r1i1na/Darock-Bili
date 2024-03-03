//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNCalendarCoreLocationManager_h
#define CALNCalendarCoreLocationManager_h
@import Foundation;

#include "CALNCoreLocationProvider-Protocol.h"

@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) NSObject<CALNCoreLocationProvider> *coreLocationProvider;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;

/* instance methods */
- (id)initWithCoreLocationProvider:(id)provider;
- (void)markAsHavingReceivedLocation;
@end

#endif /* CALNCalendarCoreLocationManager_h */