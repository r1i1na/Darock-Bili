//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKRichLinkReplyPreviewBalloonView_h
#define CKRichLinkReplyPreviewBalloonView_h
@import Foundation;

#include "CKColoredBalloonView.h"

@class IMBalloonPluginDataSource, LPLinkMetadata, LPLinkView;

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;

/* instance methods */
- (void)configureForTranscriptPlugin:(id)plugin;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (void)prepareForDisplay;
- (void)prepareForReuse;
@end

#endif /* CKRichLinkReplyPreviewBalloonView_h */