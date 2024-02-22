//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem_h
#define PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem_h
@import Foundation;

#include "PKPayLaterFinancingPlanPaymentScheduleComposerItem-Protocol.h"

@class NSString, PKPayLaterFinancingPlan, PKPayLaterPayment;

@interface PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem : NSObject<PKPayLaterFinancingPlanPaymentScheduleComposerItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKPayLaterPayment *payment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan payment:(id)payment;
- (void)populateRow:(id)row;
- (unsigned long long)type;
- (id)installmentIdentifier;
- (id)paymentIdentifier;
- (id)date;
@end

#endif /* PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem_h */