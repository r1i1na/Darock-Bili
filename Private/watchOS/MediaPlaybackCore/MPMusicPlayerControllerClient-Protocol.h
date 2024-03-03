//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMusicPlayerControllerClient_Protocol_h
#define MPMusicPlayerControllerClient_Protocol_h
@import Foundation;

@protocol MPMusicPlayerControllerClient <NSObject>
/* instance methods */
- (void)applyServerStateUpdateRecord:(id)record;
- (void)setServerQueueDescriptor:(id)descriptor;
- (void)setServerNowPlaying:(id)playing;
- (void)setServerTimeSnapshot:(id)snapshot;
- (void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)queue;
- (void)serverItemDidEnd;
- (void)serverQueueDidEnd;
@end

#endif /* MPMusicPlayerControllerClient_Protocol_h */