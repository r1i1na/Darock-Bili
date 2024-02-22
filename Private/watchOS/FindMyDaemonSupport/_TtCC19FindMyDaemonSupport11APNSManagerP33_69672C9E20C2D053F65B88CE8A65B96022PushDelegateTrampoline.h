//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 28.3.0.0.0
//
#ifndef _TtCC19FindMyDaemonSupport11APNSManagerP33_69672C9E20C2D053F65B88CE8A65B96022PushDelegateTrampoline_h
#define _TtCC19FindMyDaemonSupport11APNSManagerP33_69672C9E20C2D053F65B88CE8A65B96022PushDelegateTrampoline_h
@import Foundation;

#include "APSConnectionDelegate-Protocol.h"

@interface FindMyDaemonSupport.APNSManager.(PushDelegateTrampoline in _69672C9E20C2D053F65B88CE8A65B960) : NSObject<APSConnectionDelegate> { // (Swift)
  /* instance variables */
   target;
}

/* instance methods */
- (void)dealloc;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
- (void)connection:(id)connection didReceiveToken:(id)token forInfo:(id)info;
- (void)connection:(id)connection didReceiveURLToken:(id)urltoken forInfo:(id)info;
- (void)connection:(id)connection didReceiveURLTokenError:(id)error forInfo:(id)info;
- (void)connection:(id)connection didReceiveIncomingMessage:(id)message;
- (void)connection:(id)connection didSendOutgoingMessage:(id)message;
- (void)connection:(id)connection didFailToSendOutgoingMessage:(id)message error:(id)error;
- (void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;
- (void)connectionDidReconnect:(id)reconnect;
- (void)connection:(id)connection channelSubscriptionsFailedWithFailures:(id)failures;
- (id)init;
@end

#endif /* _TtCC19FindMyDaemonSupport11APNSManagerP33_69672C9E20C2D053F65B88CE8A65B96022PushDelegateTrampoline_h */