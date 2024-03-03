//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOAuth2WebAuthorizationSession_h
#define WFOAuth2WebAuthorizationSession_h
@import Foundation;

#include "WFOAuth2AuthorizationSession-Protocol.h"
#include "WFOAuth2SessionManager.h"

@class NSString, NSURL;

@interface WFOAuth2WebAuthorizationSession : NSObject<WFOAuth2AuthorizationSession>

@property (readonly, nonatomic) WFOAuth2SessionManager *sessionManager;
@property (readonly, copy, nonatomic) NSString *responseType;
@property (readonly, nonatomic) NSString *state;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *responseKey;
@property (readonly, copy, nonatomic) NSURL *authorizationURL;
@property (readonly, copy, nonatomic) NSURL *redirectURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSessionManager:(id)manager authorizationURL:(id)url responseType:(id)type redirectURI:(id)uri specifyRedirectURI:(BOOL)uri completionHandler:(id /* block */)handler;
- (BOOL)resumeSessionWithResponseObject:(id)object;
- (BOOL)resumeSessionWithURL:(id)url;
@end

#endif /* WFOAuth2WebAuthorizationSession_h */