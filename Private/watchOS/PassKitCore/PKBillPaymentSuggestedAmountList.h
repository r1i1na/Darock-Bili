//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBillPaymentSuggestedAmountList_h
#define PKBillPaymentSuggestedAmountList_h
@import Foundation;

#include "PKBillPaymentSuggestedAmount.h"

@class NSArray, NSDecimalNumber, NSMutableDictionary, NSString;

@interface PKBillPaymentSuggestedAmountList : NSObject {
  /* instance variables */
  NSMutableDictionary *_suggestionsForCategory;
  NSMutableDictionary *_suggestionsForAmount;
  NSMutableDictionary *_suggestedAmountGapMessageForAmount;
}

@property (readonly, copy, nonatomic) NSArray *sortedSuggestedAmounts;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *remainingStatementAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount;
@property (retain, nonatomic) PKBillPaymentSuggestedAmount *initialSuggestedAmount;

/* class methods */
+ (id)boundaryAngle;
+ (id)roundingHandler;
+ (id)requiredSuggestedAmountCategories;
+ (unsigned long long)maximumNumberSuggestions;

/* instance methods */
- (id)init;
- (id)initWithCurrencyCode:(id)code remainingMinimumPayment:(id)payment remainingStatementBalance:(id)balance currentBalance:(id)balance;
- (void)_createMandatorySuggestions;
- (BOOL)canAddAmount:(id)amount andCategory:(unsigned long long)category;
- (BOOL)canAddAmount:(id)amount;
- (BOOL)canAddCategory:(unsigned long long)category;
- (BOOL)addSuggestedAmount:(id)amount;
- (void)addSuggestedAmountList:(id)list;
- (BOOL)_addSuggestedAmount:(id)amount force:(BOOL)force;
- (id)suggestedAmountWithCategory:(unsigned long long)category;
- (id)maximumSuggestedAmount;
- (id)minimumSuggestedAmount;
- (id)maximumSuggestedAmountFromCategories:(id)categories;
- (id)minimumSuggestedAmountFromCategories:(id)categories;
- (BOOL)suggestedAmount:(id)amount isAdjoiningSuggestedAmount:(id)amount;
- (id)suggestedAmountBeforeSuggestedAmount:(id)amount;
- (id)suggestedAmountAfterSuggestedAmount:(id)amount;
- (id)suggestedAmountGapMessageForStartSuggestedAmount:(id)amount;
- (void)addSuggestedAmountGapMessage:(id)message forStartSuggestedAmount:(id)amount;
- (id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)amount accountIdentifier:(id)identifier statementIdentifier:(id)identifier;
- (BOOL)isValidWithUnableReason:(unsigned long long *)reason;
- (void)attemptToPurgeInvalidSuggestedAmounts;
- (id)description;
- (void)_removeSuggestedAmount:(id)amount;
- (id)_sortedAmounts;
- (id)_sortedSuggestedAmounts;
- (id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
- (BOOL)_suggestedAmountIsRequiredCategory:(id)category;
- (id)_lastSuggestedAmountThatIsNotRequred;
- (id)_suggestedAmountThatIsNotRequired:(id)required suggestedAmount2:(id)amount2;
- (void)_updateValues;
- (id)_boundaryAmount;
@end

#endif /* PKBillPaymentSuggestedAmountList_h */