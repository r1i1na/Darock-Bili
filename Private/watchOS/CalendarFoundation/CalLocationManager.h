//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalLocationManager_h
#define CalLocationManager_h
@import Foundation;

@interface CalLocationManager : NSObject
/* class methods */
+ (void)currentLocationWithCompletionBlock:(id /* block */)block;
+ (BOOL)isCurrentProcessEntitledToUseLocationServices;
+ (id)placemarkForLocation:(id)location withCompletionBlock:(id /* block */)block;
+ (id)placemarkForAddress:(id)address withCompletionBlock:(id /* block */)block;
+ (id)strictGeocodeString:(id)string withCompletionBlock:(id /* block */)block;
+ (void)_loadMapKit;
@end

#endif /* CalLocationManager_h */