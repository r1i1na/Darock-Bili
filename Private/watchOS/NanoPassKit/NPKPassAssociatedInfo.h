//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassAssociatedInfo_h
#define NPKPassAssociatedInfo_h
@import Foundation;

@class NSArray, PKTransitAppletState, PKTransitPassProperties;

@interface NPKPassAssociatedInfo : NSObject

@property (readonly, nonatomic) PKTransitPassProperties *transitProperties;
@property (readonly, nonatomic) PKTransitAppletState *transitAppletState;
@property (readonly, nonatomic) NSArray *balanceFields;
@property (readonly, nonatomic) NSArray *commutePlanFields;
@property (readonly, nonatomic) NSArray *tiles;
@property (readonly, nonatomic) unsigned long long rangingSuspensionReason;

/* instance methods */
- (id)initWithTransitProperties:(id)properties appletState:(id)state balanceFields:(id)fields commutePlanFields:(id)fields tiles:(id)tiles rangingSuspensionReason:(unsigned long long)reason;
- (id)description;
@end

#endif /* NPKPassAssociatedInfo_h */