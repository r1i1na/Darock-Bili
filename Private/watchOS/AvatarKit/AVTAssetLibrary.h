//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTAssetLibrary_h
#define AVTAssetLibrary_h
@import Foundation;

@interface AVTAssetLibrary : NSObject {
  /* instance variables */
  NSMutableArray * _assets[42];
  NSMutableDictionary * _assetsByName[42];
}

/* class methods */
+ (id)sharedAssetLibrary;

/* instance methods */
- (void)reload;
- (id)assetWithType:(long long)type identifier:(id)identifier;
@end

#endif /* AVTAssetLibrary_h */