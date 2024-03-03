//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AADependentAuthenticationUIRequest_h
#define AADependentAuthenticationUIRequest_h
@import Foundation;

#include "AAAppleIDSettingsRequest.h"

@class NSString;

@interface AADependentAuthenticationUIRequest : AAAppleIDSettingsRequest {
  /* instance variables */
  NSString *_altDSID;
}

/* instance methods */
- (id)urlString;
- (id)initWithAltDSID:(id)dsid;
@end

#endif /* AADependentAuthenticationUIRequest_h */