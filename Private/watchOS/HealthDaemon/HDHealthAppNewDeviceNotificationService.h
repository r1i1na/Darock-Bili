//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHealthAppNewDeviceNotificationService_h
#define HDHealthAppNewDeviceNotificationService_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"

@class IDSService, NSString;

@interface HDHealthAppNewDeviceNotificationService : NSObject<IDSServiceDelegate>

@property (retain, nonatomic) IDSService *notificationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)sendNewDeviceNotificationWithMessageKind:(long long)kind error:(id *)error;
@end

#endif /* HDHealthAppNewDeviceNotificationService_h */