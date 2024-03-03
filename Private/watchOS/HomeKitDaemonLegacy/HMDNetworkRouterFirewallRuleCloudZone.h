//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleCloudZone_h
#define HMDNetworkRouterFirewallRuleCloudZone_h
@import Foundation;

#include "HMBCloudZone.h"

@class NSArray, NSMutableSet, NSSet;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone

@property (readonly, nonatomic) BOOL useAnonymousRequests;
@property (readonly, nonatomic) NSSet *watchedRecordIDs;
@property (readonly, nonatomic) NSArray *signatureVerificationPublicKeys;
@property (retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull;
@property (retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull;

/* class methods */
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)key defaultValue:(unsigned long long)value;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadata;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;
+ (unsigned long long)__maxSizeForCKRecordString;
+ (id)__createBaseAccessoryIdentifierFromRecord:(id)record error:(id *)error;
+ (id)__calculateDigestDataFromRecord:(id)record dataKey:(id)key dataAssetKey:(id)key maxDataSize:(unsigned long long)size error:(id *)error;
+ (id)__getSignatureDataFromRecord:(id)record signatureKey:(id)key signatureAssetKey:(id)key maxSignatureSize:(unsigned long long)size error:(id *)error;
+ (BOOL)__verifyDigestDataAgainstSignatureFromRecord:(id)record digestData:(id)data signatureData:(id)data signatureVerificationPublicKeys:(id)keys error:(id *)error;
+ (id)__getDataFromRecord:(id)record dataKey:(id)key dataAssetKey:(id)key maxDataSize:(unsigned long long)size error:(id *)error;
+ (BOOL)__verifyDataFromRecord:(id)record signatureVerificationPublicKeys:(id)keys dataKey:(id)key dataAssetKey:(id)key maxDataSize:(unsigned long long)size signatureKey:(id)key signatureAssetKey:(id)key maxSignatureSize:(unsigned long long)size baseAccessoryIdentifier:(id *)identifier data:(id *)data error:(id *)error;
+ (BOOL)verifyNetworkDeclarationsFromRecord:(id)record signatureVerificationPublicKeys:(id)keys baseAccessoryIdentifier:(id *)identifier data:(id *)data error:(id *)error;
+ (BOOL)verifyNetworkDeclarationsFromRecord:(id)record signatureVerificationPublicKeys:(id)keys error:(id *)error;
+ (BOOL)verifyPairedMetadataFromRecord:(id)record signatureVerificationPublicKeys:(id)keys error:(id *)error;

/* instance methods */
- (id)decodeModelFrom:(id)from recordSource:(unsigned long long)source error:(id *)error;
- (id)initWithCloudDatabase:(id)database state:(id)state useAnonymousRequests:(BOOL)requests watchedRecordIDs:(id)ids signatureVerificationPublicKeys:(id)keys;
- (id)attributeDescriptions;
- (void)startUpWithLocalZone:(id)zone;
- (id)fetchChangesWithToken:(id)token options:(id)options;
- (void)__fetchZoneChangesWithFetchInfo:(id)info;
- (void)__noteUpdatedRecordID:(id)id;
- (void)__finalizeUpdatedRecordIDs;
- (void)__recordChanged:(id)changed fetchInfo:(id)info;
- (void)__recordDeleted:(id)deleted recordType:(id)type fetchInfo:(id)info;
- (void)__zoneChangeTokensUpdated:(id)updated fetchInfo:(id)info;
- (void)__zoneFetchCompletedWithChangeToken:(id)token error:(id)error moreComing:(BOOL)coming fetchInfo:(id)info;
- (void)__zoneChangesCompleted:(id)completed fetchInfo:(id)info;
- (BOOL)__commitLocalChanges:(id)changes error:(id *)error;
- (BOOL)__canRecoverFromError:(id)error fetchInfo:(id)info;
- (void)__retryFetchWithFetchInfo:(id)info;
@end

#endif /* HMDNetworkRouterFirewallRuleCloudZone_h */