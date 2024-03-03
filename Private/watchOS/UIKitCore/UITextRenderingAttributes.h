//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextRenderingAttributes_h
#define UITextRenderingAttributes_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class UIFont;

@interface UITextRenderingAttributes : NSObject<NSCopying> {
  /* instance variables */
  UIFont *_font;
  double _minimumFontSize;
  double _actualFontSize;
  double _lineSpacing;
  long long _lineBreakMode;
  long long _baselineAdjustment;
  long long _alignment;
  BOOL _includeEmoji;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _truncationRect;
  BOOL _drawUnderline;
}

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UITextRenderingAttributes_h */