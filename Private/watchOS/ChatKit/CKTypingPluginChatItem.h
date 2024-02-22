//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTypingPluginChatItem_h
#define CKTypingPluginChatItem_h
@import Foundation;

#include "CKTypingChatItem.h"

@class NSData, NSString;

@interface CKTypingPluginChatItem : CKTypingChatItem

@property (copy, nonatomic) NSString *plugInBundleID;
@property (readonly, nonatomic) NSData *typingIndicatorData;

/* instance methods */
- (id)initWithIMChatItem:(id)item maxWidth:(double)width;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (id)indicatorLayer;
@end

#endif /* CKTypingPluginChatItem_h */