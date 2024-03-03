//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMToSuperParserContext_h
#define IMToSuperParserContext_h
@import Foundation;

#include "IMXMLParserContext.h"

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface IMToSuperParserContext : IMXMLParserContext {
  /* instance variables */
  unsigned long long _underlineCount;
  unsigned long long _boldCount;
  unsigned long long _italicCount;
  unsigned long long _strikethroughCount;
  unsigned long long _messagePartNumber;
  NSMutableArray *_fontFamilyStack;
  NSMutableArray *_fontSizeStack;
  NSMutableArray *_linkStack;
  NSMutableArray *_backgroundColorStack;
  NSMutableArray *_foregroundColorStack;
  NSMutableDictionary *_currentAttributes;
  BOOL _didAddBodyAttributes;
}

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *foregroundColor;
@property (readonly, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property long long baseWritingDirection;

/* instance methods */
- (void)dealloc;
- (void)reset;
- (id)name;
- (id)resultsForLogging;
- (void)_initIvars;
- (void)_clearIvars;
- (void)_updateFontFamily;
- (void)_updateFontSize;
- (void)incrementBoldCount;
- (void)decrementBoldCount;
- (void)incrementItalicCount;
- (void)decrementItalicCount;
- (void)incrementUnderlineCount;
- (void)decrementUnderlineCount;
- (void)incrementStrikethroughCount;
- (void)decrementStrikethroughCount;
- (void)_pushValue:(id)value ontoStack:(id)stack attributeName:(id)name;
- (void)_popValueFromStack:(id)stack attributeName:(id)name;
- (void)pushFontFamily:(id)family;
- (void)popFontFamily;
- (void)pushFontSize:(id)size;
- (void)popFontSize;
- (void)pushLink:(id)link;
- (void)popLink;
- (void)pushBackgroundColor:(id)color;
- (void)popBackgroundColor;
- (void)pushForegroundColor:(id)color;
- (void)popForegroundColor;
- (void)_incrementMessagePartNumber;
- (void)appendString:(id)string;
- (void)appendFileTransferWithGUID:(id)guid;
- (void)appendInlineImageWithGUID:(id)guid filename:(id)filename width:(long long)width height:(long long)height;
- (void)appendInlineImageWithGUID:(id)guid filename:(id)filename width:(long long)width height:(long long)height emoji:(long long)emoji;
- (void)appendBreadcrumbText:(id)text withOptions:(unsigned int)options;
@end

#endif /* IMToSuperParserContext_h */