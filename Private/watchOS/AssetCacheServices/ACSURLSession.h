//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 131.0.0.0.0
//
#ifndef ACSURLSession_h
#define ACSURLSession_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionDownloadDelegate-Protocol.h"
#include "NSURLSessionStreamDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol ACSURLSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface ACSURLSession : NSObject<NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>

@property BOOL canUseCachingServer;
@property (retain) NSObject<OS_os_log> *_logHandle;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property (retain) NSURLSession *_nsurlSession;
@property (retain) NSDictionary *_locateOptions;
@property (retain) NSObject<ACSURLSessionDelegate> *_clientDelegate;
@property (retain) NSOperationQueue *_clientDelegateOpQueue;
@property (retain) NSMutableDictionary *_tasks;
@property int _phase;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, retain) NSObject<ACSURLSessionDelegate> *delegate;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSDictionary *locateOptions;
@property (copy) NSString *sessionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSession;
+ (id)sessionWithConfiguration:(id)configuration canUseCachingServer:(BOOL)server locateOptions:(id)options;
+ (id)sessionWithConfiguration:(id)configuration canUseCachingServer:(BOOL)server locateOptions:(id)options delegate:(id)delegate delegateQueue:(id)queue;

/* instance methods */
- (id)dataTaskWithRequest:(id)request completionHandler:(id /* block */)handler;
- (id)dataTaskWithURL:(id)url completionHandler:(id /* block */)handler;
- (id)uploadTaskWithRequest:(id)request fromFile:(id)file completionHandler:(id /* block */)handler;
- (id)uploadTaskWithRequest:(id)request fromData:(id)data completionHandler:(id /* block */)handler;
- (id)downloadTaskWithRequest:(id)request completionHandler:(id /* block */)handler;
- (id)downloadTaskWithURL:(id)url completionHandler:(id /* block */)handler;
- (id)downloadTaskWithResumeData:(id)data completionHandler:(id /* block */)handler;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (void)resetWithCompletionHandler:(id /* block */)handler;
- (void)flushWithCompletionHandler:(id /* block */)handler;
- (void)getTasksWithCompletionHandler:(id /* block */)handler;
- (void)getAllTasksWithCompletionHandler:(id /* block */)handler;
- (id)dataTaskWithRequest:(id)request;
- (id)dataTaskWithURL:(id)url;
- (id)uploadTaskWithRequest:(id)request fromFile:(id)file;
- (id)uploadTaskWithRequest:(id)request fromData:(id)data;
- (id)uploadTaskWithStreamedRequest:(id)request;
- (id)downloadTaskWithRequest:(id)request;
- (id)downloadTaskWithURL:(id)url;
- (id)downloadTaskWithResumeData:(id)data;
- (id)initWithConfiguration:(id)configuration canUseCachingServer:(BOOL)server locateOptions:(id)options delegate:(id)delegate delegateQueue:(id)queue;
- (void)dealloc;
- (id)_keyForNSURLTask:(id)nsurltask;
- (void)_addTask:(id)task;
- (void)_onqueue_addTask:(id)task forNSURLTask:(id)nsurltask;
- (void)_removeTask:(id)task;
- (void)_onqueue_removeTaskForNSURLTask:(id)nsurltask;
- (id)_onqueue_taskForNSURLTask:(id)nsurltask;
- (id)_onqueue_uniqueTasks;
- (void)_locateCachingServerForURL:(id)url isUpload:(BOOL)upload completionHandler:(id /* block */)handler;
- (void)_onqueue_task:(id)_onqueue_task willUseCachingServer:(BOOL)server newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)_cancelTask:(id)task;
- (void)_cancelDownloadTask:(id)task byProducingResumeData:(id /* block */)data;
- (id)_downloadTaskWithResumeData:(id)data completionHandler:(id /* block */)handler;
- (void)_suspendTask:(id)task;
- (void)_resumeTask:(id)task;
- (void)_onqueue_resumeTask:(id)task;
- (void)_dataTask:(id)task completedWithData:(id)data response:(id)response error:(id)error completionHandler:(id /* block */)handler;
- (void)_downloadTask:(id)task completedWithLocation:(id)location response:(id)response error:(id)error completionHandler:(id /* block */)handler;
- (id)_resumeDataWithNSURLResumeData:(id)data originalRequest:(id)request currentRequest:(id)request error:(id *)error;
- (BOOL)_resumeData:(id)data toNSURLResumeData:(id *)data originalRequest:(id *)request currentRequest:(id *)request error:(id *)error;
- (id)_errorWithResumeDataFromError:(id)error originalRequest:(id)request currentRequest:(id)request;
- (id)_linkedLocationWithLocation:(id)location;
- (void)_copyAttributesFromNSURLTask:(id)nsurltask toNSURLTask:(id)nsurltask;
- (void)URLSession:(id)urlsession didBecomeInvalidWithError:(id)error;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task willBeginDelayedRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession taskIsWaitingForConnectivity:(id)connectivity;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeDownloadTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didBecomeStreamTask:(id)task;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didResumeAtOffset:(long long)offset expectedTotalBytes:(long long)bytes;
- (void)URLSession:(id)urlsession readClosedForStreamTask:(id)task;
- (void)URLSession:(id)urlsession writeClosedForStreamTask:(id)task;
- (void)URLSession:(id)urlsession betterRouteDiscoveredForStreamTask:(id)task;
- (void)URLSession:(id)urlsession streamTask:(id)task didBecomeInputStream:(id)stream outputStream:(id)stream;
@end

#endif /* ACSURLSession_h */