//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLClientChangePublisher_h
#define PLClientChangePublisher_h
@import Foundation;

#include "PLChangePublisher-Protocol.h"

@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject<PLChangePublisher> {
  /* instance variables */
  PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAssetsdClient:(id)client;
- (id)publishChangeEvent:(id)event delayedSaveActionsDetail:(id)detail transaction:(id)transaction;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
@end

#endif /* PLClientChangePublisher_h */