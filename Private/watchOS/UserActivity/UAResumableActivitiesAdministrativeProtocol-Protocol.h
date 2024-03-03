//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAResumableActivitiesAdministrativeProtocol_Protocol_h
#define UAResumableActivitiesAdministrativeProtocol_Protocol_h
@import Foundation;

@protocol UAResumableActivitiesAdministrativeProtocol <NSObject>
/* instance methods */
- (void)doNOP:(id)nop withCompletionHandler:(id /* block */)handler;
- (void)doSetDebugOption:(id)option value:(id)value;
- (void)doFindMatchingUserActivityForString:(id)string withCompletionHandler:(id /* block */)handler;
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(id /* block */)handler;
- (void)doCopyAllUUIDsOfType:(unsigned long long)type withCompletionHandler:(id /* block */)handler;
- (void)doCopyEnabledUUIDsWithCompletionHandler:(id /* block */)handler;
- (void)doCopyDebuggingInfo:(id)info completionHandler:(id /* block */)handler;
- (void)doCopyRecentActions:(id)actions completionHandler:(id /* block */)handler;
- (void)doCopyStatusString:(id)string options:(id)options completionHandler:(id /* block */)handler;
- (void)doFetchMoreAppSuggestions;
- (void)doCopyDynamicUserActivitiesString:(id)string completionHandler:(id /* block */)handler;
- (void)doTerminateServer;
- (void)doGetCurrentAdvertisedItemUUID:(id /* block */)uuid;
- (void)doInjectBTLEItem:(id)btleitem type:(unsigned long long)type identifier:(id)identifier title:(id)title activityPayload:(id)payload webPageURL:(id)url remoteModel:(id)model duration:(double)duration payloadDelay:(double)delay;
- (void)doCopySimulatorStatusString:(id)string completionHandler:(id /* block */)handler;
- (void)doCopyDefaults:(BOOL)defaults completionHandler:(id /* block */)handler;
- (void)doSetDefaults:(id)defaults archivedValue:(id)value;
- (void)doWillSaveDelegate:(id)delegate completionHandler:(id /* block */)handler;
- (void)doSetupNetworkedPairs:(id)pairs port:(long long)port;
- (void)doSetupRendevous:(id)rendevous domain:(id)domain activate:(BOOL)activate;
- (void)doReplayCommands:(id)commands completionHandler:(id /* block */)handler;
- (void)doSetRemotePasteboardAvailable:(BOOL)available;
- (void)doSetLocalPasteboardReflection:(BOOL)reflection;
- (void)doGetSFActivityAdvertisement:(id)advertisement completionHandler:(id /* block */)handler;
- (void)doGetPairedDevices:(id)devices completionHandler:(id /* block */)handler;
@end

#endif /* UAResumableActivitiesAdministrativeProtocol_Protocol_h */