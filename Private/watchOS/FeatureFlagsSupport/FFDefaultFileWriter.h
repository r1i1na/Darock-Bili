//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 85.0.0.0.0
//
#ifndef FFDefaultFileWriter_h
#define FFDefaultFileWriter_h
@import Foundation;

#include "FFFileWriter-Protocol.h"

@class NSDictionary;

@interface FFDefaultFileWriter : NSObject<FFFileWriter>

@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDictionary *dirAttributes;

/* instance methods */
- (id)init;
- (BOOL)writeData:(id)data toFile:(id)file error:(id *)error;
- (BOOL)createDirectoryAtURL:(id)url error:(id *)error;
@end

#endif /* FFDefaultFileWriter_h */