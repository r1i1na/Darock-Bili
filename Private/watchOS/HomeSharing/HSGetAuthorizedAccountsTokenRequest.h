//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSGetAuthorizedAccountsTokenRequest_h
#define HSGetAuthorizedAccountsTokenRequest_h
@import Foundation;

#include "HSRequest.h"

@interface HSGetAuthorizedAccountsTokenRequest : HSRequest
/* class methods */
+ (id)requestWithDSID:(unsigned long long)dsid deviceGUID:(id)guid;

/* instance methods */
- (id)initWithDSID:(unsigned long long)dsid deviceGUID:(id)guid;
- (id)canonicalResponseForResponse:(id)response;
@end

#endif /* HSGetAuthorizedAccountsTokenRequest_h */