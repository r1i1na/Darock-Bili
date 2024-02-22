//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICTimeInputView_h
#define PUICTimeInputView_h
@import Foundation;

#include "PUICWheelsOfTimeView.h"
#include "CSLSDetentPreferencesObserver-Protocol.h"
#include "PUICClientSideAnimation.h"
#include "PUICContinuousSequenceNotchProvider.h"
#include "PUICCrownInputSequencer.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "PUICWheelsOfTimeButton.h"
#include "PUICWheelsOfTimeEditTimeView.h"
#include "PUICWheelsOfTimeEditTimeViewDelegate-Protocol.h"

@class NSDateFormatter, NSLayoutConstraint, NSString, UILabel, UIView;

@interface PUICTimeInputView : PUICWheelsOfTimeView<CSLSDetentPreferencesObserver, PUICCrownInputSequencerDelegate, PUICWheelsOfTimeEditTimeViewDelegate> {
  /* instance variables */
  const struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } * _layout;
  long long _localeTimeFormat;
  NSDateFormatter *_dateFormatter;
  UIView *_markerView;
  PUICClientSideAnimation *_animation;
  unsigned long long _previousHour;
  unsigned long long _previousMinute;
  BOOL _isMinuteDirty;
  PUICWheelsOfTimeEditTimeView *_timeView;
  UILabel *_hour24Label;
  NSLayoutConstraint *_hour24CenterYConstraint;
  PUICWheelsOfTimeButton *_amButton;
  NSLayoutConstraint *_amButtonCenterYConstraint;
  PUICWheelsOfTimeButton *_pmButton;
  NSLayoutConstraint *_pmButtonCenterYConstraint;
  PUICCrownInputSequencer *_currentCrownSequencer;
  PUICCrownInputSequencer *_hourCrownSequencer;
  PUICContinuousSequenceNotchProvider *_hourNotchProvider;
  PUICCrownInputSequencer *_minuteCrownSequencer;
  PUICContinuousSequenceNotchProvider *_minuteNotchProvider;
}

@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) long long minuteScrollIncrement;
@property (readonly) BOOL isHoursControlSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_24HourLabelTextColor;
+ (id)_ampmSelectedLabelTextColor;
+ (id)_ampmUnselectedBackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame accentColor:(id)color;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_ampmUnselectedLabelTextColor;
- (id)_ampmSelectedBackgroundColor;
- (void)_addAMPMButtonConstraints;
- (void)_addAMPMButtons;
- (void)_addHour24LabelConstraints;
- (void)_addHour24Label;
- (void)_addMarkerView;
- (void)_addTimeView;
- (void)_addTimeViewConstraints;
- (double)_animationDurationForMinuteDial;
- (double)_dialLocationForMinute:(unsigned long long)minute;
- (unsigned long long)_hourStopCount;
- (void)_loadInitialTime;
- (unsigned long long)_minuteForDialLocation:(unsigned long long)location;
- (unsigned long long)_minuteStopCount;
- (double)_notchProviderRadiusForSequencer:(id)sequencer;
- (struct CGPoint { double x0; double x1; })_pointAlongEdgeOfDialAtValue:(double)value;
- (unsigned long long)_roundToNearestFiveMinuteIncrement:(unsigned long long)increment;
- (void)_setupHourCrownSequencer;
- (void)_setupMinuteCrownSequencer;
- (void)_updateAMPMButtonTitles;
- (void)_update24HourAMPMState;
- (void)_updateHourCrownSequencer;
- (void)_updateMarkerViewPlacement:(BOOL)placement;
- (void)_updateMinuteCrownSequencer;
- (void)_updateMinuteCrownSequencerEnd;
- (void)_updateMinuteNotchProvider;
- (void)_amButtonTapped:(id)tapped;
- (void)_pmButtonTapped:(id)tapped;
- (void)_localeChanged:(id)changed;
- (void)_wheelChangedWithEvent:(id)event;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)editTimeViewIsEditingHours:(id)hours;
- (void)editTimeViewIsEditingMinutes:(id)minutes;
- (void)editTimeView:(id)view hasUpdatedHour:(unsigned long long)hour;
- (void)editTimeView:(id)view hasUpdatedMinute:(unsigned long long)minute;
@end

#endif /* PUICTimeInputView_h */