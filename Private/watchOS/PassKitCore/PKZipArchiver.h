//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKZipArchiver_h
#define PKZipArchiver_h
@import Foundation;

@interface PKZipArchiver : NSObject
/* instance methods */
- (void)unzipStream:(id)stream toPath:(id)path completionHandler:(id /* block */)handler;
- (void)unzipStream:(id)stream toURL:(id)url completionHandler:(id /* block */)handler;
- (id)zippedDataForURL:(id)url;
@end

#endif /* PKZipArchiver_h */