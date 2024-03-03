//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDIncomingHomeInvitation_h
#define HMDIncomingHomeInvitation_h
@import Foundation;

#include "HMDHomeInvitation.h"
#include "HMDAccount.h"

@class HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation

@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly) HMDAccount *inviterAccount;
@property (readonly, copy) HMFPairingIdentity *inviterIdentity;
@property (readonly, copy, nonatomic) NSString *inviterUserID;
@property (readonly, copy, nonatomic) NSString *inviterMergeID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInviterAccount:(id)account invitationIdentifier:(id)identifier invitationState:(long long)state homeName:(id)name homeUUID:(id)uuid inviterIdentity:(id)identity expiryDate:(id)date;
- (id)initWithInviterAccount:(id)account invitationIdentifier:(id)identifier invitationState:(long long)state homeName:(id)name homeUUID:(id)uuid inviterIdentity:(id)identity inviterMergeID:(id)id expiryDate:(id)date;
- (BOOL)refreshDisplayName;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)describeWithFormat;
@end

#endif /* HMDIncomingHomeInvitation_h */