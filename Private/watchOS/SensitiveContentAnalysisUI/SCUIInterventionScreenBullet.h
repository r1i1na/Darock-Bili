//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 35.2.1.0.0
//
#ifndef SCUIInterventionScreenBullet_h
#define SCUIInterventionScreenBullet_h
@import Foundation;

@class NSString;

@interface SCUIInterventionScreenBullet : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *emoji;

/* class methods */
+ (id)bullet:(id)bullet imageName:(id)name emoji:(id)emoji;

/* instance methods */
@end

#endif /* SCUIInterventionScreenBullet_h */