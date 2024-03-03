//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 690.0.0.0.0
//
#ifndef IMAVChatProxy_h
#define IMAVChatProxy_h
@import Foundation;

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject {
  /* instance variables */
  NSDictionary *_info;
}

@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) NSString *conferenceID;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) NSDate *dateConnected;
@property (readonly, nonatomic) NSDate *dateEnded;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) IMHandle *initiatorIMHandle;
@property (readonly, nonatomic) IMHandle *otherIMHandle;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isStateFinal;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (nonatomic) BOOL isMute;
@property (readonly, nonatomic) NSNumber *dataUploaded;
@property (readonly, nonatomic) NSNumber *dataDownloaded;
@property (nonatomic) double invitationTimeoutTime;
@property (nonatomic) double connectionTimeoutTime;
@property (nonatomic) BOOL relayed;

/* instance methods */
- (id)description;
- (id)account;
- (void)setLocalAspectRatio:(struct CGSize { double x0; double x1; })ratio cameraOrientation:(unsigned int)orientation cameraType:(unsigned int)type;
- (BOOL)_isProxy;
- (void)setMute:(BOOL)mute;
- (BOOL)isRelayed;
- (BOOL)_isCallUpgradeTo:(id)to;
- (void)inviteAll;
- (void)invite:(id)invite additionalPeers:(id)peers;
- (void)invite:(id)invite additionalPeers:(id)peers excludingPushTokens:(id)tokens;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)declineInvitation;
- (void)endChat;
- (void)endChatWithReason:(unsigned int)reason;
- (void)finalUpdate;
- (void)updateWithInfo:(id)info;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* IMAVChatProxy_h */