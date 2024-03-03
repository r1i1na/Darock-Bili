//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef DMUserDataDispositionManager_h
#define DMUserDataDispositionManager_h
@import Foundation;

@interface DMUserDataDispositionManager : NSObject
/* class methods */
+ (unsigned int)dispositionFlagsFromDispositionDict:(id)dict;
+ (unsigned int)basicDispositionFlagsFromDispositionFlags:(unsigned int)flags;
+ (unsigned int)backupSourceDispositionFlagsFromDispositionFlags:(unsigned int)flags;
+ (id)descriptionFromDispositionFlags:(unsigned int)flags;
@end

#endif /* DMUserDataDispositionManager_h */