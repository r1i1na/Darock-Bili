//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECTransferUndownloadedActionIMAPReplayer_h
#define ECTransferUndownloadedActionIMAPReplayer_h
@import Foundation;

#include "ECLocalActionReplayer.h"
#include "ECIMAPLocalActionReplayer-Protocol.h"

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer<ECIMAPLocalActionReplayer>

@property (weak, nonatomic) NSObject<ECIMAPLocalActionReplayerDelegate> *delegate;
@property (retain, nonatomic) NSObject<ECIMAPServerInterface> *serverInterface;

/* instance methods */
- (id)replayAction;
- (BOOL)_moveAllMessages;
- (id)_copyAllMessages:(BOOL)messages;
- (BOOL)_deleteUIDs:(id)uids;
- (id)_uidIndexSet;
@end

#endif /* ECTransferUndownloadedActionIMAPReplayer_h */