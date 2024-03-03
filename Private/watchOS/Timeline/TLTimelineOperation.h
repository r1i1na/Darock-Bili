//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.0.0.0.0
//
#ifndef TLTimelineOperation_h
#define TLTimelineOperation_h
@import Foundation;

#include "TLOperation.h"
#include "TLIdentifiable-Protocol.h"

@interface TLTimelineOperation : TLOperation

@property (readonly, nonatomic) NSObject<TLIdentifiable> *identifiable;
@property (copy) id /* block */ timelineOperationCompletionBlock;

/* instance methods */
- (id)initWithIdentifiable:(id)identifiable;
@end

#endif /* TLTimelineOperation_h */