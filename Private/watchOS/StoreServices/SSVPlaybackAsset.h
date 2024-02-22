//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVPlaybackAsset_h
#define SSVPlaybackAsset_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface SSVPlaybackAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *assetDictionary;
@property (readonly, nonatomic) NSString *downloadKey;
@property (readonly, nonatomic) NSString *flavor;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSArray *sinfs;

/* instance methods */
- (id)initWithAssetDictionary:(id)dictionary;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SSVPlaybackAsset_h */