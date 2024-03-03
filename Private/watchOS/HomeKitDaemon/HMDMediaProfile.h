//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaProfile_h
#define HMDMediaProfile_h
@import Foundation;

#include "HMDAccessoryProfile.h"
#include "HMDMediaSession.h"
#include "HMEEventForwarder-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSDictionary, NSString;

@interface HMDMediaProfile : HMDAccessoryProfile<HMFLogging> {
  /* instance variables */
  struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *mediaRouteID;
@property (readonly, weak) NSObject<HMEEventForwarder> *eventForwarder;
@property (retain) HMDMediaSession *mediaSession;
@property (readonly, nonatomic) unsigned long long capability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)namespace;
+ (id)sessionNamespace;
+ (id)uniqueIdentifierFromAccessoryUUID:(id)uuid;
+ (id)uniqueIdentifierFromAccessory:(id)accessory;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAccessory:(id)accessory uniqueIdentifier:(id)identifier services:(id)services workQueue:(id)queue;
- (id)initWithAccessory:(id)accessory;
- (void)configureWithMessageDispatcher:(id)dispatcher configurationTracker:(id)tracker;
- (void)registerForMessages;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (BOOL)_updatePlayback:(id)playback;
- (void)_handleSetPlayback:(id)playback;
- (BOOL)_updateRefreshPlayback:(id)playback;
- (void)_handleRefreshPlayback:(id)playback;
- (BOOL)_updateAudioControl:(id)control;
- (void)_handleMediaSessionSetAudioControl:(id)control;
- (void)_handleMediaResponses:(id)responses message:(id)message;
- (void)updateWithResponses:(id)responses requestMessageInformation:(id)information;
- (void)_sessionPlaybackStateUpdated:(id)updated notifyXPCClients:(BOOL)xpcclients;
- (id)parseAndSetPlaybackStateFromResponsePayload:(id)payload mediaSessionState:(id)state outDidUpdateMediaSessionState:(BOOL *)state;
- (void)handleSetValue:(id)value withRequestProperty:(id)property withCompletionHandler:(id /* block */)handler;
- (void)_handleSetValue:(id)value withRequestProperty:(id)property withCompletionHandler:(id /* block */)handler;
- (void)_handleSetPower:(id)power;
- (void)handleSessionUpdatedNotification:(id)notification;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)notification;
- (void)handleSessionVolumeUpdatedNotification:(id)notification;
- (void)sessionAudioControlUpdated:(id)updated;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDMediaProfile_h */