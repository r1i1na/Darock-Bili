//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDaemonVCInvitationsAVObserverProtocol_Protocol_h
#define IMDaemonVCInvitationsAVObserverProtocol_Protocol_h
@import Foundation;

@protocol IMDaemonVCInvitationsAVObserverProtocol <NSObject>
/* instance methods */
- (void)account:(id)account avAction:(unsigned int)action withArguments:(id)arguments toAVChat:(id)avchat isVideo:(BOOL)video;
@end

#endif /* IMDaemonVCInvitationsAVObserverProtocol_Protocol_h */