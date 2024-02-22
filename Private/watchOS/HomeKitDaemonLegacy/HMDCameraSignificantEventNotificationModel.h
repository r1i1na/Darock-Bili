//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSignificantEventNotificationModel_h
#define HMDCameraSignificantEventNotificationModel_h
@import Foundation;

#include "HMBModel.h"

@class CKAsset, HMBModelCloudReference, NSDate, NSDictionary, NSNumber;

@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain, @dynamic) NSNumber *significantEvent;
@property (retain, @dynamic) NSNumber *confidenceLevel;
@property (retain, @dynamic) NSDate *dateOfOccurrence;
@property (retain, @dynamic) NSNumber *timeOffsetWithinClip;
@property (retain, @dynamic) HMBModelCloudReference *associatedClip;
@property (retain, @dynamic) CKAsset *heroFrameAsset;
@property (retain, @dynamic) CKAsset *faceCropAsset;
@property (retain, @dynamic) NSDictionary *homePresenceByPairingIdentity;

/* class methods */
+ (id)hmbProperties;
+ (id)hmbExternalRecordType;
+ (id)hmbQueries;
+ (id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)ascending;

/* instance methods */
- (id)createClipSignificantEventWithCameraProfileUUID:(id)uuid faceClassification:(id)classification;
@end

#endif /* HMDCameraSignificantEventNotificationModel_h */