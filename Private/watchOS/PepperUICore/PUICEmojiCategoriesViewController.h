//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICEmojiCategoriesViewController_h
#define PUICEmojiCategoriesViewController_h
@import Foundation;

#include "PUICQuickboardEmojiToSelectViewController.h"
#include "PUICClassicEmojiViewSelectionDelegate-Protocol.h"

@class UIButton;

@interface PUICEmojiCategoriesViewController : PUICQuickboardEmojiToSelectViewController {
  /* instance variables */
  BOOL _supportsStickers;
  BOOL _isMemoji;
  BOOL _stickersOnly;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) NSObject<PUICClassicEmojiViewSelectionDelegate> *emojiViewDelegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate supportsStickers:(BOOL)stickers isMemoji:(BOOL)memoji;
- (id)initWithDelegate:(id)delegate supportsStickers:(BOOL)stickers;
- (id)initWithStickersOnlyAndDelegate:(id)delegate;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)categoryIdentifiers;
@end

#endif /* PUICEmojiCategoriesViewController_h */