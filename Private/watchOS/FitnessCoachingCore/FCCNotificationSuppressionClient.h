//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCNotificationSuppressionClient_h
#define FCCNotificationSuppressionClient_h
@import Foundation;

#include "FCCNotificationSuppressionStore.h"
#include "FCCXPCClient.h"

@protocol OS_dispatch_queue;

@interface FCCNotificationSuppressionClient : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  FCCNotificationSuppressionStore *_store;
  FCCXPCClient *_xpcClient;
}

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue store:(id)store xpcClient:(id)client;
- (void)addNotificationSuppressionRequest:(id)request completion:(id /* block */)completion;
- (void)_addNotificationSuppressionRequest:(id)request completion:(id /* block */)completion;
- (void)removeNotificationSuppressionRequest:(id)request completion:(id /* block */)completion;
- (void)_removeNotificationSuppressionRequest:(id)request completion:(id /* block */)completion;
- (BOOL)notificationsSuppressed;
@end

#endif /* FCCNotificationSuppressionClient_h */