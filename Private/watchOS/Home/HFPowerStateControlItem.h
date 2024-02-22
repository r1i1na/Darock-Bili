//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFPowerStateControlItem_h
#define HFPowerStateControlItem_h
@import Foundation;

#include "HFPrimaryStateControlItem.h"
#include "HFPrimaryStateWriter-Protocol.h"

@class NSSet, NSString;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem<HFPrimaryStateWriter>

@property (readonly) NSSet *allTargetValues;
@property (readonly, nonatomic) NSSet *auxiliaryTargetValueTuples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)valueClass;
+ (id)_powerStateTargetValues;
+ (id)na_identity;

/* instance methods */
- (id)initWithValueSource:(id)source displayResults:(id)results;
- (id)initWithValueSource:(id)source auxiliaryTargetValueTuples:(id)tuples displayResults:(id)results;
- (id)initWithValueSource:(id)source auxiliaryTargetValueTuples:(id)tuples additionalCharacteristicOptions:(id)options displayResults:(id)results;
- (id)initWithValueSource:(id)source characteristicTypes:(id)types displayResults:(id)results;
- (BOOL)canCopyWithCharacteristicOptions:(id)options;
- (id)copyWithCharacteristicOptions:(id)options valueSource:(id)source;
- (id)writePrimaryState:(long long)state;
- (id)readValueAndPopulateStandardResults;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)values;
- (id)characteristicValuesForValue:(id)value;
- (BOOL)supportsItemRepresentingServices:(id)services;
@end

#endif /* HFPowerStateControlItem_h */