//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSpeechServiceUnitTesting_Protocol_h
#define TTSSpeechServiceUnitTesting_Protocol_h
@import Foundation;

@protocol TTSSpeechServiceUnitTesting <NSObject>
/* class methods */
+ (id)regexRules;
/* instance methods */
- (BOOL)canInitializeSpeech:(id)speech;
- (id)speechMarkupStringForType:(long long)type voice:(id)voice string:(id)string;
- (struct __CFArray *)loadedVoiceResources;
@end

#endif /* TTSSpeechServiceUnitTesting_Protocol_h */