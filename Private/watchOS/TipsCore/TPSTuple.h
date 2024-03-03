//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSTuple_h
#define TPSTuple_h
@import Foundation;

@interface TPSTuple : NSObject

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

/* class methods */
+ (id)tupleWithFirst:(id)first second:(id)second;

/* instance methods */
- (id)initWithFirst:(id)first second:(id)second;
- (id)description;
@end

#endif /* TPSTuple_h */