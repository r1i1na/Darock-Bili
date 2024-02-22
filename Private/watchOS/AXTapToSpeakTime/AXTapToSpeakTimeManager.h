//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXTapToSpeakTimeManager_h
#define AXTapToSpeakTimeManager_h
@import Foundation;

#include "AVSpeechSynthesizerDelegate-Protocol.h"
#include "CSLSBacklightObserver-Protocol.h"

@class AVSpeechSynthesizer, AXTapticTimeManager, NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

@interface AXTapToSpeakTimeManager : NSObject<AVSpeechSynthesizerDelegate, CSLSBacklightObserver> {
  /* instance variables */
  int _ringerStateNotifyToken;
  BOOL _cachedRingerIsMuted;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) AVSpeechSynthesizer *avSpeechSynthesizer;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) AXTapticTimeManager *tapticTimeManager;
@property (nonatomic) float lastMediaVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_ringerStateChanged;
- (BOOL)_canSpeakTimeForVoice:(unsigned long long)voice andGesture:(unsigned long long)gesture;
- (BOOL)canOutputTime;
- (BOOL)isCurrentlyOutputting;
- (BOOL)_canTapticTime;
- (void)outputTime:(id)time;
- (void)outputTime:(id)time preferredVoice:(unsigned long long)voice;
- (void)outputTime:(id)time preferredVoice:(unsigned long long)voice withGesture:(unsigned long long)gesture;
- (void)stopOutput;
- (void)_speakTime:(id)time preferredVoice:(unsigned long long)voice;
- (id)_ttsSiriVoiceAssetForAFVoice:(id)afvoice language:(id)language;
- (void)_speakTime:(id)time withCharacterVoiceIdentifier:(id)identifier;
- (void)_outputTapticTime:(id)time;
- (id)_currentLanguageCode;
- (BOOL)_canOutputPremiumVoice;
- (void)_normalizeVolumeIfNecessary;
- (void)_denormalizeVolumeIfNecessary;
- (void)_setupAudioSessionForVoice:(unsigned long long)voice;
- (void)speechOutputDidComplete;
- (void)speechSynthesizer:(id)synthesizer didStartSpeechUtterance:(id)utterance;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeechUtterance:(id)utterance;
- (void)speechSynthesizer:(id)synthesizer didCancelSpeechUtterance:(id)utterance;
- (void)backlightDidTurnOff:(id)off forReason:(unsigned long long)reason;
@end

#endif /* AXTapToSpeakTimeManager_h */