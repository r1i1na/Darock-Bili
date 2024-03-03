//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef DAAction_h
#define DAAction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface DAAction : NSObject<NSSecureCoding>

@property (nonatomic) unsigned long long itemChangeType;
@property (retain, nonatomic) id serverId;
@property (retain, nonatomic) id instanceId;
@property (retain, nonatomic) id changedItem;
@property (nonatomic) int changeId;
@property (retain, nonatomic) id forwardedAttendees;
@property (retain, nonatomic) id forwardedAttendeeUUIDs;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)message;
- (id)initWithItemChangeType:(unsigned long long)type changedItem:(id)item serverId:(id)id;
- (id)initWithItemChangeType:(unsigned long long)type changedItem:(id)item serverId:(id)id instanceId:(id)id;
- (id)stringForItemChangeType:(unsigned long long)type;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)_setChangedItem:(id)item;
@end

#endif /* DAAction_h */