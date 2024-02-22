//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKBalloonImageView_h
#define CKBalloonImageView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIImage;

@interface CKBalloonImageView : UIView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long currentFrameIndex;
@property (retain, nonatomic) UIImage *invisibleInkEffectImage;
@property (nonatomic) BOOL imageHidden;
@property (retain, nonatomic) NSString *stickerAccessibilityDescription;

/* instance methods */
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)prepareForReuse;
@end

#endif /* CKBalloonImageView_h */