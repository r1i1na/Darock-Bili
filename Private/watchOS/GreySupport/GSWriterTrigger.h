//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSWriterTrigger_h
#define GSWriterTrigger_h
@import Foundation;

#include "GSWriterTriggerDelegate-Protocol.h"

@interface GSWriterTrigger : NSObject

@property (weak, nonatomic) NSObject<GSWriterTriggerDelegate> *delegate;
@property (nonatomic) BOOL triggered;

/* instance methods */
@end

#endif /* GSWriterTrigger_h */