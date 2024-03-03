//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef PUICQuickboardEmojiViewControllerDelegatePrivate_Protocol_h
#define PUICQuickboardEmojiViewControllerDelegatePrivate_Protocol_h
@import Foundation;

@protocol PUICQuickboardEmojiViewControllerDelegatePrivate <PUICQuickboardEmojiViewControllerDelegate>
@optional
/* instance methods */
- (void)quickboard:(id)quickboard didSelectItemPayload:(id)payload preview:(id)preview;
- (void)quickboard:(id)quickboard didSelectSticker:(id)sticker preview:(id)preview;
@end

#endif /* PUICQuickboardEmojiViewControllerDelegatePrivate_Protocol_h */