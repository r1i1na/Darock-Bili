//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSubscriptionPlaybackURLRequest_h
#define ICMusicSubscriptionPlaybackURLRequest_h
@import Foundation;

#include "ICStoreURLRequest.h"

@class NSData, NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic) NSData *leaseCertificateData;
@property (copy, nonatomic) NSData *leaseAssetIDData;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (nonatomic) BOOL delegatedPlayback;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

/* instance methods */
- (void)buildStoreURLRequestWithURLRequest:(id)urlrequest builderProperties:(id)properties completionHandler:(id /* block */)handler;
- (id)_actionType;
- (void)_populateItemIdentifiers:(id)identifiers;
- (id)description;
- (id)_analyticSignature;
- (BOOL)isDelegatedPlayback;
@end

#endif /* ICMusicSubscriptionPlaybackURLRequest_h */