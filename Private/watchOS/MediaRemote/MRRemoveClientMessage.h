//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRRemoveClientMessage_h
#define MRRemoveClientMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRClient.h"

@interface MRRemoveClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;

/* instance methods */
- (id)initWithClient:(id)client;
- (unsigned long long)type;
@end

#endif /* MRRemoveClientMessage_h */