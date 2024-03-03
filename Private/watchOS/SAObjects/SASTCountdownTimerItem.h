//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASTCountdownTimerItem_h
#define SASTCountdownTimerItem_h
@import Foundation;

#include "AceObject.h"
#include "SASTActionableTemplateItem-Protocol.h"
#include "SASTTemplateAction-Protocol.h"
#include "SAUIColor.h"

@class NSString;

@interface SASTCountdownTimerItem : AceObject<SASTActionableTemplateItem>

@property (retain, @dynamic, nonatomic) NSObject<SASTTemplateAction> *action;
@property (nonatomic) long long actionDelayInSeconds;
@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *countdownTextColor;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) SAUIColor *headerTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)countdownTimerItem;
+ (id)countdownTimerItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASTCountdownTimerItem_h */