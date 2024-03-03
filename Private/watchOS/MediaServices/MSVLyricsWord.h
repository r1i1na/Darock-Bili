//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVLyricsWord_h
#define MSVLyricsWord_h
@import Foundation;

#include "MSVLyricsTextElement.h"
#include "MSVLyricsLine.h"
#include "MSVLyricsWord.h"

@class NSArray;

@interface MSVLyricsWord : MSVLyricsTextElement

@property (weak, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;
@property (weak, nonatomic) MSVLyricsWord *parentWord;
@property (retain, nonatomic) NSArray *subwords;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRange;
@property (nonatomic) long long wordIndex;

/* instance methods */
- (id)init;
- (id)agent;
@end

#endif /* MSVLyricsWord_h */