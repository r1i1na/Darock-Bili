//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAccessibilityPointData_h
#define HKAccessibilityPointData_h
@import Foundation;

@class NSArray, NSDate, NSString;

@interface HKAccessibilityPointData : NSObject

@property (readonly, nonatomic) double horizontalScreenCoordinate;
@property (readonly, nonatomic) NSString *horizontalTimeCoordinate;
@property (readonly, nonatomic) NSDate *horizontalDate;
@property (readonly, nonatomic) NSArray *values;

/* instance methods */
- (id)initWithHorizontalScreenCoordinate:(double)coordinate horizontalTimeCoordinate:(id)coordinate horizontalDate:(id)date values:(id)values;
- (id)description;
@end

#endif /* HKAccessibilityPointData_h */