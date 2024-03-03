//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringArgument_Percentage_h
#define GEOComposedStringArgument_Percentage_h
@import Foundation;

#include "GEOComposedStringArgument.h"

@interface GEOComposedStringArgument_Percentage : GEOComposedStringArgument {
  /* instance variables */
  float _defaultValue;
}

@property (nonatomic) float overrideValue;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithGeoFormatArgument:(id)argument;
- (id)percentageFormat;
- (id)_stringReplacementWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GEOComposedStringArgument_Percentage_h */