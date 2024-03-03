//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFModesConfigurationMutation_h
#define _AFModesConfigurationMutation_h
@import Foundation;

#include "AFModesConfiguration.h"
#include "AFModesConfigurationMutating-Protocol.h"

@class NSString;

@interface _AFModesConfigurationMutation : NSObject<AFModesConfigurationMutating> {
  /* instance variables */
  AFModesConfiguration *_base;
  BOOL _isEyesFree;
  BOOL _isUIFree;
  BOOL _isForCarDND;
  BOOL _isInAmbient;
  BOOL _isMapsNavigationActive;
  BOOL _isVoiceTriggerRequest;
  BOOL _isConnectedToCarPlay;
  BOOL _isRequestMadeWithPhysicalDeviceInteraction;
  BOOL _isSiriAutoPrompt;
  BOOL _isFlexibleFollowup;
  BOOL _isMediaPlaying;
  BOOL _userTypedInSiri;
  NSString *_modeOverrideValue;
  BOOL _isDeviceScreenON;
  BOOL _isInPocket;
  BOOL _liftToWakeDetected;
  BOOL _userInitiatedWakeDetected;
  long long _deviceMotion;
  long long _deviceRaised;
  long long _faceDetected;
  long long _touchScreenDetected;
  long long _buttonPressDetected;
  long long _flatDevicePosture;
  long long _deviceOrientation;
  long long _isInWorkout;
  long long _isBacklightOn;
  long long _isInWaterLock;
  long long _isInSleepLock;
  long long _isInTheaterMode;
  long long _isOnWrist;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasIsEyesFree; unsigned int x :1 hasIsUIFree; unsigned int x :1 hasIsForCarDND; unsigned int x :1 hasIsInAmbient; unsigned int x :1 hasIsMapsNavigationActive; unsigned int x :1 hasIsVoiceTriggerRequest; unsigned int x :1 hasIsConnectedToCarPlay; unsigned int x :1 hasIsRequestMadeWithPhysicalDeviceInteraction; unsigned int x :1 hasIsSiriAutoPrompt; unsigned int x :1 hasIsFlexibleFollowup; unsigned int x :1 hasIsMediaPlaying; unsigned int x :1 hasUserTypedInSiri; unsigned int x :1 hasModeOverrideValue; unsigned int x :1 hasIsDeviceScreenON; unsigned int x :1 hasIsInPocket; unsigned int x :1 hasLiftToWakeDetected; unsigned int x :1 hasUserInitiatedWakeDetected; unsigned int x :1 hasDeviceMotion; unsigned int x :1 hasDeviceRaised; unsigned int x :1 hasFaceDetected; unsigned int x :1 hasTouchScreenDetected; unsigned int x :1 hasButtonPressDetected; unsigned int x :1 hasFlatDevicePosture; unsigned int x :1 hasDeviceOrientation; unsigned int x :1 hasIsInWorkout; unsigned int x :1 hasIsBacklightOn; unsigned int x :1 hasIsInWaterLock; unsigned int x :1 hasIsInSleepLock; unsigned int x :1 hasIsInTheaterMode; unsigned int x :1 hasIsOnWrist; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (BOOL)getIsEyesFree;
- (void)setIsEyesFree:(BOOL)free;
- (BOOL)getIsUIFree;
- (void)setIsUIFree:(BOOL)uifree;
- (BOOL)getIsForCarDND;
- (void)setIsForCarDND:(BOOL)dnd;
- (BOOL)getIsInAmbient;
- (void)setIsInAmbient:(BOOL)ambient;
- (BOOL)getIsMapsNavigationActive;
- (void)setIsMapsNavigationActive:(BOOL)active;
- (BOOL)getIsVoiceTriggerRequest;
- (void)setIsVoiceTriggerRequest:(BOOL)request;
- (BOOL)getIsConnectedToCarPlay;
- (void)setIsConnectedToCarPlay:(BOOL)play;
- (BOOL)getIsRequestMadeWithPhysicalDeviceInteraction;
- (void)setIsRequestMadeWithPhysicalDeviceInteraction:(BOOL)interaction;
- (BOOL)getIsSiriAutoPrompt;
- (void)setIsSiriAutoPrompt:(BOOL)prompt;
- (BOOL)getIsFlexibleFollowup;
- (void)setIsFlexibleFollowup:(BOOL)followup;
- (BOOL)getIsMediaPlaying;
- (void)setIsMediaPlaying:(BOOL)playing;
- (BOOL)getUserTypedInSiri;
- (void)setUserTypedInSiri:(BOOL)siri;
- (id)getModeOverrideValue;
- (void)setModeOverrideValue:(id)value;
- (BOOL)getIsDeviceScreenON;
- (void)setIsDeviceScreenON:(BOOL)on;
- (BOOL)getIsInPocket;
- (void)setIsInPocket:(BOOL)pocket;
- (BOOL)getLiftToWakeDetected;
- (void)setLiftToWakeDetected:(BOOL)detected;
- (BOOL)getUserInitiatedWakeDetected;
- (void)setUserInitiatedWakeDetected:(BOOL)detected;
- (long long)getDeviceMotion;
- (void)setDeviceMotion:(long long)motion;
- (long long)getDeviceRaised;
- (void)setDeviceRaised:(long long)raised;
- (long long)getFaceDetected;
- (void)setFaceDetected:(long long)detected;
- (long long)getTouchScreenDetected;
- (void)setTouchScreenDetected:(long long)detected;
- (long long)getButtonPressDetected;
- (void)setButtonPressDetected:(long long)detected;
- (long long)getFlatDevicePosture;
- (void)setFlatDevicePosture:(long long)posture;
- (long long)getDeviceOrientation;
- (void)setDeviceOrientation:(long long)orientation;
- (long long)getIsInWorkout;
- (void)setIsInWorkout:(long long)workout;
- (long long)getIsBacklightOn;
- (void)setIsBacklightOn:(long long)on;
- (long long)getIsInWaterLock;
- (void)setIsInWaterLock:(long long)lock;
- (long long)getIsInSleepLock;
- (void)setIsInSleepLock:(long long)lock;
- (long long)getIsInTheaterMode;
- (void)setIsInTheaterMode:(long long)mode;
- (long long)getIsOnWrist;
- (void)setIsOnWrist:(long long)wrist;
@end

#endif /* _AFModesConfigurationMutation_h */