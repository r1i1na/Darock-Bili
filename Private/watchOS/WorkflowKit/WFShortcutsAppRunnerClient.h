//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFShortcutsAppRunnerClient_h
#define WFShortcutsAppRunnerClient_h
@import Foundation;

#include "WFWorkflowRunnerClient.h"

@interface WFShortcutsAppRunnerClient : WFWorkflowRunnerClient
/* instance methods */
- (id)initWithWorkflow:(id)workflow state:(id)state runSource:(id)source input:(id)input remoteDialogPresenterEndpoint:(id)endpoint requestOutput:(BOOL)output;
- (id)initWithWorkflowData:(id)data runSource:(id)source;
- (id)initWithIdentifier:(id)identifier name:(id)name action:(id)action metadata:(id)metadata runSource:(id)source remoteDialogPresenterEndpoint:(id)endpoint;
- (id)initWithContextualAction:(id)action;
- (id)runWorkflowWithRequest:(id)request descriptor:(id)descriptor completion:(id /* block */)completion;
@end

#endif /* WFShortcutsAppRunnerClient_h */