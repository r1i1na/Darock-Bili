//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUIAcePronunciationItem_h
#define SAUIAcePronunciationItem_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)acePronunciationItem;
+ (id)acePronunciationItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUIAcePronunciationItem_h */