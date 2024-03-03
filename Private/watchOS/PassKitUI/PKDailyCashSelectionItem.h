//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDailyCashSelectionItem_h
#define PKDailyCashSelectionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKIdentifiable-Protocol.h"

@class NSString, PKCurrencyAmount;

@interface PKDailyCashSelectionItem : NSObject<PKIdentifiable> {
  /* instance variables */
  unsigned long long _accountState;
}

@property (nonatomic) unsigned long long redemptionType;
@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (nonatomic) BOOL hasAccount;
@property (nonatomic) BOOL hasPendingApplication;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasRedeemed;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKDailyCashSelectionItem_h */