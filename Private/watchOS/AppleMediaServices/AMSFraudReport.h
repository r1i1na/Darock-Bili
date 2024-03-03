//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSFraudReport_h
#define AMSFraudReport_h
@import Foundation;

#include "AMSBagConsumer-Protocol.h"

@class NSString;

@interface AMSFraudReport : NSObject<AMSBagConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)handleResponse:(id)response account:(id)account bag:(id)bag;
+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)request parameters:(id)parameters bag:(id)bag;
+ (BOOL)isFeatureSupportedForBag:(id)bag;
+ (id)_determineFallbackAccountForProvidedAccount:(id)account;
+ (id)_handleFraudReportResponse:(id)response account:(id)account bag:(id)bag;
+ (id)_handleCallbackFraudReportResponse:(id)response account:(id)account bag:(id)bag;
+ (void)_performCallbackWithURL:(id)url headers:(id)headers bag:(id)bag;
+ (BOOL)_isFraudReportStatusCode:(long long)code;
+ (BOOL)_isCallbackFraudReportStatusCode:(long long)code;
+ (BOOL)_containsFraudReportHeaders:(id)headers;
+ (BOOL)_containsCallbackFraudReportHeaders:(id)headers;
+ (id)_signatureForRequest:(id)request signingKeyRef:(struct __SecKey *)ref;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)bagKeySet;
@end

#endif /* AMSFraudReport_h */