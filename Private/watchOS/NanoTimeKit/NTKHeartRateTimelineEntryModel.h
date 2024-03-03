//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKHeartRateTimelineEntryModel_h
#define NTKHeartRateTimelineEntryModel_h
@import Foundation;

#include "NTKTimelineEntryModel.h"

@class NSArray, NSDate;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) NSDate *measurementDate;
@property (nonatomic) long long BPM;
@property (nonatomic) BOOL hasBPM;
@property (nonatomic) BOOL lessThanMinute;
@property (nonatomic) BOOL locked;
@property (nonatomic) BOOL privacy;
@property (nonatomic) BOOL hasSummary;
@property (nonatomic) long long dailyLowBPM;
@property (nonatomic) long long dailyHighBPM;
@property (retain, nonatomic) NSArray *chartPoints;

/* instance methods */
- (id)templateForComplicationFamily:(long long)family;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newCircularTemplateUsingMediumSize:(BOOL)size;
- (id)_newModularSmallTemplate;
- (id)_newModularLargeTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_signatureBezelTextProvider;
- (id)_metadataWithCurrentMeasurements;
- (id)_newSignatureRectangularTemplate;
- (id)_heartrateString;
- (id)_bpmString;
- (BOOL)isLocked;
- (BOOL)isPrivacy;
@end

#endif /* NTKHeartRateTimelineEntryModel_h */