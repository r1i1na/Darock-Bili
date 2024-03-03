//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerMode_Date_h
#define _UIDatePickerMode_Date_h
@import Foundation;

#include "_UIDatePickerMode.h"

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode {
  /* instance variables */
  double _dateYearWidth;
  double _dateMonthWidth;
  double _dateDayWidth;
  NSString *_yearFormat;
  NSString *_monthFormat;
  NSString *_dayFormat;
}

/* class methods */
+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

/* instance methods */
- (long long)displayedCalendarUnits;
- (void)_shouldReset:(id)reset;
- (id)localizedFormatString;
- (id)dateFormatForCalendarUnit:(unsigned long long)unit;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)unit;
- (double)widthForCalendarUnit:(unsigned long long)unit font:(id)font maxWidth:(double)width;
- (long long)rowForDate:(id)date dateComponents:(id)components component:(long long)component currentRow:(long long)row;
- (id)_dateForYearRow:(long long)row;
- (BOOL)_shouldEnableValueForRow:(long long)row inComponent:(long long)component calendarUnit:(unsigned long long)unit;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)unit;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)unit;
@end

#endif /* _UIDatePickerMode_Date_h */