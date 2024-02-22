//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAUserActivityClientProtocol_Protocol_h
#define UAUserActivityClientProtocol_Protocol_h
@import Foundation;

@protocol UAUserActivityClientProtocol <NSObject>
/* instance methods */
- (void)doInitializeWithClientVersion:(long long)version clientInfo:(id)info completionHandler:(id /* block */)handler;
- (void)doFetchUserActivityInfoWithUUID:(id)uuid completionHandler:(id /* block */)handler;
- (void)doUpdateUserActivityInfo:(id)info makeCurrent:(BOOL)current completionHandler:(id /* block */)handler;
- (void)doUpdateUserActivityWithUUID:(id)uuid setActive:(BOOL)active;
- (void)doDeleteUserActivityWithUUID:(id)uuid;
- (void)doAddDynamicUserActivity:(id)activity matching:(id)matching;
- (void)doRemoveDynamicUserActivity:(id)activity matching:(id)matching;
- (void)doMarkUserActivityAsDirty:(id)dirty forceImmediate:(BOOL)immediate webpageURL:(id)url expiration:(id)expiration hasiCloudDocument:(BOOL)document hasUnsynchronizediCloudDoc:(BOOL)doc;
- (void)doPinUserActivityInfo:(id)info completionHandler:(id /* block */)handler;
- (void)doGetCurrentUserActivityInfo:(id /* block */)info;
- (void)doDetermineIfUserActivityIsCurrent:(id)current completionHandler:(id /* block */)handler;
- (void)doGetUserActivityProxiesWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)doGetLoggingFileForClient:(id)client options:(id)options completionHandler:(id /* block */)handler;
- (void)doRegisterAsProxyApplicationForPid:(int)pid options:(id)options completionHandler:(id /* block */)handler;
@end

#endif /* UAUserActivityClientProtocol_Protocol_h */