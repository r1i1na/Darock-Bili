//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebDownloadInternal_h
#define WebDownloadInternal_h
@import Foundation;

#include "NSURLDownloadDelegate-Protocol.h"

@class NSString;
@protocol {RetainPtr<id>="m_ptr"^v};

@interface WebDownloadInternal : NSObject<NSURLDownloadDelegate> {
  /* instance variables */
  struct RetainPtr<id> { void *m_ptr; } realDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)setRealDelegate:(id)delegate;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)downloadDidBegin:(id)begin;
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;
- (void)download:(id)download didReceiveResponse:(id)response;
- (void)download:(id)download didReceiveDataOfLength:(unsigned long long)length;
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)filename;
- (void)download:(id)download didCreateDestination:(id)destination;
- (void)downloadDidFinish:(id)finish;
- (void)download:(id)download didFailWithError:(id)error;
@end

#endif /* WebDownloadInternal_h */