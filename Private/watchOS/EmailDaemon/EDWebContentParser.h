//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDWebContentParser_h
#define EDWebContentParser_h
@import Foundation;

#include "ECWebContentObserver-Protocol.h"
#include "ECWebContentObserver.h"
#include "EFSignpostable-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKScriptMessageHandler-Protocol.h"

@class EFCancelationToken, EFLocked, NSMutableArray, NSString, WKWebView, _WKRemoteObjectInterface;
@protocol EFScheduler;

@interface EDWebContentParser : NSObject<ECWebContentObserver, WKNavigationDelegate, EFSignpostable, WKScriptMessageHandler> {
  /* instance variables */
  _WKRemoteObjectInterface *_webContentObserverInterface;
  ECWebContentObserver *_webContentObserver;
  EFCancelationToken *_token;
  EFLocked *_state;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteContentParserLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contentRuleListsLock;
  NSMutableArray *_currentContentRuleLists;
  BOOL _contentRuleListsNeedUpdate;
  EFCancelationToken *_contentRuleListsObservationToken;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSObject<EFScheduler> *backgroundWorkScheduler;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL isDataDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

/* class methods */
+ (id)signpostLog;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options cancelationToken:(id)token;
- (void)dealloc;
- (void)test_tearDown;
- (id)webViewConfiguration;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (id)_richLinkMetadataScript;
- (void)parseHTMLData:(id)htmldata characterEncodingName:(id)name withOptions:(unsigned long long)options forMessage:(id)message withSubject:(id)subject completionHandler:(id /* block */)handler;
- (void)parseHTMLString:(id)htmlstring withOptions:(unsigned long long)options forMessage:(id)message withSubject:(id)subject completionHandler:(id /* block */)handler;
- (id)_extractPlainTextFromHTMLString:(id)htmlstring orWithData:(id)data characterEncodingName:(id)name;
- (id)_extractOneTimeCodeFromHTMLString:(id)htmlstring orWithData:(id)data characterEncodingName:(id)name withSubject:(id)subject;
- (id)_parseHTMLString:(id)htmlstring orWithData:(id)data characterEncodingName:(id)name withOptions:(unsigned long long)options messageID:(id)id;
- (void)baseURL:(id)url didRequestRemoteContentURLs:(id)urls;
- (void)_addRemoteContentWebViewObserver;
- (void)_enableDataDetection;
- (void)_disableDataDetection;
- (void)requestDataDetectionResultsWithBaseURL:(id)url;
- (void)receiveDataDetectionResults:(id)results;
- (id)_extractDataDetectorResultsMetadata:(id)metadata;
- (id)_getDataDetectionCategoryString:(int)string;
- (void)_updateContentRuleListsIfNeededForWebViewConfiguration:(id)configuration;
- (void)contentRuleListManager:(id)manager didAddRuleList:(id)list;
- (void)contentRuleListManager:(id)manager didUpdateContentRuleList:(id)list oldContentRuleList:(id)list;
- (void)contentRuleListManager:(id)manager didRemoveRuleList:(id)list;
- (void)_retrieveRichLinkMetadata:(id)metadata;
- (void)logWebBundleMessage:(id)message;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
@end

#endif /* EDWebContentParser_h */