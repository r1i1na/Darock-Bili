//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSMutableServiceInterface_h
#define BSMutableServiceInterface_h
@import Foundation;

#include "BSServiceInterface.h"

@class BSObjCProtocol, NSString;

@interface BSMutableServiceInterface : BSServiceInterface

@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (@dynamic, nonatomic) long long clientMessagingExpectation;
@property (copy, @dynamic, nonatomic) BSObjCProtocol *server;
@property (copy, @dynamic, nonatomic) BSObjCProtocol *client;

/* class methods */
+ (id)interfaceWithIdentifier:(id)identifier;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* BSMutableServiceInterface_h */