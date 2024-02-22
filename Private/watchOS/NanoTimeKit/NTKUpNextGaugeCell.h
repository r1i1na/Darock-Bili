//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextGaugeCell_h
#define NTKUpNextGaugeCell_h
@import Foundation;

#include "NTKUpNextBaseCell.h"
#include "CLKMonochromeFilterProvider-Protocol.h"
#include "NTKRichComplicationLineProgressView.h"

@class CLKFont, CLKUIColoringLabel, NSString, UILayoutGuide;

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell<CLKMonochromeFilterProvider> {
  /* instance variables */
  UILayoutGuide *_contentLayoutGuide;
  CLKUIColoringLabel *_headerLabel;
  CLKUIColoringLabel *_descriptionLine1Label;
  NTKRichComplicationLineProgressView *_progressView;
  CLKUIColoringLabel *_descriptionLine2Label;
  CLKUIColoringLabel *_descriptionLine3Label;
  CLKFont *_standardFont;
  CLKFont *_boldFont;
  CLKFont *_semiboldFont;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithContent:(id)content;
- (void)setPaused:(BOOL)paused;
- (id)filtersForView:(id)view style:(long long)style fraction:(double)fraction;
- (id)filtersForView:(id)view style:(long long)style;
- (id)filterForView:(id)view style:(long long)style fraction:(double)fraction;
- (id)filterForView:(id)view style:(long long)style;
- (id)colorForView:(id)view accented:(BOOL)accented;
- (void)prepareForReuse;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)overrideDateDidChange;
@end

#endif /* NTKUpNextGaugeCell_h */