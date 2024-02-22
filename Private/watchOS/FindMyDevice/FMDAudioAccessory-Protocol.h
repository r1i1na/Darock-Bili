//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FMDAudioAccessory_Protocol_h
#define FMDAudioAccessory_Protocol_h
@import Foundation;

@protocol FMDAudioAccessory <NSObject>

@property (readonly, nonatomic) unsigned long long audioSafetyStatus;
@property (readonly, nonatomic) NSString *audioRoutingIdentifier;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) FMDAudioAccessoryInfo *audioAccessoryInfo;
@property (readonly, nonatomic) BOOL playingSound;
@property (readonly, nonatomic) BOOL supportsChangingListeningMode;

/* instance methods */
- (BOOL)updateAudioAsset:(id)asset;
- (BOOL)updatePlaybackChannels:(id)channels;
@optional
/* instance methods */
- (BOOL)shouldStopSoundNow;
@end

#endif /* FMDAudioAccessory_Protocol_h */