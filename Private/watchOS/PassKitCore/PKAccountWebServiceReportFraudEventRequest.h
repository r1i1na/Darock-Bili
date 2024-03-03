//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceReportFraudEventRequest_h
#define PKAccountWebServiceReportFraudEventRequest_h
@import Foundation;

#include "PKAccountWebServiceRequest.h"
#include "PKPaymentDeviceMetadata.h"

@class NSString, NSURL;

@interface PKAccountWebServiceReportFraudEventRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long event;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *odiAssessment;

/* instance methods */
- (id)_urlRequestWithAppleAccountInformation:(id)information;
@end

#endif /* PKAccountWebServiceReportFraudEventRequest_h */