//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef NSObject_RCAdditions_h
#define NSObject_RCAdditions_h
@import Foundation;

@interface NSObject (RCAdditions)
/* class methods */
+ (BOOL)rc_object:(id)rc_object isEqualToObject:(id)object;
+ (long long)rc_compareObject:(id)object toObject:(id)object;
@end

#endif /* NSObject_RCAdditions_h */