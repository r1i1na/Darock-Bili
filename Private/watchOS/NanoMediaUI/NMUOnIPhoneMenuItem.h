//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUOnIPhoneMenuItem_h
#define NMUOnIPhoneMenuItem_h
@import Foundation;

#include "NMUMenuItem.h"
#include "MPAVRoutingControllerDelegate-Protocol.h"

@class MPAVRoutingController, NSString;

@interface NMUOnIPhoneMenuItem : NMUMenuItem<MPAVRoutingControllerDelegate> {
  /* instance variables */
  MPAVRoutingController *_routingController;
}

@property (copy, nonatomic) id /* block */ routeActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id /* block */)_cellConfigurationBlock;
- (id /* block */)_actionBlock;
- (id /* block */)_visibilityBlock;
- (void)routingControllerAvailableRoutesDidChange:(id)change;
@end

#endif /* NMUOnIPhoneMenuItem_h */