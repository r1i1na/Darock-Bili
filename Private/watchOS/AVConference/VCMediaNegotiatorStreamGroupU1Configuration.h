//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiatorStreamGroupU1Configuration_h
#define VCMediaNegotiatorStreamGroupU1Configuration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "VCVideoRuleCollections.h"

@class NSArray, NSDictionary, NSSet;

@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject<NSCopying>

@property (nonatomic) unsigned int ssrc;
@property (retain, nonatomic) NSArray *payloadPreference;
@property (nonatomic) BOOL allowAudioRecording;
@property (retain, nonatomic) NSSet *audioPayloads;
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition;
@property (retain, nonatomic) NSArray *videoPayloads;
@property (retain, nonatomic) NSArray *videoParameterSet;
@property (nonatomic) unsigned int screenPixelCount;

/* class methods */
+ (void)updateCameraU1Config:(id)config localConfig:(id)config;
+ (void)updateScreenU1Config:(id)config localConfig:(id)config;
+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)id localU1Config:(id)config remoteU1Config:(id)config;
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)config remoteU1Config:(id)config;
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)config remoteU1Config:(id)config;
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)id localU1Config:(id)config remoteU1Config:(id)config;
+ (id)negotiatedCameraSettingsBetweenLocalU1Config:(id)config remoteU1Config:(id)config;
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)config remoteU1Config:(id)config;
+ (void)negotiateFeatureStrings:(id)strings localU1Config:(id)config remoteU1Config:(id)config;
+ (BOOL)updateCommonNegotiatedVideoSettings:(id)settings localU1Config:(id)config remoteU1Config:(id)config;
+ (BOOL)ssrcForStreamGroup:(unsigned int)group localConfig:(id)config ssrc:(unsigned int *)ssrc;

/* instance methods */
- (id)init;
- (id)initWithSSRC:(unsigned int)ssrc;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)id withLocalConfig:(id)config;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* VCMediaNegotiatorStreamGroupU1Configuration_h */