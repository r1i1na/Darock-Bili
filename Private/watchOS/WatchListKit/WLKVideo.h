//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKVideo_h
#define WLKVideo_h
@import Foundation;

#include "WLKArtworkVariantListing.h"
#include "WLKVideoAsset.h"

@class NSString;

@interface WLKVideo : NSObject

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) WLKArtworkVariantListing *images;
@property (readonly, nonatomic) WLKVideoAsset *asset;

/* class methods */
+ (id)videosWithDictionaries:(id)dictionaries;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* WLKVideo_h */