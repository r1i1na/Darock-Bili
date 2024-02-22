//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTAccountEventHandler_h
#define MTAccountEventHandler_h
@import Foundation;

#include "MTStandardEventHandler.h"

@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak, @dynamic, nonatomic) NSObject<MTAccountEventHandlerDelegate> *delegate;

/* instance methods */
- (id)knownFields;
- (id)eventType;
- (id)eventVersion:(id)version;
- (id)type:(id)type;
@end

#endif /* MTAccountEventHandler_h */