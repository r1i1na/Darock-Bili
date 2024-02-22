//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutablePartialTextToSpeechStreamingResponse_h
#define FTMutablePartialTextToSpeechStreamingResponse_h
@import Foundation;

#include "FTPartialTextToSpeechStreamingResponse.h"
#include "FTTextToSpeechFeature.h"

@class NSArray, NSData, NSString;

@interface FTMutablePartialTextToSpeechStreamingResponse : FTPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int current_pkt_number;
@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;
@property (copy, nonatomic) FTTextToSpeechFeature *feature;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)audio:(id /* block */)audio;
@end

#endif /* FTMutablePartialTextToSpeechStreamingResponse_h */