//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountRewards_h
#define PKAccountRewards_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPaymentTransactionRewards.h"
#include "PKRecordObject-Protocol.h"

@class NSSet, NSString;

@interface PKAccountRewards : NSObject<NSSecureCoding, PKRecordObject>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSSet *transactionIdentifiers;
@property (copy, nonatomic) NSSet *rewardsAddedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithRecord:(id)record;
- (void)encodeWithRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccountEvent:(id)event;
@end

#endif /* PKAccountRewards_h */