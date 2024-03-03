//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDContactRecord_h
#define _CDContactRecord_h
@import Foundation;

#include "NSManagedObject.h"
#include "_CDContact.h"

@class NSSet, NSString, NSURL;

@interface _CDContactRecord : NSManagedObject

@property (@dynamic, nonatomic) double creationDate;
@property (retain, @dynamic, nonatomic) NSString *displayName;
@property (@dynamic, nonatomic) int displayType;
@property (retain, @dynamic, nonatomic) NSString *identifier;
@property (retain, @dynamic, nonatomic) NSString *customIdentifier;
@property (retain, @dynamic, nonatomic) NSString *personId;
@property (@dynamic, nonatomic) int personIdType;
@property (@dynamic, nonatomic) int type;
@property (retain, @dynamic, nonatomic) NSSet *interactionRecipient;
@property (retain, @dynamic, nonatomic) NSSet *interactionSender;
@property (retain, @dynamic, nonatomic) NSURL *displayImageURL;
@property (@dynamic, nonatomic) int incomingRecipientCount;
@property (@dynamic, nonatomic) int outgoingRecipientCount;
@property (@dynamic, nonatomic) int incomingSenderCount;
@property (@dynamic, nonatomic) double firstIncomingRecipientDate;
@property (@dynamic, nonatomic) double firstOutgoingRecipientDate;
@property (@dynamic, nonatomic) double firstIncomingSenderDate;
@property (@dynamic, nonatomic) double lastIncomingRecipientDate;
@property (@dynamic, nonatomic) double lastOutgoingRecipientDate;
@property (@dynamic, nonatomic) double lastIncomingSenderDate;
@property (@dynamic, nonatomic) long long participantStatus;
@property (retain) _CDContact *contact;

/* instance methods */
@end

#endif /* _CDContactRecord_h */