//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTodoistSessionManager_h
#define WFTodoistSessionManager_h
@import Foundation;

#include "WFOAuth2Credential.h"

@class NSString, NSURL, NSURLSession;

@interface WFTodoistSessionManager : NSObject

@property (copy, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly, copy, nonatomic) NSURL *baseURL;

/* instance methods */
- (id)init;
- (id)initWithSessionConfiguration:(id)configuration;
- (void)getProjectsWithCompletionHandler:(id /* block */)handler;
- (void)createFileOnItemWithId:(long long)id withFile:(id)file completionHandler:(id /* block */)handler;
- (void)createItemInProject:(id)project content:(id)content dueDateString:(id)string reminderDateString:(id)string reminderService:(long long)service priority:(long long)priority note:(id)note completionHandler:(id /* block */)handler;
- (void)requestWithCommands:(id)commands resourceTypes:(id)types completionHandler:(id /* block */)handler;
@end

#endif /* WFTodoistSessionManager_h */