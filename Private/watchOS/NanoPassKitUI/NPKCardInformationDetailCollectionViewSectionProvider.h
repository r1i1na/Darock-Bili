//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCardInformationDetailCollectionViewSectionProvider_h
#define NPKCardInformationDetailCollectionViewSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@class PKAccount, PKPaymentPass, PKVirtualCardCredentials;

@interface NPKCardInformationDetailCollectionViewSectionProvider : NPKPassDetailSectionProvider

@property (retain, nonatomic) PKVirtualCardCredentials *virtualCardCredentials;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKAccount *appleCardAccount;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (void)_updateAppleCardAccount;
- (void)noteAppleCardAccountUpdated;
@end

#endif /* NPKCardInformationDetailCollectionViewSectionProvider_h */