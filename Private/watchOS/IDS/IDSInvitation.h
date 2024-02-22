//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSInvitation_h
#define IDSInvitation_h
@import Foundation;

#include "IDSInvitationContext-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface IDSInvitation : NSObject

@property (readonly, copy, nonatomic) NSUUID *uniqueID;
@property (readonly, copy, nonatomic) NSString *senderMergeID;
@property (readonly, copy, nonatomic) NSString *selfHandle;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSObject<IDSInvitationContext> *context;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

/* instance methods */
- (id)initWithState:(long long)state expirationDate:(id)date uniqueID:(id)id context:(id)context;
@end

#endif /* IDSInvitation_h */