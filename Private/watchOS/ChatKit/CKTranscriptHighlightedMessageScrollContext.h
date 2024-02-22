//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptHighlightedMessageScrollContext_h
#define CKTranscriptHighlightedMessageScrollContext_h
@import Foundation;

@class NSString, UIView;

@interface CKTranscriptHighlightedMessageScrollContext : NSObject

@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) long long messagePartIndex;
@property (readonly, weak, nonatomic) UIView *viewToAlignWith;
@property (readonly, nonatomic) BOOL allowOverScroll;
@property (readonly, nonatomic) unsigned long long scrollPosition;

/* instance methods */
- (id)initWithMessageGUID:(id)guid messagePartIndex:(long long)index viewToAlignWith:(id)with allowOverScroll:(BOOL)scroll scrollPosition:(unsigned long long)position;
@end

#endif /* CKTranscriptHighlightedMessageScrollContext_h */