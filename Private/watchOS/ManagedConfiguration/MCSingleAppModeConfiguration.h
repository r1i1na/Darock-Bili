//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCSingleAppModeConfiguration_h
#define MCSingleAppModeConfiguration_h
@import Foundation;

@interface MCSingleAppModeConfiguration : NSObject

@property (nonatomic) BOOL allowSpellCheck;
@property (nonatomic) BOOL allowDefinitionLookup;
@property (nonatomic) BOOL allowSelectedTextSharing;
@property (nonatomic) BOOL allowAutoCorrection;
@property (nonatomic) BOOL allowPredictiveKeyboard;
@property (nonatomic) BOOL allowKeyboardShortcuts;
@property (nonatomic) BOOL allowActivityContinuation;
@property (nonatomic) BOOL allowDictation;
@property (nonatomic) BOOL allowScreenShot;
@property (nonatomic) BOOL allowSmartPunctuation;
@property (nonatomic) BOOL allowSmartPuncutation;
@property (nonatomic) BOOL allowAccessibilitySpeech;
@property (nonatomic) BOOL allowPasswordAutoFill;
@property (nonatomic) BOOL allowContinuousPathKeyboard;
@property (nonatomic) BOOL allowTranslationLookup;
@property (nonatomic) BOOL allowQuickNote;

/* instance methods */
- (id)serializedConfiguration;
@end

#endif /* MCSingleAppModeConfiguration_h */