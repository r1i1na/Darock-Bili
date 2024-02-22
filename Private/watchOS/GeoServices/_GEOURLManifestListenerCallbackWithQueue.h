//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOURLManifestListenerCallbackWithQueue_h
#define _GEOURLManifestListenerCallbackWithQueue_h
@import Foundation;

#include "_GEOURLManifestListenerCallback-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, OS_voucher;

@interface _GEOURLManifestListenerCallbackWithQueue : NSObject<_GEOURLManifestListenerCallback> {
  /* instance variables */
  id /* block */ _handler;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_voucher> *_voucher;
  unsigned int _qos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue handler:(id /* block */)handler;
- (void)performHandler:(BOOL)handler;
@end

#endif /* _GEOURLManifestListenerCallbackWithQueue_h */