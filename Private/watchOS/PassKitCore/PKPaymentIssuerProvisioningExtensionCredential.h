//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentIssuerProvisioningExtensionCredential_h
#define PKPaymentIssuerProvisioningExtensionCredential_h
@import Foundation;

#include "PKPaymentCredential.h"
#include "PKIssuerProvisioningExtensionPaymentPassEntry.h"

@class NSExtension;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry;

/* instance methods */
- (id)initWithExtension:(id)extension entry:(id)entry;
- (id)metadata;
- (id)detailDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqualToCredential:(id)credential;
@end

#endif /* PKPaymentIssuerProvisioningExtensionCredential_h */