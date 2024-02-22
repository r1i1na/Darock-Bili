//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore20ChronoServicesServer_h
#define _TtC10ChronoCore20ChronoServicesServer_h
@import Foundation;

@interface ChronoCore.ChronoServicesServer : NSObject { // (Swift)
  /* instance variables */
   timelineService;
   taskService;
   descriptorService;
   deviceService;
   extensionService;
   hostService;
   keybagStateProvider;
   powerlogSuggestionService;
   keepAliveAssertionProvider;
   duetService;
   stuckPairedRelationshipRepairer;
   iconStore;
   connectionListener;
   subscriptions;
   queue;
   _clientsSetLock_clients;
   _clientsSetLock;
   initialExtensionDiscoveryCompleteSubscription;
}

/* instance methods */
- (void)dealloc;
- (id)init;
@end

#endif /* _TtC10ChronoCore20ChronoServicesServer_h */