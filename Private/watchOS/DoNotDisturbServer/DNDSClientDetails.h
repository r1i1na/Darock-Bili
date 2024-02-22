//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSClientDetails_h
#define DNDSClientDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface DNDSClientDetails : NSObject<NSCopying>

@property (readonly, nonatomic) BOOL forcesAssertionStatusUpdate;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) BOOL resolutionContextAssumingDeviceUILocked;
@property (readonly, nonatomic) BOOL userInteractionClient;
@property (readonly, nonatomic) BOOL persistentAssertionClient;
@property (readonly, nonatomic) BOOL syncSuppressedClient;
@property (readonly, nonatomic) BOOL iOS14SyncSuppressedClient;

/* class methods */
+ (id)detailsForBundleAtURL:(id)url;
+ (id)detailsForClientIdentifier:(id)identifier applicationBundleURL:(id)url;
+ (id)_detailsForClientIdentifier:(id)identifier bundleInfoDictionary:(id)dictionary;

/* instance methods */
- (id)initWithClientIdentifier:(id)identifier identifiers:(id)identifiers resolutionContextAssumingDeviceUILocked:(BOOL)uilocked userInteractionClient:(BOOL)client persistentAssertionClient:(BOOL)client syncSuppressedClient:(BOOL)client iOS14SyncSuppressedClient:(BOOL)client forcesAssertionStatusUpdate:(BOOL)update;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isResolutionContextAssumingDeviceUILocked;
- (BOOL)isUserInteractionClient;
- (BOOL)isPersistentAssertionClient;
- (BOOL)isSyncSuppressedClient;
- (BOOL)isIOS14SyncSuppressedClient;
@end

#endif /* DNDSClientDetails_h */