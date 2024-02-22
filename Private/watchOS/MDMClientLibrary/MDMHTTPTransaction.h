//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMHTTPTransaction_h
#define MDMHTTPTransaction_h
@import Foundation;

#include "DMCHTTPTransaction.h"

@interface MDMHTTPTransaction : DMCHTTPTransaction

@property (readonly, nonatomic) BOOL isCheckIn;

/* class methods */
+ (id)unauthorizedByServerError;
+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;

/* instance methods */
- (id)initWithURL:(id)url data:(id)data identity:(struct __SecIdentity *)identity pinnedCertificates:(id)certificates pinningRevocationCheckRequired:(BOOL)required signMessage:(BOOL)message isCheckin:(BOOL)checkin isShortTransaction:(BOOL)transaction rmAccountID:(id)id;
- (id)initWithURL:(id)url identity:(struct __SecIdentity *)identity pinnedCertificates:(id)certificates pinningRevocationCheckRequired:(BOOL)required signMessage:(BOOL)message isShortTransaction:(BOOL)transaction rmAccountID:(id)id;
- (id)initWithURL:(id)url downloadURL:(id)url identity:(struct __SecIdentity *)identity pinnedCertificates:(id)certificates pinningRevocationCheckRequired:(BOOL)required signMessage:(BOOL)message isShortTransaction:(BOOL)transaction rmAccountID:(id)id;
- (void)_commonInit:(struct __SecIdentity *)init timeout:(unsigned long long)timeout pinnedSecCertificateRefs:(id)refs pinningRevocationCheckRequired:(BOOL)required signMessage:(BOOL)message rmAccountID:(id)id;
@end

#endif /* MDMHTTPTransaction_h */