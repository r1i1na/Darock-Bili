//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHandlePaymentIntentAction_h
#define WFHandlePaymentIntentAction_h
@import Foundation;

#include "WFHandleSystemIntentAction.h"

@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {
  /* instance variables */
  WFImage *_icon;
}

/* instance methods */
- (id)disabledOnPlatforms;
- (id)showsWhenRunIfApplicable;
- (BOOL)opensInApp;
- (id)minimumSupportedClientVersion;
- (void)resolveSlot:(id)slot withProcessedValue:(id)value parameter:(id)parameter input:(id)input completion:(id /* block */)completion;
- (id)errorFromResolutionResult:(id)result forSlot:(id)slot onIntent:(id)intent;
- (BOOL)selectedPaymentServiceIsApplePay;
- (id)customAppNameForBundleIdentifier:(id)identifier;
- (id)customImageForBundleIdentifier:(id)identifier;
- (id)localizedKeyParameterDisplayName;
- (id)noRecipientAccountError:(BOOL)error;
- (id)credentialsUnverifiedError;
- (id)amountBelowMinimumErrorWithAmount:(id)amount sending:(BOOL)sending;
- (id)amountAboveMaximumErrorWithAmount:(id)amount sending:(BOOL)sending;
- (id)currencyUnsupportedErrorWithAmount:(id)amount;
- (id)noBankAccountError;
- (id)insufficientFundsError;
- (id)errorFromPaymentsResponse:(id)response intent:(id)intent;
- (id)errorFromConfirmResponse:(id)response intent:(id)intent;
- (id)errorFromHandleResponse:(id)response intent:(id)intent;
- (id)icon;
- (id)actionForAppIdentifier:(id)identifier;
- (id)serializedParametersForDonatedIntent:(id)intent allowDroppingUnconfigurableValues:(BOOL)values;
@end

#endif /* WFHandlePaymentIntentAction_h */