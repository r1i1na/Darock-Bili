//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaAccessoryAdvertisement_h
#define HMDMediaAccessoryAdvertisement_h
@import Foundation;

#include "HMDAccessoryAdvertisement.h"
#include "HMDMediaOutputDevice.h"
#include "HMDWACAccessoryAssociation-Protocol.h"

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement<HMDWACAccessoryAssociation> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMDMediaOutputDevice *outputDevice;
@property BOOL associated;

/* class methods */
+ (BOOL)canAirPortExpressSupportMediaAccessory:(id)accessory;

/* instance methods */
- (id)initWithOutputDevice:(id)device;
- (BOOL)matchesWACDeviceID:(id)id;
- (id)description;
- (BOOL)isAssociated;
- (long long)associationOptions;
@end

#endif /* HMDMediaAccessoryAdvertisement_h */