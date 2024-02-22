//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo_h
#define HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo_h
@import Foundation;

#include "HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h"

@class CKServerChangeToken, NSArray, NSDictionary, NSMutableSet, NSSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (readonly, nonatomic) NSSet *requestedRecordIDs;
@property (readonly, nonatomic) NSDictionary *zoneInfoMap;
@property (retain, nonatomic) CKServerChangeToken *databaseChangeToken;
@property (retain, nonatomic) CKServerChangeToken *originalDatabaseChangeToken;
@property (readonly, nonatomic) NSMutableSet *modifiedRecordIDs;
@property (readonly, nonatomic) BOOL zonesHaveChanged;
@property (readonly, nonatomic) BOOL zonesWereDeleted;
@property (retain, nonatomic) NSArray *signatureVerificationPublicKeys;

/* instance methods */
- (id)initWithActivity:(id)activity options:(id)options databaseChangeToken:(id)token promise:(id)promise xpcActivity:(id)activity database:(id)database useAnonymousRequests:(BOOL)requests recordIDs:(id)ids lastSynchronizedRecordIDs:(id)ids;
- (void)markZonesChanged;
- (void)markZonesDeleted;
- (void)finishWithResult:(id)result error:(id)error;
- (void)__cleanupMirroredZones:(id)zones cloudZones:(id)zones result:(id)result error:(id)error;
@end

#endif /* HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo_h */