//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMinorExperiencesPlugin_h
#define HDMinorExperiencesPlugin_h
@import Foundation;

#include "HDPlugin-Protocol.h"

@class NSString;

@interface HDMinorExperiencesPlugin : NSObject<HDPlugin>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)extensionForHealthDaemon:(id)daemon;
- (id)extensionForProfile:(id)profile;
@end

#endif /* HDMinorExperiencesPlugin_h */