//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODataURLSessionTaskDelegate_Protocol_h
#define GEODataURLSessionTaskDelegate_Protocol_h
@import Foundation;

@protocol GEODataURLSessionTaskDelegate <NSObject>
/* instance methods */
- (void)dataURLSession:(id)urlsession didCompleteTask:(id)task;
@optional
/* instance methods */
- (void)dataURLSession:(id)urlsession willSendRequest:(id)request forTask:(id)task completionHandler:(id /* block */)handler;
- (void)dataURLSession:(id)urlsession shouldConvertDataTask:(id)task toDownloadTaskForEstimatedResponseSize:(unsigned long long)size completionHandler:(id /* block */)handler;
@end

#endif /* GEODataURLSessionTaskDelegate_Protocol_h */