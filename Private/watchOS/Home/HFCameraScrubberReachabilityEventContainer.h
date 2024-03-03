//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraScrubberReachabilityEventContainer_h
#define HFCameraScrubberReachabilityEventContainer_h
@import Foundation;

#include "HFCameraRecordingEvent-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface HFCameraScrubberReachabilityEventContainer : NSObject<HFCameraRecordingEvent>

@property (readonly, nonatomic) NSObject<HFCameraRecordingEvent> *startEvent;
@property (retain, nonatomic) NSObject<HFCameraRecordingEvent> *endEvent;
@property (readonly, nonatomic) unsigned long long containerType;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStartEvent:(id)event;
- (double)duration;
- (double)hf_duration;
- (BOOL)hf_isPlayable;
- (BOOL)hf_hasInsufficientAnalysis;
- (id)hf_endDate;
- (id)hf_dateInterval;
- (BOOL)isComplete;
- (double)targetFragmentDuration;
- (id)encryptionKey;
- (id)videoAssetRequiredHTTPHeaders;
- (BOOL)canAskForUserFeedback;
@end

#endif /* HFCameraScrubberReachabilityEventContainer_h */