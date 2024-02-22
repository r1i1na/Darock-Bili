//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIAtlasBacking_h
#define CLKUIAtlasBacking_h
@import Foundation;

#include "CLKUIMmapFile.h"

@class NSData, NSString;

@interface CLKUIAtlasBacking : NSObject {
  /* instance variables */
  NSData *_data;
  CLKUIMmapFile *_mmapFile;
}

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, @dynamic, nonatomic) const void * bytes;
@property (readonly, @dynamic, nonatomic) unsigned long long bytesLength;
@property (readonly, @dynamic, nonatomic) unsigned long long width;
@property (readonly, @dynamic, nonatomic) unsigned long long height;
@property (readonly, @dynamic, nonatomic) unsigned long long planes;
@property (readonly, @dynamic, nonatomic) unsigned long long planeLength;
@property (readonly, @dynamic, nonatomic) unsigned long long bytesPerPixel;
@property (readonly, nonatomic) unsigned long long mipCount;
@property (readonly, @dynamic, nonatomic) unsigned char format;
@property (readonly, nonatomic) BOOL mipmaps;
@property (@dynamic, nonatomic) unsigned char filter;
@property (@dynamic, nonatomic) unsigned char wrap;
@property (readonly, nonatomic) struct CLKUIAtlasBackingStructure { void * x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; } structure;

/* class methods */
+ (id)atlasBackingWithImage:(id)image uuid:(id)uuid;
+ (id)atlasBackingWithImage:(id)image uuid:(id)uuid mipmap:(BOOL)mipmap;
+ (id)atlasBackingWithArt:(id)art uuid:(id)uuid;
+ (id)atlasBackingWithBytes:(const void *)bytes length:(unsigned long long)length mmapFile:(id)file uuid:(id)uuid;
+ (id)atlasBackingWithUuid:(id)uuid structure:(struct CLKUIAtlasBackingStructure { void * x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })structure data:(id)data;

/* instance methods */
- (id)initWithUuid:(id)uuid structure:(struct CLKUIAtlasBackingStructure { void * x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })structure data:(id)data;
- (id)initWithUuid:(id)uuid structure:(struct CLKUIAtlasBackingStructure { void * x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })structure mmapFile:(id)file;
- (BOOL)writeToFile:(id)file error:(id *)error;
@end

#endif /* CLKUIAtlasBacking_h */