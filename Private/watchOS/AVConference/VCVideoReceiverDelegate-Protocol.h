//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoReceiverDelegate_Protocol_h
#define VCVideoReceiverDelegate_Protocol_h
@import Foundation;

@protocol VCVideoReceiverDelegate <NSObject>
/* instance methods */
- (void)vcVideoReceiver:(id)receiver requestKeyFrameGenerationWithStreamID:(unsigned short)id firType:(int)type;
@optional
/* instance methods */
- (void)vcVideoReceiverRequestKeyFrame:(id)frame rtcpPSFBType:(unsigned int)psfbtype;
- (void)vcVideoReceiver:(id)receiver downlinkQualityDidChange:(id)change;
- (unsigned int)vcVideoReceiver:(id)receiver receivedTMMBR:(unsigned int)tmmbr;
- (void)vcVideoReceiver:(id)receiver didSwitchFromStreamID:(unsigned short)id toStreamID:(unsigned short)id;
@end

#endif /* VCVideoReceiverDelegate_Protocol_h */