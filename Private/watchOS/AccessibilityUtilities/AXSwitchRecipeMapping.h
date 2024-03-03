//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXSwitchRecipeMapping_h
#define AXSwitchRecipeMapping_h
@import Foundation;

#include "AXReplayableGesture.h"
#include "AXSwitchGameControlButtonPress.h"

@class NSString, NSUUID;

@interface AXSwitchRecipeMapping : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *longPressAction;
@property (retain, nonatomic) AXReplayableGesture *gesture;
@property (retain, nonatomic) AXReplayableGesture *longPressGesture;
@property (nonatomic) struct CGPoint { double x0; double x1; } holdPoint;
@property (nonatomic) BOOL optional;
@property (retain, nonatomic) AXSwitchGameControlButtonPress *gameControlButtonPress;
@property (retain, nonatomic) AXSwitchGameControlButtonPress *longPressGameControlButtonPress;
@property (copy, nonatomic) NSUUID *switchUUID;
@property (nonatomic) long long switchOriginalAction;

/* class methods */
+ (id)recipeMappingWithDictionaryRepresentation:(id)representation;

/* instance methods */
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (BOOL)isOptional;
@end

#endif /* AXSwitchRecipeMapping_h */