//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBArchiveDelegateImpl_h
#define RBArchiveDelegateImpl_h
@import Foundation;

#include "RBDecoderDelegate-Protocol.h"
#include "RBEncoderDelegate-Protocol.h"
#include "RBEncoderSet.h"

@class NSString;
@protocol {objc_ptr<NSData *>="_p"@"NSData"};

@interface RBArchiveDelegateImpl : NSObject<RBEncoderDelegate, RBDecoderDelegate> {
  /* instance variables */
  unsigned int _flags;
  struct objc_ptr<NSData *> { NSData *_p; } _metadata;
}

@property (readonly, nonatomic) RBEncoderSet *encoderSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFlags:(unsigned int)flags;
- (id)encodedMetadata;
- (void)decodedMetadata:(id)metadata;
- (id)encodedImageData:(struct { int x0; void * x1; })data error:(id *)error;
- (void *)decodedImageContentsWithData:(id)data type:(int *)type error:(id *)error;
- (id)encodedCGFontData:(struct CGFont *)data error:(id *)error;
- (BOOL)shouldEncodeFontSubset:(struct CGFont *)subset;
- (id)encodedFontSubsetData:(id)data cgFont:(struct CGFont *)font error:(id *)error;
- (struct CGFont *)decodedCGFontWithData:(id)data error:(id *)error;
- (id)encodedShaderLibraryData:(id)data error:(id *)error;
- (id)decodedShaderLibraryWithData:(id)data error:(id *)error;
@end

#endif /* RBArchiveDelegateImpl_h */