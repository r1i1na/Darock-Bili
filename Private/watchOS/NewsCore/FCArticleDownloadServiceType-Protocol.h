//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCArticleDownloadServiceType_Protocol_h
#define FCArticleDownloadServiceType_Protocol_h
@import Foundation;

@protocol FCArticleDownloadServiceType 
/* instance methods */
- (id)fetchCachedArticleWithID:(id)id completionHandler:(id /* block */)handler;
- (id)downloadArticleWithID:(id)id completionHandler:(id /* block */)handler;
- (BOOL)isArticleDownloadedEnoughToRead:(id)read;
@end

#endif /* FCArticleDownloadServiceType_Protocol_h */