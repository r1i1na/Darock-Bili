//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REAttributedTextContentProvider_h
#define REAttributedTextContentProvider_h
@import Foundation;

#include "RETextContentProvider.h"

@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSAttributedString *text;

/* class methods */
+ (id)textContentProviderWithAttributedText:(id)text;

/* instance methods */
- (id)contentEncodedString;
- (id)initWithAttributedText:(id)text;
- (id)attributedStringRepresentation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)clockKitTextProviderRepresentation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* REAttributedTextContentProvider_h */