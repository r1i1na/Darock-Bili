//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PAMediaConversionServiceSetLocationImageMetadataPolicy_h
#define PAMediaConversionServiceSetLocationImageMetadataPolicy_h
@import Foundation;

#include "PAMediaConversionServiceImageMetadataPolicy.h"

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) CLLocation *location;

/* class methods */
+ (id)policyWithLocation:(id)location;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)metadataNeedsProcessing:(id)processing;
- (id)processMetadata:(id)metadata;
@end

#endif /* PAMediaConversionServiceSetLocationImageMetadataPolicy_h */