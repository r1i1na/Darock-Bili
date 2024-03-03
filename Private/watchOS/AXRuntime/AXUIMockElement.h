//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIMockElement_h
#define AXUIMockElement_h
@import Foundation;

#include "AXUIElement.h"
#include "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement<NSCopying> {
  /* instance variables */
  NSMutableDictionary *_writableAttributes;
  NSMutableDictionary *_performActionLog;
}

@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) BOOL isApplication;
@property (nonatomic) BOOL usesCarriageReturnAsLinesSeparator;
@property (copy, nonatomic) id /* block */ handleActionBlock;
@property (copy, nonatomic) id /* block */ cacheUpdatedCallback;

/* class methods */
+ (void)applyElementAttributeCacheScheme:(unsigned long long)scheme;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x0; double x1; })coordinate;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (BOOL)isMockElement;
- (struct __AXUIElement *)axElement;
- (id)visibleElements;
- (void)startLoggingActions;
- (id)endLoggingActions;
- (id)performBlockWhileLoggingPerformedActions:(id /* block */)actions;
- (id)description;
- (id)_valueForAttribute:(long long)attribute;
- (void)enableCache:(BOOL)cache;
- (void)disableCache;
- (BOOL)isEqual:(id)equal;
- (void)setWritable:(BOOL)writable forAXAttribute:(long long)axattribute;
- (BOOL)canSetAXAttribute:(long long)axattribute;
- (id)uiElementWithAXAttribute:(long long)axattribute;
- (BOOL)canPerformAXAction:(int)axaction;
- (void)setValue:(id)value forAXAttribute:(long long)axattribute;
- (void)setValue:(id)value forAXParameterizedAttribute:(long long)attribute;
- (id)arrayWithAXAttribute:(long long)axattribute;
- (id)stringWithAXAttribute:(long long)axattribute;
- (id)objectWithAXAttribute:(long long)axattribute;
- (BOOL)boolWithAXAttribute:(long long)axattribute;
- (float)floatWithAXAttribute:(long long)axattribute;
- (long long)longWithAXAttribute:(long long)axattribute;
- (id)numberWithAXAttribute:(long long)axattribute;
- (struct CGPoint { double x0; double x1; })pointWithAXAttribute:(long long)axattribute;
- (struct CGSize { double x0; double x1; })sizeWithAXAttribute:(long long)axattribute;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithAXAttribute:(long long)axattribute;
- (struct CGPath *)pathWithAXAttribute:(long long)axattribute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithAXAttribute:(long long)axattribute;
- (id)urlWithAXAttribute:(long long)axattribute;
- (id)uiElementArrayForAXAttribute:(long long)axattribute;
- (unsigned long long)arrayCountWithAXAttribute:(long long)axattribute;
- (void)fillStaticCache;
- (id)objectWithAXAttribute:(long long)axattribute parameter:(void *)parameter;
- (id)cachedAttributes;
- (id)copyCachedAttributes;
- (id)uiElementsWithAttribute:(long long)attribute;
- (id)uiElementsWithAttribute:(long long)attribute parameter:(void *)parameter;
- (BOOL)performAXAction:(int)axaction;
- (BOOL)performAXAction:(int)axaction withValue:(id)value;
- (BOOL)performAXAction:(int)axaction withValue:(id)value fencePort:(unsigned int)port;
- (id)previousElementsWithCount:(unsigned long long)count;
- (id)nextElementsWithCount:(unsigned long long)count;
- (id)nextElementsWithParameters:(id)parameters;
- (id)previousElementsWithParameters:(id)parameters;
- (id)uiElementsWithAttribute:(long long)attribute parameter:(void *)parameter fetchAttributes:(BOOL)attributes;
- (BOOL)isValid;
- (BOOL)isValidForApplication:(id)application;
- (int)pid;
- (void)updateCacheWithAttributes:(id)attributes;
- (void)updateCache:(long long)cache;
- (void)setAXAttribute:(long long)axattribute withBOOL:(BOOL)bool;
- (void)setAXAttribute:(long long)axattribute withString:(id)string;
- (void)setAXAttribute:(long long)axattribute withLong:(long long)long;
- (void)setAXAttribute:(long long)axattribute withFloat:(float)float;
- (void)setAXAttribute:(long long)axattribute withNumber:(id)number;
- (void)setAXAttribute:(long long)axattribute withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setAXAttribute:(long long)axattribute withSize:(struct CGSize { double x0; double x1; })size;
- (void)setAXAttribute:(long long)axattribute withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setAXAttribute:(long long)axattribute withUIElement:(id)uielement;
- (void)setAXAttribute:(long long)axattribute withUIElementArray:(id)array;
- (void)setAXAttribute:(long long)axattribute withArray:(id)array;
- (void)setAXAttribute:(long long)axattribute withObject:(id)object;
- (void)setAXAttribute:(long long)axattribute withObject:(id)object synchronous:(BOOL)synchronous;
- (struct CGPoint { double x0; double x1; })pointForLineNumber:(unsigned long long)number;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint { double x0; double x1; })point;
- (unsigned long long)hash;
@end

#endif /* AXUIMockElement_h */