//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVLeaseCertificateRequestOperation_h
#define SSVLeaseCertificateRequestOperation_h
@import Foundation;

#include "SSVComplexOperation.h"
#include "SSURLBag.h"
#include "SSVPlaybackLeaseConfiguration.h"

@class NSString;
@protocol OS_dispatch_semaphore;

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
  SSVPlaybackLeaseConfiguration *_configuration;
  SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (copy) id /* block */ outputBlock;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)initWithURLBag:(id)urlbag;
- (void)cancel;
- (void)main;
- (id)_resolveCertificateURLReturningError:(id *)error;
@end

#endif /* SSVLeaseCertificateRequestOperation_h */