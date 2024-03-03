//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardCompositionContextQuickReply_h
#define PUICQuickboardCompositionContextQuickReply_h
@import Foundation;

#include "PUICDictationViewControllerDelegatePrivate-Protocol.h"
#include "PUICQuickboardCompositionContext-Protocol.h"
#include "PUICQuickboardCompositionModel.h"
#include "PUICQuickboardEmojiViewControllerDelegatePrivate-Protocol.h"
#include "PUICQuickboardMessageViewController.h"
#include "PUICQuickboardViewControllerDelegate-Protocol.h"

@class NSString;
@protocol OS_os_log;

@interface PUICQuickboardCompositionContextQuickReply : NSObject<PUICQuickboardEmojiViewControllerDelegatePrivate, PUICDictationViewControllerDelegatePrivate, PUICQuickboardCompositionContext, PUICQuickboardViewControllerDelegate>

@property (retain, nonatomic) PUICQuickboardCompositionModel *model;
@property (retain, nonatomic) PUICQuickboardMessageViewController *messageController;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)controller;
- (id)initWithModel:(id)model;
- (void)dealloc;
- (void)presentOnViewController:(id)controller completion:(id /* block */)completion;
- (void)quickboard:(id)quickboard textEntered:(id)entered;
- (void)quickboardInputCancelled:(id)cancelled;
- (void)dictationViewController:(id)controller finishedRecordingAudio:(id)audio;
- (id)fileHandleForAudioRecording;
- (void)dictationViewControllerDidSelectAudio:(id)audio;
- (void)quickboard:(id)quickboard didSelectItemPayload:(id)payload preview:(id)preview;
- (void)quickboard:(id)quickboard didSelectSticker:(id)sticker preview:(id)preview;
@end

#endif /* PUICQuickboardCompositionContextQuickReply_h */