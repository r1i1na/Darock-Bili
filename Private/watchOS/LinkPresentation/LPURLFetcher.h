//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPURLFetcher_h
#define LPURLFetcher_h
@import Foundation;

#include "LPFetcher.h"
#include "_WKDataTaskDelegate-Protocol.h"

@class NSMutableData, NSString, NSURL, WKWebView;

@interface LPURLFetcher : LPFetcher<_WKDataTaskDelegate> {
  /* instance variables */
  id /* block */ _completionHandler;
  WKWebView *_webView;
  NSMutableData *_data;
  NSString *_MIMEType;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) Class responseClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)fetchWithConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)dataTask:(id)task didReceiveResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)dataTask:(id)task didReceiveData:(id)data;
- (void)dataTask:(id)task didCompleteWithError:(id)error;
- (void)cancel;
- (void)_failedWithErrorCode:(long long)code underlyingError:(id)error;
- (void)_completedWithData:(id)data MIMEType:(id)mimetype error:(id)error;
@end

#endif /* LPURLFetcher_h */