//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversation_h
#define TUConversation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUConversationActivitySession.h"
#include "TUConversationHandoffContext.h"
#include "TUConversationHandoffEligibility.h"
#include "TUConversationLink.h"
#include "TUConversationMember.h"
#include "TUConversationParticipantAssociation.h"
#include "TUConversationPresentationContext.h"
#include "TUConversationProvider.h"
#include "TUConversationReport.h"
#include "TUFeatureFlags-Protocol.h"
#include "TUHandle.h"

@class NSArray, NSObject, NSSet, NSString, NSUUID;

@interface TUConversation : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSArray *supportedMediaTypes;
@property (nonatomic) unsigned long long presentationMode;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (retain, nonatomic) TUConversationLink *link;
@property (nonatomic) long long state;
@property (nonatomic) long long letMeInRequestState;
@property (nonatomic) BOOL hasReceivedLetMeInRequest;
@property (nonatomic) long long avcSessionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) unsigned long long avMode;
@property (nonatomic) BOOL locallyCreated;
@property (nonatomic) BOOL hasJoined;
@property (nonatomic) BOOL isAnyOtherAccountDeviceActive;
@property (nonatomic) BOOL pendingConversation;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (retain, nonatomic) TUConversationParticipantAssociation *localParticipantAssociation;
@property (nonatomic) BOOL oneToOneHandoffOngoing;
@property (retain, nonatomic) TUConversationHandoffEligibility *handoffEligibility;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *pendingMembers;
@property (copy, nonatomic) NSSet *kickedMembers;
@property (copy, nonatomic) NSSet *rejectedMembers;
@property (copy, nonatomic) NSSet *lightweightMembers;
@property (copy, nonatomic) NSSet *otherInvitedHandles;
@property (nonatomic) BOOL ignoreLMIRequests;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (copy, nonatomic) NSSet *activeLightweightParticipants;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (copy, nonatomic) TUConversationReport *report;
@property (nonatomic) BOOL oneToOneModeEnabled;
@property (nonatomic) BOOL backedByGroupSession;
@property (copy, nonatomic) NSSet *activitySessions;
@property (copy, nonatomic) NSSet *systemActivitySessions;
@property (copy, nonatomic) TUConversationActivitySession *stagedActivitySession;
@property (copy, nonatomic) NSSet *virtualParticipants;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (nonatomic) BOOL fromStorage;
@property (retain, nonatomic) NSUUID *selectiveSharingSessionUUID;
@property (nonatomic) BOOL screening;
@property (nonatomic) BOOL hostedOnCurrentDevice;
@property (nonatomic) BOOL endpointOnCurrentDevice;
@property (retain, nonatomic) id conversationFailureContext;
@property (retain, nonatomic) TUConversationProvider *provider;
@property (nonatomic) BOOL spatialPersonaEnabled;
@property (nonatomic) BOOL cameraMixedWithScreen;
@property (retain, nonatomic) TUConversationHandoffContext *handoffContext;
@property (retain, nonatomic) NSObject<TUFeatureFlags> *featureFlags;
@property (readonly, copy, nonatomic) NSSet *mergedActiveRemoteParticipants;
@property (readonly, copy, nonatomic) NSSet *mergedRemoteMembers;
@property (readonly, nonatomic) TUConversationPresentationContext *presentationContext;
@property (readonly, nonatomic) BOOL isContinuitySession;
@property (readonly, nonatomic) unsigned long long resolvedAudioVideoMode;

/* class methods */
+ (id)emptyConversationWithGroupUUID:(id)uuid;
+ (id)numberFormatter;
+ (id)mergedRemoteMemberHandlesFromRemoteMembers:(id)members withLocalMember:(id)member removingLocallyAssociatedMember:(BOOL)member;
+ (id)mergedRemoteMembers:(id)members withLocalMember:(id)member removingLocallyAssociatedMember:(BOOL)member;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid groupUUID:(id)uuid;
- (id)initWithUUID:(id)uuid groupUUID:(id)uuid provider:(id)provider;
- (id)initWithConversation:(id)conversation;
- (id)displayName;
- (id)messagesGroupPhotoData;
- (BOOL)eligibleForDowngradeToAVModeNoneFromUI;
- (id)joinedActivitySession;
- (BOOL)hasJoinedActivitySession;
- (BOOL)isRepresentedByRemoteMembers:(id)members andLink:(id)link;
- (BOOL)isVideo;
- (void)setVideo:(BOOL)video;
- (id)remoteParticipantForLightweightParticipantHandle:(id)handle;
- (BOOL)shouldShowInvitationOfStyles:(long long)styles forHandle:(id)handle defaultValue:(BOOL)value;
- (BOOL)shouldShowInvitationUserNotificationForHandle:(id)handle;
- (BOOL)shouldShowInvitationRingingUIForHandle:(id)handle;
- (BOOL)shouldShowInvitationRingingUIForAnyHandleType;
- (BOOL)supportsAVMode:(unsigned long long)avmode;
- (BOOL)supportsMediaType:(long long)type;
- (void)updateParticipantMediaPrioritiesWithConversation:(id)conversation;
- (void)updatePresentationModeIfNecessary;
- (id)bundleIdentifier;
- (id)handles;
- (id)contactNamesByHandleWithContactsDataSource:(id)source;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEqualToConversation:(id)conversation;
- (BOOL)isAudioEnabled;
- (BOOL)isVideoEnabled;
- (BOOL)isScreenEnabled;
- (BOOL)isLocallyCreated;
- (BOOL)isSpatialPersonaEnabled;
- (BOOL)isCameraMixedWithScreen;
- (BOOL)isVideoPaused;
- (BOOL)isPendingConversation;
- (BOOL)isOneToOneHandoffOngoing;
- (BOOL)isOneToOneModeEnabled;
- (BOOL)isBackedByGroupSession;
- (BOOL)isFromStorage;
- (BOOL)isScreening;
@end

#endif /* TUConversation_h */