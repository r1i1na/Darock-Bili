//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCAssetLoadPropertiesLocalFileEvaluation_h
#define MPCAssetLoadPropertiesLocalFileEvaluation_h
@import Foundation;

@class MPModelFileAsset, NSString;

@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long recommendation;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL fileMatchesRequiredFileFormat;
@property (nonatomic) BOOL fileMatchesRequiredQuality;
@property (nonatomic) BOOL fileIsDownloaded;
@property (nonatomic) BOOL fileIsCached;
@property (nonatomic) BOOL fileIsHLS;
@property (nonatomic) long long HLSContentPolicy;
@property (nonatomic) long long fileAssetType;
@property (nonatomic) long long expectedAssetType;
@property (nonatomic) long long fileQualityType;
@property (nonatomic) long long expectedQualityType;
@property (readonly, copy, nonatomic) MPModelFileAsset *fileAsset;
@property (readonly, nonatomic) BOOL fileIsValid;
@property (readonly, nonatomic) BOOL fileShouldBeUpdated;

/* instance methods */
- (id)initWithFileAsset:(id)asset;
- (id)description;
- (id)humanDescription;
@end

#endif /* MPCAssetLoadPropertiesLocalFileEvaluation_h */