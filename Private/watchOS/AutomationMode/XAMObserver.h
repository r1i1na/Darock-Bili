//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 26.0.0.0.0
//
#ifndef XAMObserver_h
#define XAMObserver_h
@import Foundation;

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface XAMObserver : NSObject {
  /* instance variables */
  NSMutableDictionary *_handlers;
  BOOL _hasReceivedAutomationModeEnabledState;
  int _observationToken;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id /* block */ readerConnectionFactory;
@property (readonly) NSString *changeNotificationName;
@property (readonly) BOOL isAutomationModeEnabled;
@property (readonly) BOOL automationModeRequiresAuthentication;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithChangeNotificationName:(id)name readerConnectionFactory:(id /* block */)factory;
- (void)dealloc;
- (BOOL)currentAutomationModeEnabledStateFromDaemon;
- (void)_listenForAutomationModeChangeNotifications;
- (void)_notifyHandlers;
- (id)registerAutomationModeChangeHandlerOnQueue:(id)queue withBlock:(id /* block */)block;
- (void)unregisterAutomationModeChangeHandler:(id)handler;
@end

#endif /* XAMObserver_h */