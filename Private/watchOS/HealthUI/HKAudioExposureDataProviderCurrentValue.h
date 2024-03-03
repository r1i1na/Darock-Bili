//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAudioExposureDataProviderCurrentValue_h
#define HKAudioExposureDataProviderCurrentValue_h
@import Foundation;

#include "HKDataProviderValue-Protocol.h"

@class HKQuantity, NSDate, NSString;

@interface HKAudioExposureDataProviderCurrentValue : NSObject<HKDataProviderValue> {
  /* instance variables */
  unsigned long long _classification;
  HKQuantity *_leqQuantity;
  double _secondsListened;
  long long _daysAggregated;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLEQQuantity:(id)leqquantity secondsListened:(double)listened daysAggregated:(long long)aggregated date:(id)date;
- (id)attributedStringWithDisplayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font dateCache:(id)cache;
- (id)lastUpdatedDescriptionWithDateCache:(id)cache;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)cache;
- (id)stringWithDisplayType:(id)type unitController:(id)controller;
- (id)attributedSupplementaryStringWithDisplayType:(id)type unitController:(id)controller font:(id)font;
- (id)_attributedSymbolForClassification:(unsigned long long)classification font:(id)font;
@end

#endif /* HKAudioExposureDataProviderCurrentValue_h */