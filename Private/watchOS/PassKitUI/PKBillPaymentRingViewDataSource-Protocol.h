//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBillPaymentRingViewDataSource_Protocol_h
#define PKBillPaymentRingViewDataSource_Protocol_h
@import Foundation;

@protocol PKBillPaymentRingViewDataSource <NSObject>
/* instance methods */
- (id)billPaymentRingView:(id)view topCurvedTextForSuggestedAmount:(id)amount;
- (id)billPaymentRingView:(id)view bottomCurvedTextForSuggestedAmount:(id)amount;
- (id)disabledTopCurvedTextForBillPaymentRingView:(id)view;
- (id)disabledBottomCurvedTextForBillPaymentRingView:(id)view;
- (id)billPaymentRingView:(id)view interestTextForAmount:(id)amount;
- (id)billPaymentRingViewZeroInterestText:(id)text;
@end

#endif /* PKBillPaymentRingViewDataSource_Protocol_h */