//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccountManager_Protocol_h
#define HMDAccountManager_Protocol_h
@import Foundation;

@protocol HMDAccountManager <NSObject>

@property (readonly, nonatomic) HMDBackingStore *backingStore;

/* instance methods */
- (BOOL)shouldCacheAccount:(id)account;
- (BOOL)shouldSyncAccount:(id)account;
- (BOOL)shouldSyncDevice:(id)device;
- (BOOL)shouldAccount:(id)account pushbackModel:(id)model actions:(id)actions;
- (BOOL)shouldDevice:(id)device processModel:(id)model actions:(id)actions;
- (BOOL)isCurrentDeviceDataOwnerForDevice:(id)device;
@optional
/* instance methods */
- (id)primaryHandleForAccount:(id)account;
@end

#endif /* HMDAccountManager_Protocol_h */