//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRecurringPaymentActionSectionController_h
#define PKPeerPaymentRecurringPaymentActionSectionController_h
@import Foundation;

#include "PKDynamicListSectionController.h"
#include "PKPaymentSetupDelegate-Protocol.h"
#include "PKPeerPaymentRecurringPaymentSectionControllerDelegate-Protocol.h"

@class NSString, PKFamilyMemberCollection, PKPeerPaymentAccount, PKTransactionSourceCollection;

@interface PKPeerPaymentRecurringPaymentActionSectionController : PKDynamicListSectionController<PKPaymentSetupDelegate>

@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKTransactionSourceCollection *sourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (weak, nonatomic) NSObject<PKPeerPaymentRecurringPaymentSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)identifiers;
- (void)didSelectItem:(id)item;
- (BOOL)shouldHighlightItem:(id)item;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)cellRegistrationForItem:(id)item;
- (void)_beginSetupFlow;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)whitelist paymentSetupMode:(long long)mode;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)controller;
- (id)_decorateListCell:(id)cell forRowItem:(id)item;
- (void)paymentSetupDidFinish:(id)finish;
@end

#endif /* PKPeerPaymentRecurringPaymentActionSectionController_h */