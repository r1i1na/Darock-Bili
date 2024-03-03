//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLSyncSessionPrediction_h
#define CPLSyncSessionPrediction_h
@import Foundation;

@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
  /* instance variables */
  NSDictionary *_predictions;
}

/* instance methods */
- (id)init;
- (id)initWithPredictedValuesAndTypes:(id)types;
- (id)predictedValueForType:(id)type;
- (id)updatedPredictionWithValuesAndTypes:(id)types;
- (void)updateXPCActivity:(id)xpcactivity;
- (void)updateXPCActivityCriteria:(id)criteria;
- (BOOL)matchesXPCActivity:(id)xpcactivity;
- (BOOL)_oldPredictionWithKey:(const char *)key inCriteria:(id)criteria matchesPredictionWithKey:(id)key;
- (BOOL)matchesXPCActivityCriteria:(id)criteria;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CPLSyncSessionPrediction_h */