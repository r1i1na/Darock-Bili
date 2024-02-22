//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CardDAVFolderInfoTaskGroup_h
#define CardDAVFolderInfoTaskGroup_h
@import Foundation;

#include "CoreDAVContainerInfoTaskGroup.h"

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
  /* instance variables */
  NSSet *_directoryGatewayURLs;
}

/* instance methods */
- (id)initWithAccountInfoProvider:(id)provider containerURLs:(id)urls directoryGatewayURLs:(id)urls taskManager:(id)manager;
- (int)containerInfoDepthForURL:(id)url;
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;
- (id)_copyContainerParserMappings;
@end

#endif /* CardDAVFolderInfoTaskGroup_h */