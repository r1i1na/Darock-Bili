//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAVideoAdjustmentStackSerializer_SLM_v11_h
#define IPAVideoAdjustmentStackSerializer_SLM_v11_h
@import Foundation;

#include "IPAVideoAdjustmentStackSerializer.h"

@interface IPAVideoAdjustmentStackSerializer_SLM_v11 : IPAVideoAdjustmentStackSerializer
/* instance methods */
- (id)videoAdjustmentStackFromData:(id)data error:(id *)error;
- (id)dataFromVideoAdjustmentStack:(id)stack error:(id *)error;
- (id)dataFromArchive:(id)archive error:(id *)error;
- (id)archiveFromData:(id)data error:(id *)error;
@end

#endif /* IPAVideoAdjustmentStackSerializer_SLM_v11_h */