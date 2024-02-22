//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKBalanceDetailSavingsSectionProvider_h
#define NPKBalanceDetailSavingsSectionProvider_h
@import Foundation;

#include "NPKBalanceDetailSectionProvider.h"

@class PKAccount;

@interface NPKBalanceDetailSavingsSectionProvider : NPKBalanceDetailSectionProvider

@property (retain, nonatomic) PKAccount *account;

/* class methods */
+ (BOOL)_isBalanceSourceApplicableWithConfiguration:(id)configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (void)_reconfigureSectionProviderWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)footerTextForSectionWithIdentifier:(id)identifier;
- (void)_fetchAccountIfNeeded;
- (void)_updateAccount;
- (void)_handleAccountChanged;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;
- (void)_handleAccountServiceAccountsChanged:(id)changed;
- (BOOL)_hasAccountWithCurrentBalance;
- (BOOL)_hasAccountWithAvailableBalance;
- (BOOL)_hasAccountWithInterestPaidYearToDate;
- (BOOL)_hasAccountWithAPY;
- (id)_accountCurrentBalance;
- (id)_accountAvailableBalance;
- (id)_accountInterestPaidYearToDate;
- (id)_accountAPY;
- (id)_createCurrentBalanceItem;
- (id)_createAvailableBalanceItem;
- (id)_createInterestPaidYearToDateItem;
- (id)_createInterestAPYItem;
@end

#endif /* NPKBalanceDetailSavingsSectionProvider_h */