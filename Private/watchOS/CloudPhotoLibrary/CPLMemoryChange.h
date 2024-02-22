//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLMemoryChange_h
#define CPLMemoryChange_h
@import Foundation;

#include "CPLRecordChange.h"
#include "CPLMemoryAssetList.h"

@class NSData, NSDate, NSString;

@interface CPLMemoryChange : CPLRecordChange

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long category;
@property (nonatomic) long long subcategory;
@property (copy, nonatomic) CPLMemoryAssetList *assetList;
@property (copy, nonatomic) CPLMemoryAssetList *customUserAssetList;
@property (copy, nonatomic) NSData *assetListPredicate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSData *graphData;
@property (nonatomic) long long graphVersion;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL rejected;
@property (nonatomic) long long userActionOptions;
@property (copy, nonatomic) NSData *movieData;
@property (nonatomic) double score;
@property (nonatomic) long long notificationState;
@property (copy, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_createTestMemoryWithAssets:(id)assets;
+ (BOOL)supportsDeletion;
+ (BOOL)supportsDirectDeletion;

/* instance methods */
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)idmapping error:(id *)error;
- (id)translateToClientChangeUsingIDMapping:(id)idmapping error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)propertiesDescription;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)selector;
- (BOOL)isFavorite;
- (BOOL)isRejected;
@end

#endif /* CPLMemoryChange_h */