//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoRuleCollectionsCameraEmbedded_h
#define VCVideoRuleCollectionsCameraEmbedded_h
@import Foundation;

#include "VCVideoRuleCollectionsCamera.h"
#include "VCHardwareSettingsEmbeddedProtocol-Protocol.h"

@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {
  /* instance variables */
  NSObject<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithHardwareSettings:(id)settings;
- (void)dealloc;
- (id)description;
- (void)initSupportedPayloads;
- (double)preferredAspectRatio;
- (struct _VCHardwareConfiguration { long long x0; struct _VCVideoFormat { unsigned int x0; unsigned int x1; unsigned int x2; } x1; unsigned int x2; struct _VCVideoFormat * x3; unsigned int x4; struct _VCVideoFormat * x5; struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x6; } *)hardwareConfigurationForPayload:(int)payload transportType:(unsigned char)type;
- (BOOL)isPreferredVideoRule:(id)rule preferredFormat:(id)format;
- (BOOL)setupVideoRulesForPayload:(int)payload transportType:(unsigned char)type encodingType:(unsigned char)type formatList:(struct _VCVideoFormat { unsigned int x0; unsigned int x1; unsigned int x2; } *)list formatListCount:(unsigned int)count preferredFormat:(id)format supportsHighDef:(BOOL *)def;
- (BOOL)setupH264Rules;
- (struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)bitrateConfiguration;
- (BOOL)setupRules;
@end

#endif /* VCVideoRuleCollectionsCameraEmbedded_h */