//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCollaborationNoticeDispatcher_h
#define IMCollaborationNoticeDispatcher_h
@import Foundation;

#include "IMDaemonMultiplexedConnectionManaging-Protocol.h"

@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) NSObject<IMDaemonMultiplexedConnectionManaging> *daemonConnection;

/* instance methods */
- (id)init;
- (void)sendNotice:(id)notice toHandles:(id)handles completion:(id /* block */)completion;
- (void)sendClearNotice:(id)notice toHandles:(id)handles completion:(id /* block */)completion;
- (id)_bestSendingHandle;
- (void)dealloc;
- (void)setUpConnectionToDaemon;
- (void)disconnectFromDaemon;
@end

#endif /* IMCollaborationNoticeDispatcher_h */