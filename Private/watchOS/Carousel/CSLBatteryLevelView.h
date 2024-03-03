//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBatteryLevelView_h
#define CSLBatteryLevelView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CAShapeLayer, NSArray, NSNumberFormatter, UIFont, UIImage, UILabel;

@interface CSLBatteryLevelView : UIView {
  /* instance variables */
  CAShapeLayer *_circleLayer;
  CAShapeLayer *_backgroundCircleLayer;
  CAShapeLayer *_circlePlatter;
  CALayer *_maskLayer;
  UILabel *_valueLabel;
  UILabel *_percentSignLabel;
  double _radius;
  double _innerRadius;
  double _batteryCircleLineWidth;
  NSArray *_numberFontPointsVsCircleDiameterPoints;
  NSArray *_numberKerningVsCircleDiameterPoints;
  NSArray *_percentKerningVsCircleDiameterPoints;
  NSArray *_percentCircleDiameterPoints;
  UIFont *_valueFont;
  UIFont *_percentFont;
  double _numberFontPoints;
  NSNumberFormatter *_percentageFormatter;
}

@property (nonatomic) double level;
@property (readonly, nonatomic) UIImage *image;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame capacity:(double)capacity isMeadowEnabled:(BOOL)enabled;
- (void)_updateLabel;
- (void)_updateArc;
@end

#endif /* CSLBatteryLevelView_h */