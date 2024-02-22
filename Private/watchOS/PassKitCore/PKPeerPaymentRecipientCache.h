//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRecipientCache_h
#define PKPeerPaymentRecipientCache_h
@import Foundation;

#include "PKMapContainer.h"

@class NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapAccessLock;
  PKMapContainer *_mapContainer;
  NSTimer *_mapNeedsWriteTimer;
}

/* class methods */
+ (id)sharedCache;
+ (id)_instanceName;

/* instance methods */
- (id)init;
- (id)__init;
- (void)dealloc;
- (id)recipientForRecipientAddress:(id)address;
- (void)cacheRecipient:(id)recipient forRecipientAddress:(id)address;
- (void)purgeRecipientWithRecipientAddress:(id)address;
- (BOOL)purgeCache;
- (BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)address;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)address;
- (id)_keyForRecipientAddress:(id)address;
- (BOOL)_canReadMap;
- (BOOL)_canWriteMap;
- (void)_handlePurgedNotification:(id)notification;
- (void)_handleDiskMapChangedNotification:(id)notification;
- (void)_updateMapsFromDisk;
- (void)_locked_setMapNeedsWrite;
- (BOOL)_writeMapToDisk;
@end

#endif /* PKPeerPaymentRecipientCache_h */