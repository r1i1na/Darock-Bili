//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationsDemoDataGeneratorState_h
#define HDMedicationsDemoDataGeneratorState_h
@import Foundation;

@class NSDate;

@interface HDMedicationsDemoDataGeneratorState : NSObject

@property (nonatomic) BOOL didSetupOntologyData;
@property (nonatomic) BOOL didSaveIntialData;
@property (nonatomic) BOOL hasScheduledMedications;
@property (retain, nonatomic) NSDate *latestLogDate;
@property (retain, nonatomic) NSDate *latestTakenLogDate;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionary;
@end

#endif /* HDMedicationsDemoDataGeneratorState_h */