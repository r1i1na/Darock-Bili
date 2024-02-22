//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 73.0.7.0.0
//
#ifndef TTSMarker_Protocol_h
#define TTSMarker_Protocol_h
@import Foundation;

@protocol TTSMarker <NSObject>

@property (readonly, nonatomic) long long markType;
@property (nonatomic) long long byteOffset;
@property (readonly, nonatomic) AVSpeechSynthesisMarker *avMark;

@end

#endif /* TTSMarker_Protocol_h */