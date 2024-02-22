//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDSeedingClient_h
#define DEDSeedingClient_h
@import Foundation;

#include "DEDBugSessionConfiguration.h"
#include "DEDSeedingClientDelegate-Protocol.h"
#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURLSession;
@protocol OS_os_log;

@interface DEDSeedingClient : NSObject<NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDBugSessionConfiguration *config;
@property (weak) NSObject<DEDSeedingClientDelegate> *uploadDelegate;
@property (retain) NSURLSession *foregroundSession;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) NSURLSession *backgroundSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration sessionID:(id)id delegate:(id)delegate;
- (void)seedingLoginWithSuccess:(id /* block */)success error:(id /* block */)error;
- (void)sendFile:(id)file promise:(id)promise withCompletion:(id /* block */)completion;
- (void)getFilerTokenForPromise:(id)promise withSuccess:(id /* block */)success error:(id /* block */)error;
- (void)dataForURLRequest:(id)urlrequest success:(id /* block */)success error:(id /* block */)error;
- (void)jsonForURLRequest:(id)urlrequest success:(id /* block */)success error:(id /* block */)error;
- (void)dataForURL:(id)url success:(id /* block */)success error:(id /* block */)error;
- (void)jsonForURL:(id)url success:(id /* block */)success error:(id /* block */)error;
- (void)postToURL:(id)url parameters:(id)parameters encoding:(unsigned long long)encoding success:(id /* block */)success error:(id /* block */)error;
- (void)putToURL:(id)url parameters:(id)parameters encoding:(unsigned long long)encoding success:(id /* block */)success error:(id /* block */)error;
- (void)deleteResourceAtURL:(id)url success:(id /* block */)success error:(id /* block */)error;
- (void)performHTTPMethod:(id)httpmethod toURL:(id)url parameters:(id)parameters encoding:(unsigned long long)encoding success:(id /* block */)success error:(id /* block */)error;
- (id)beginUploadWithRequest:(id)request fromFileURL:(id)url error:(id *)error;
- (id)ongoingUploads;
- (void)cleanup;
- (void)makePromiseWithUUID:(id)uuid extensionID:(id)id success:(id /* block */)success error:(id /* block */)error;
- (void)getPromise:(id)promise withSuccess:(id /* block */)success error:(id /* block */)error;
- (void)updatePromise:(id)promise withAttachmentGroup:(id)group status:(long long)status success:(id /* block */)success error:(id /* block */)error;
- (void)updatePromise:(id)promise withFilename:(id)filename size:(long long)size status:(long long)status success:(id /* block */)success error:(id /* block */)error;
- (void)updatePromise:(id)promise withFilename:(id)filename size:(long long)size extensionID:(id)id status:(long long)status success:(id /* block */)success error:(id /* block */)error;
- (void)cancelPromise:(id)promise withSuccess:(id /* block */)success error:(id /* block */)error;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (id)_serverErrorFromTask:(id)task;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (id)baseURL;
- (id)seedingURL;
- (id)loginWithTokenURL;
- (id)newFilePromiseURL;
- (id)filePromiseURLForPromise:(id)promise;
- (id)newFilerTokenURL;
- (id)filerURL;
- (id)HTTPErrorWithResponse:(id)response withData:(id)data;
- (id)promiseConfiguration;
- (id)bodyDataForParameters:(id)parameters encoding:(unsigned long long)encoding error:(id *)error;
- (id)contentTypeForParameterEncoding:(unsigned long long)encoding;
- (id)_formEncodedBodyForDictionary:(id)dictionary;
- (id)_keyValuePairsForKey:(id)key value:(id)value;
- (BOOL)isLoggedIn;
@end

#endif /* DEDSeedingClient_h */