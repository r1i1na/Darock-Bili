//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioStream_h
#define CSAudioStream_h
@import Foundation;

#include "CSAudioStreamProvidingDelegate-Protocol.h"

@class CSAudioStartStreamOption, CSAudioStreamRequest, NSHashTable, NSString, NSUUID;
@protocol CSAudioStreamProviding;

@interface CSAudioStream : NSObject<CSAudioStreamProvidingDelegate>

@property BOOL streaming;
@property (retain) NSUUID *streamingUUID;
@property (weak, nonatomic) NSObject<CSAudioStreamProviding> *streamProvider;
@property (weak, nonatomic) NSObject<CSAudioStreamProvidingDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic) BOOL scheduledFutureSample;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) CSAudioStreamRequest *streamRequest;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) CSAudioStartStreamOption *startStreamOption;
@property (nonatomic) BOOL isWeakStream;
@property (readonly, nonatomic) NSHashTable *tandemStreams;
@property (nonatomic) BOOL needsBoost12dB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudioStreamProvider:(id)provider streamName:(id)name streamRequest:(id)request;
- (void)dealloc;
- (BOOL)prepareAudioStreamSyncWithRequest:(id)request error:(id *)error;
- (void)prepareAudioStreamWithRequest:(id)request completion:(id /* block */)completion;
- (void)startAudioStreamWithOption:(id)option completion:(id /* block */)completion;
- (void)stopAudioStreamWithOption:(id)option completion:(id /* block */)completion;
- (BOOL)isStreaming;
- (id)recordSettings;
- (BOOL)isNarrowBand;
- (void)updateAudioStreamStartTimeInSampleCount:(unsigned long long)count;
- (void)audioStreamProvider:(id)provider didStopStreamUnexpectedly:(long long)unexpectedly;
- (void)audioStreamProvider:(id)provider audioBufferAvailable:(id)available;
- (void)audioStreamProvider:(id)provider audioBufferAvailable:(id)available lastForwardedSampleCount:(unsigned long long)count;
- (void)audioStreamProvider:(id)provider audioChunkForTVAvailable:(id)tvavailable;
- (void)audioStreamProvider:(id)provider didHardwareConfigurationChange:(long long)change;
@end

#endif /* CSAudioStream_h */