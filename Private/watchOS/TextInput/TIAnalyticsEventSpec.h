//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIAnalyticsEventSpec_h
#define TIAnalyticsEventSpec_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface TIAnalyticsEventSpec : NSObject

@property (readonly, nonatomic) NSDictionary *fieldSpecsByName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isInputModeRequired;
@property (readonly, nonatomic) NSArray *fieldSpecs;

/* class methods */
+ (id)eventSpecWithName:(id)name inputModeRequired:(BOOL)required;
+ (id)eventSpecWithName:(id)name inputModeRequired:(BOOL)required fieldSpecs:(id)specs;

/* instance methods */
- (id)initWithName:(id)name inputModeRequired:(BOOL)required fieldSpecs:(id)specs;
- (id)fieldSpecWithName:(id)name;
@end

#endif /* TIAnalyticsEventSpec_h */