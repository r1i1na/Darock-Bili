//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVGetToFileTask_h
#define CoreDAVGetToFileTask_h
@import Foundation;

#include "CoreDAVGetTask.h"

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask

@property (retain, nonatomic) NSFileHandle *destinationFile;

/* instance methods */
- (id)initWithURL:(id)url destinationFile:(id)file;
- (id)copyDefaultParserForContentType:(id)type;
- (BOOL)shouldLogResponseBody;
@end

#endif /* CoreDAVGetToFileTask_h */