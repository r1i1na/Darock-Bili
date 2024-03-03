//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISupplementalPhraseItem_h
#define TISupplementalPhraseItem_h
@import Foundation;

#include "TISupplementalItem.h"

@class NSString;

@interface TISupplementalPhraseItem : TISupplementalItem

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *phoneticTitle;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title;
- (id)initWithTitle:(id)title phoneticTitle:(id)title;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* TISupplementalPhraseItem_h */