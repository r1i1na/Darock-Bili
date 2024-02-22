//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRXMLElementParser_h
#define XRXMLElementParser_h
@import Foundation;

#include "XRXMLElementParser.h"

@class NSDictionary, NSString;

@interface XRXMLElementParser : NSObject {
  /* instance variables */
  id context;
  XRXMLElementParser *parent;
  long long _lineOfStart;
  long long _colOfStart;
  long long _lineOfEnd;
  long long _colOfEnd;
  NSDictionary *_elementToClass;
  NSDictionary *_elementToKVC;
}

@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) NSDictionary *elementAttributes;

/* class methods */
+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

/* instance methods */
- (id)initWithElementName:(id)name context:(id)context;
- (id)startElementWithName:(id)name attributes:(id)attributes line:(long long)line col:(long long)col;
- (id)lineAndColumnForElementStart;
- (id)lineAndColumnForElementEnd;
- (id)endElementAtLine:(long long)line col:(long long)col;
- (void)processCharacters:(id)characters;
- (void)_handleStart;
- (void)_handleCompletion;
- (void)_handleCharacters:(id)characters;
- (void)setValue:(id)value forElementName:(id)name;
- (id)valueForElementName:(id)name;
- (void)simulateEmptyElement:(id)element;
@end

#endif /* XRXMLElementParser_h */