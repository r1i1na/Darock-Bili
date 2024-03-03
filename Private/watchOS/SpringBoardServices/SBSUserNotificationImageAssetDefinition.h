//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSUserNotificationImageAssetDefinition_h
#define SBSUserNotificationImageAssetDefinition_h
@import Foundation;

#include "SBSUserNotificationImageDefinition.h"

@class NSString;

@interface SBSUserNotificationImageAssetDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *catalogPath;
@property (readonly, copy, nonatomic) NSString *catalogImageKey;

/* class methods */
+ (id)_definitionType;

/* instance methods */
- (id)initWithImagePath:(id)path;
- (id)initWithImageCatalogPath:(id)path catalogImageKey:(id)key;
- (id)_initWithImagePath:(id)path imageCatalogPath:(id)path catalogImageKey:(id)key;
- (id)_initWithDictionary:(id)dictionary;
- (id)build;
@end

#endif /* SBSUserNotificationImageAssetDefinition_h */