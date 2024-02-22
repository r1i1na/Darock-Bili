//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSXPCInternalTesting_Protocol_h
#define IDSXPCInternalTesting_Protocol_h
@import Foundation;

@protocol IDSXPCInternalTesting <NSObject>
/* instance methods */
- (void)oneToOneECCQuicktestEncryptionWithData:(id)data completion:(id /* block */)completion;
- (void)registeredIdentityTimestampsWithBlock:(id /* block */)block;
- (void)triggerKeyRollWithCompletion:(id /* block */)completion;
- (void)setForceKeyRoll:(BOOL)roll withCompletion:(id /* block */)completion;
- (void)currentECVersionWithBlock:(id /* block */)block;
- (void)setECVersion:(unsigned int)ecversion withCompletion:(id /* block */)completion;
- (void)clearCacheWithCompletion:(id /* block */)completion;
- (void)checkServerStorageForService:(id)service withCompletion:(id /* block */)completion;
- (void)tapToRadarWithTitle:(id)title message:(id)message context:(id)context completion:(id /* block */)completion;
- (void)popupPromptWithTitle:(id)title message:(id)message defaultButton:(id)button defaultUrl:(id)url alternateButton:(id)button alternatrUrl:(id)url completion:(id /* block */)completion;
- (void)autoBugCaptureWithCompletion:(id /* block */)completion;
- (void)fetchEndpointCacheStateForServiceIdentifier:(id)identifier localURI:(id)uri remoteURI:(id)uri completion:(id /* block */)completion;
- (void)fetchTransparentEndpointsForServiceIdentifier:(id)identifier localURI:(id)uri remoteURI:(id)uri verifyAgainstTrustCircle:(BOOL)circle completion:(id /* block */)completion;
- (void)kickVerificationForServiceIdentifier:(id)identifier localURI:(id)uri remoteURI:(id)uri completion:(id /* block */)completion;
- (void)fetchVerifierKVSTrustedDevicesWithCompletion:(id /* block */)completion;
- (void)removeAllKVSTrustedDevices:(id /* block */)devices;
- (void)fetchCurrentDeviceKVSKey:(id /* block */)kvskey;
- (void)updateCurrentDeviceInKVS:(id /* block */)kvs;
- (void)triggerKTCDPAccountStatusNotificationWithAccountStatus:(long long)status;
- (void)removeConnectionWithConnectionName:(id)name completionHandler:(id /* block */)handler;
- (void)deviceChangedForDeviceID:(id)id isNearby:(BOOL)nearby isConnected:(BOOL)connected isCloudConnected:(BOOL)connected completionHandler:(id /* block */)handler;
- (void)fetchPrivateClientDataDescriptionForService:(id)service completion:(id /* block */)completion;
- (void)fetchPrivateDeviceDataDescription:(id /* block */)description;
- (void)fetchXPCStateDescriptionForProcesses:(id)processes withCompletion:(id /* block */)completion;
- (void)fetchStoredUserDescriptions:(id /* block */)descriptions;
- (void)assertTransportThreadRealTimeMode:(BOOL)mode completionHandler:(id /* block */)handler;
- (void)forceAccountRenewalOnService:(id)service;
- (void)clearCacheAndUpdatePeersForService:(id)service;
- (void)sendFakePushFromFile:(id)file completion:(id /* block */)completion;
- (void)postNewDeviceNotification:(id)notification iCloudSignIn:(BOOL)in iMessageSignIn:(BOOL)in facetimeSignIn:(BOOL)in forAppleID:(id)id;
- (void)triggerFirewallDBCleanupWithInterval:(double)interval;
- (void)triggerAllFirewallNotificationsWithHandle:(id)handle delay:(double)delay service:(id)service;
- (void)triggerRestrictedMessageCleanup;
@end

#endif /* IDSXPCInternalTesting_Protocol_h */