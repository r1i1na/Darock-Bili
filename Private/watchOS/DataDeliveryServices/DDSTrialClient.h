//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSTrialClient_h
#define DDSTrialClient_h
@import Foundation;

#include "DDSTRIClient-Protocol.h"
#include "DDSTrialClient-Protocol.h"
#include "DDSTrialClientDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, TRINotificationToken;

@interface DDSTrialClient : NSObject<DDSTrialClient>

@property (readonly) NSObject<DDSTRIClient> *triClient;
@property (readonly, copy) NSString *triNamespaceName;
@property (retain) NSObject<TRINotificationToken> *notificationToken;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) NSObject<DDSTrialClientDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createWithWorkQueue:(id)queue query:(id)query;

/* instance methods */
- (id)initWithWorkQueue:(id)queue triClient:(id)client triNamespaceName:(id)name;
- (void)start;
- (void)fetchAssetWithCallback:(id /* block */)callback;
- (void)dealloc;
@end

#endif /* DDSTrialClient_h */