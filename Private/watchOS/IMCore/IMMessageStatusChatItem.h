//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMMessageStatusChatItem_h
#define IMMessageStatusChatItem_h
@import Foundation;

#include "IMTranscriptChatItem.h"
#include "IMChatTranscriptStatusItem-Protocol.h"
#include "IMHandle.h"
#include "IMServiceImpl.h"

@class NSAttributedString, NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem<IMChatTranscriptStatusItem>

@property (readonly, nonatomic) long long messageStatusType;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSString *errorText;
@property (readonly, nonatomic) long long expireStatusType;
@property (readonly, nonatomic) NSDate *timeAdded;
@property (readonly, nonatomic) NSDate *timeStale;
@property (readonly, nonatomic) unsigned long long statusItemSequenceNumber;
@property (readonly, nonatomic) NSDate *dateOfStatus;
@property (readonly, nonatomic) BOOL fromMe;
@property (readonly, nonatomic) BOOL wantsTail;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)number;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)added;
- (id)_initWithItem:(id)item statusType:(long long)type time:(id)time count:(unsigned long long)count statusItemSequenceNumber:(unsigned long long)number;
- (id)_initWithItem:(id)item expireStatusType:(long long)type count:(unsigned long long)count statusItemSequenceNumber:(unsigned long long)number;
- (id)_initWithItem:(id)item statusType:(long long)type time:(id)time count:(unsigned long long)count expireStatusType:(long long)type statusItemSequenceNumber:(unsigned long long)number;
- (id)messageItem;
@end

#endif /* IMMessageStatusChatItem_h */