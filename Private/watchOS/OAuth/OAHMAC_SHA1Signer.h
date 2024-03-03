//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef OAHMAC_SHA1Signer_h
#define OAHMAC_SHA1Signer_h
@import Foundation;

#include "OAuthSigner-Protocol.h"

@interface OAHMAC_SHA1Signer : NSObject<OAuthSigner>
/* class methods */
+ (id)signatureForText:(id)text withKey:(id)key;
@end

#endif /* OAHMAC_SHA1Signer_h */