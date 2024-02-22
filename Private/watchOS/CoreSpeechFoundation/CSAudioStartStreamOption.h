//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioStartStreamOption_h
#define CSAudioStartStreamOption_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface CSAudioStartStreamOption : NSObject<NSCopying>

@property (nonatomic) BOOL requestHistoricalAudioDataWithHostTime;
@property (nonatomic) BOOL requestHistoricalAudioDataSampleCount;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) BOOL useOpportunisticZLL;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic) BOOL skipAlertBehavior;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (nonatomic) BOOL requireSingleChannelLookup;
@property (nonatomic) unsigned int selectedChannel;
@property (nonatomic) unsigned long long estimatedStartHostTime;
@property (nonatomic) BOOL disableEndpointer;
@property (nonatomic) BOOL disableLocalSpeechRecognizer;
@property (nonatomic) BOOL disablePrewarmLocalAsrAtStartRecording;
@property (nonatomic) BOOL disableBoostForDoAP;
@property (nonatomic) BOOL requestTelephonyDownlinkAudioTap;
@property (retain, nonatomic) NSString *requestMHUUID;
@property (retain, nonatomic) NSString *siriSessionUUID;
@property (nonatomic) BOOL allowRecordWhileBeep;
@property (nonatomic) BOOL disableRCSelection;

/* class methods */
+ (id)noAlertOption;

/* instance methods */
- (id)initTandemWithOption:(id)option;
- (id)initWithXPCObject:(id)xpcobject;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSAudioStartStreamOption_h */