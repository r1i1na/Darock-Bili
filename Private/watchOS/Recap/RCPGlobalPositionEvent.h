//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPGlobalPositionEvent_h
#define RCPGlobalPositionEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RCPEventSenderProperties.h"

@interface RCPGlobalPositionEvent : NSObject<NSCopying>

@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) double zPosition;
@property (readonly) struct  orientation;
@property (readonly) unsigned long long timestamp;
@property (readonly) RCPEventSenderProperties *senderProperties;

/* instance methods */
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })location zPosition:(double)position orientation:(struct )orientation timestamp:(unsigned long long)timestamp senderProperties:(id)properties;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RCPGlobalPositionEvent_h */