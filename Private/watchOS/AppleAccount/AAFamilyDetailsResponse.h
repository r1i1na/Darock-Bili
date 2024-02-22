//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFamilyDetailsResponse_h
#define AAFamilyDetailsResponse_h
@import Foundation;

#include "AAResponse.h"
#include "AAFamilyMember.h"

@class NSArray, NSString;

@interface AAFamilyDetailsResponse : AAResponse

@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) AAFamilyMember *organizer;
@property (readonly, nonatomic) AAFamilyMember *me;
@property (readonly, nonatomic) NSArray *invites;
@property (readonly, nonatomic) NSArray *pendingMembers;
@property (readonly, nonatomic) long long memberCount;
@property (readonly, nonatomic) long long pendingMemberCount;
@property (readonly, nonatomic) long long pendingInviteCount;
@property (readonly, nonatomic) BOOL canAddMembers;
@property (readonly, nonatomic) BOOL canAddChildMembers;
@property (readonly, nonatomic) NSString *addMemberInstructions;
@property (readonly, nonatomic) NSString *childAccountPrompt;
@property (readonly, nonatomic) NSString *childAccountButtonTitle;
@property (readonly, nonatomic) NSArray *firstNames;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end

#endif /* AAFamilyDetailsResponse_h */