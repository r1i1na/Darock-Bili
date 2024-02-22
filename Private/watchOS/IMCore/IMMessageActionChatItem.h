//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMMessageActionChatItem_h
#define IMMessageActionChatItem_h
@import Foundation;

#include "IMTranscriptChatItem.h"
#include "IMHandle.h"

@interface IMMessageActionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) IMHandle *otherHandle;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_initWithItem:(id)item sender:(id)sender otherHandle:(id)handle;
@end

#endif /* IMMessageActionChatItem_h */