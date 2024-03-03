//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLightroomPresetPickerParameter_h
#define WFLightroomPresetPickerParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"
#include "WFActionEventObserver-Protocol.h"

@class NSArray, NSString, WFAction;

@interface WFLightroomPresetPickerParameter : WFEnumerationParameter<WFActionEventObserver>

@property (readonly, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)presetsByGroup;

/* instance methods */
- (Class)singleStateClass;
- (void)possibleStatesDidChange;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)state;
- (void)action:(id)action parameterStateDidChangeForKey:(id)key;
@end

#endif /* WFLightroomPresetPickerParameter_h */