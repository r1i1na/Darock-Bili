//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebPluginLoader_h
#define AMSUIWebPluginLoader_h
@import Foundation;

#include "AMSUIWebClientContext.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface AMSUIWebPluginLoader : NSObject

@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (readonly, nonatomic) NSDictionary *installedPluginURLs;
@property (retain, nonatomic) NSMutableDictionary *loadedPluginsMap;
@property (readonly, nonatomic) NSArray *loadedPlugins;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)pluginForBundleIdentifier:(id)identifier;
- (id)_loadInstalledPlugins;
@end

#endif /* AMSUIWebPluginLoader_h */