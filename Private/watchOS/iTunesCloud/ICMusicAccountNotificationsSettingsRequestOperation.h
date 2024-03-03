//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicAccountNotificationsSettingsRequestOperation_h
#define ICMusicAccountNotificationsSettingsRequestOperation_h
@import Foundation;

#include "ICRequestOperation.h"
#include "ICMusicAccountNotificationsSettingsResponse.h"
#include "ICStoreRequestContext.h"
#include "ICStoreURLRequest.h"

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  ICStoreRequestContext *_requestContext;
  ICStoreURLRequest *_storeURLRequest;
  ICMusicAccountNotificationsSettingsResponse *_response;
  long long _requestMethod;
  NSDictionary *_bodyDictionary;
}

/* instance methods */
- (id)initWithRequestContext:(id)context withRequestMethod:(long long)method;
- (id)initWithRequestContext:(id)context withRequestMethod:(long long)method andBodyDictionary:(id)dictionary;
- (void)performRequestWithResponseHandler:(id /* block */)handler;
- (void)execute;
- (void)cancel;
@end

#endif /* ICMusicAccountNotificationsSettingsRequestOperation_h */