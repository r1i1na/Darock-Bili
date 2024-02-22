//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFImage_h
#define SFImage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFImage-Protocol.h"
#include "SFImage.h"

@class NSData, NSDictionary, NSString;

@interface SFImage : NSObject<SFImage, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 isTemplate; unsigned int x :1 shouldCropToCircle; unsigned int x :1 cornerRadius; unsigned int x :1 scale; unsigned int x :1 size; unsigned int x :1 source; unsigned int x :1 cornerRoundingStyle; } _has;
}

@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) SFImage *badgingImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)imageWithData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)loadImageDataWithCompletionHandler:(id /* block */)handler;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)handler;
- (void)loadImageDataWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasIsTemplate;
- (BOOL)hasShouldCropToCircle;
- (BOOL)hasCornerRadius;
- (BOOL)hasScale;
- (BOOL)hasSize;
- (BOOL)hasSource;
- (BOOL)hasCornerRoundingStyle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFImage_h */