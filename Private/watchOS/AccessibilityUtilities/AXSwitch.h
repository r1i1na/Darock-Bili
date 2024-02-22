//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXSwitch_h
#define AXSwitch_h
@import Foundation;

#include "AXMIDIEvent.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface AXSwitch : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long action;
@property (nonatomic) long long longPressAction;
@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) BOOL hasLongPressAction;
@property (readonly, nonatomic) BOOL supportsLongPress;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) long long buttonNumber;
@property (nonatomic) long long headSwitch;
@property (retain, nonatomic) AXMIDIEvent *midiEvent;
@property (nonatomic) long long accessibilityEventUsagePage;
@property (nonatomic) long long accessibilityEventUsage;
@property (nonatomic) long long accessibilityEventModifierFlags;
@property (copy, nonatomic) NSString *remoteSwitchIdentifier;
@property (copy, nonatomic) NSString *remoteDeviceName;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)switchWithAction:(long long)action name:(id)name source:(id)source type:(id)type;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithAction:(long long)action name:(id)name source:(id)source type:(id)type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* AXSwitch_h */