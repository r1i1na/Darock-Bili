//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef _RUILoaderSessionDelegateAdapter_h
#define _RUILoaderSessionDelegateAdapter_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSString;

@interface _RUILoaderSessionDelegateAdapter : NSObject<NSURLSessionTaskDelegate>

@property (weak, nonatomic) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
@end

#endif /* _RUILoaderSessionDelegateAdapter_h */