//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICStreamingTextView_h
#define SUICStreamingTextView_h
@import Foundation;

#include "UIView.h"
#include "SUICStreamingTextViewEmptyProtocol-Protocol.h"

@class NSArray, NSLayoutManager, NSMutableArray, NSMutableSet, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UIImage;
@protocol SUICStreamingTextViewDelegate;

@interface SUICStreamingTextView : UIView<SUICStreamingTextViewEmptyProtocol> {
  /* instance variables */
  NSLayoutManager *_layoutManager;
  NSTextStorage *_textStorage;
  NSTextContainer *_textContainer;
  NSMutableArray *_wordsToShow;
  NSMutableSet *_wordsToDelete;
  BOOL _animatedInternal;
  UIImage *_chevronImage;
}

@property (weak, nonatomic) NSObject<SUICStreamingTextViewDelegate> *streamingTextViewDelegate;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double hyphenationFactor;
@property (retain, nonatomic) UIColor *startTextColor;
@property (retain, nonatomic) UIColor *endTextColor;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *words;
@property (readonly, nonatomic) NSString *text;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL renderEmojisOnly;
@property (nonatomic) BOOL renderEmojis;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_sharedInit;
- (void)_updateAnimatedInternal;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)layoutSubviews;
- (void)_updateText:(id)text;
- (void)_layoutFrames;
- (void)_animateLayers;
- (void)_animateWordIn:(id)in;
- (void)_animateWordOut:(id)out;
- (void)_resetState;
- (id)_substringRangesContainingEmojiInString:(id)string startingIndex:(long long)index;
- (id)_glyphImageForWord:(id)word frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range textColor:(id)color;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })image glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range layoutManager:(id)manager;
- (id)_createChevronImage;
- (struct CGImage *)_imageRefForImage:(id)image;
@end

#endif /* SUICStreamingTextView_h */