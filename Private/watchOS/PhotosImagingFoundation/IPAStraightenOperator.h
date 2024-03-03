//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAStraightenOperator_h
#define IPAStraightenOperator_h
@import Foundation;

#include "IPAGeometryOperator.h"

@interface IPAStraightenOperator : IPAGeometryOperator {
  /* instance variables */
  double _zAngle;
}

/* class methods */
+ (id)operatorWithAngleZ:(double)z;
+ (id)operatorWithIdentifier:(id)identifier angleZ:(double)z;

/* instance methods */
- (id)transformForGeometry:(id)geometry;
- (id)description;
@end

#endif /* IPAStraightenOperator_h */