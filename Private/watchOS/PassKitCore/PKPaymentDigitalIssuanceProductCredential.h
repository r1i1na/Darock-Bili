//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentDigitalIssuanceProductCredential_h
#define PKPaymentDigitalIssuanceProductCredential_h
@import Foundation;

#include "PKPaymentCredential.h"
#include "PKCurrencyAmount.h"
#include "PKDigitalIssuanceServiceProviderItem.h"
#include "PKDigitalIssuanceServiceProviderProduct.h"
#include "PKPaymentSetupProduct.h"
#include "PKServiceProviderPurchase.h"

@class NSString;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) PKCurrencyAmount *price;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderProduct *serviceProviderProduct;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderItem *serviceProviderItem;
@property (retain, nonatomic) NSString *currency;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;

/* instance methods */
- (id)initWithPaymentSetupProduct:(id)product purchase:(id)purchase balance:(id)balance;
- (id)initWithPaymentSetupProduct:(id)product purchase:(id)purchase serviceProviderProduct:(id)product item:(id)item currency:(id)currency;
- (id)initWithPaymentSetupProduct:(id)product purchase:(id)purchase balance:(id)balance serviceProviderProduct:(id)product item:(id)item currency:(id)currency;
- (id)metadata;
- (id)setupProductIdentifier;
@end

#endif /* PKPaymentDigitalIssuanceProductCredential_h */