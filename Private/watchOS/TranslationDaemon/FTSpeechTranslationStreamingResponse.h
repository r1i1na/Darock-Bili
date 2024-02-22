//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSpeechTranslationStreamingResponse_h
#define FTSpeechTranslationStreamingResponse_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTAudioLimitExceeded.h"
#include "FTClientSetupInfo.h"
#include "FTFinalBlazarResponse.h"
#include "FTRecognitionCandidate.h"
#include "FTRecognitionProgress.h"
#include "FTRequestStatsResponse.h"
#include "FTServerEndpointFeatures.h"
#include "FTSpeechTranslationFinalRecognitionResponse.h"
#include "FTSpeechTranslationMtResponse.h"
#include "FTSpeechTranslationPartialRecognitionResponse.h"
#include "FTSpeechTranslationServerEndpointFeatures.h"
#include "FTSpeechTranslationTextToSpeechResponse.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

@interface FTSpeechTranslationStreamingResponse : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct SpeechTranslationStreamingResponse { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (readonly, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (readonly, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;

/* class methods */
+ (Class)content_immutableClassForType:(long long)type;
+ (long long)content_typeForImmutableObject:(id)object;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct SpeechTranslationStreamingResponse { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct SpeechTranslationStreamingResponse { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSpeechTranslationStreamingResponse_h */