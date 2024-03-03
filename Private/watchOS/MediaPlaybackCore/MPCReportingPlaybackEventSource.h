//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCReportingPlaybackEventSource_h
#define MPCReportingPlaybackEventSource_h
@import Foundation;

#include "MPCReportingIdentityPropertiesLoading-Protocol.h"

@class MPModelGenericObject, MPModelPlayEvent, NSData, NSNumber, NSString;

@interface MPCReportingPlaybackEventSource : NSObject

@property (retain, nonatomic) NSObject<MPCReportingIdentityPropertiesLoading> *identityPropertiesLoader;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) double eventDuration;
@property (nonatomic) unsigned long long overrideItemType;
@property (copy, nonatomic) NSString *lyricsID;
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject;
@property (copy, nonatomic) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSNumber *siriInitiated;
@property (nonatomic) BOOL shouldReportPlayEventsToStore;
@property (copy, nonatomic) NSData *trackInfo;
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSData *jingleTimedMetadata;
@property (copy, nonatomic) NSData *recommendationData;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;

/* instance methods */
- (id)init;
- (id)isPrivateListeningEnabled;
- (id)isSiriInitiated;
@end

#endif /* MPCReportingPlaybackEventSource_h */