//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FAMonogram_h
#define FAMonogram_h
@import Foundation;

@interface FAMonogram : NSObject
/* class methods */
+ (id)monogramForContact:(id)contact diameter:(double)diameter scale:(double)scale;
+ (id)silhouetteMonogramWithDiameter:(double)diameter scale:(double)scale;
+ (id)monogramWithFirstName:(id)name lastName:(id)name diameter:(double)diameter scale:(double)scale;
@end

#endif /* FAMonogram_h */