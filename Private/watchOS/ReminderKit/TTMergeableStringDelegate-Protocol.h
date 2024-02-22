//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef TTMergeableStringDelegate_Protocol_h
#define TTMergeableStringDelegate_Protocol_h
@import Foundation;

@protocol TTMergeableStringDelegate <NSObject>
/* instance methods */
- (void)beginEditing;
- (void)endEditing;
- (void)edited:(unsigned long long)edited range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (void)addUndoCommand:(id)command;
- (BOOL)wantsUndoCommands;
@end

#endif /* TTMergeableStringDelegate_Protocol_h */