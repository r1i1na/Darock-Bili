//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDAbstractLayerReference_h
#define TDAbstractLayerReference_h
@import Foundation;

#include "NSManagedObject.h"

@class NSNumber, NSString;

@interface TDAbstractLayerReference : NSManagedObject

@property (retain, @dynamic, nonatomic) NSString *name;
@property (retain, @dynamic, nonatomic) NSString *frameRectString;
@property (@dynamic, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameRect;
@property (retain, @dynamic, nonatomic) NSNumber *opacity;
@property (retain, @dynamic, nonatomic) NSNumber *blendMode;
@property (@dynamic, nonatomic) BOOL makeOpaqueIfPossible;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primitiveFrameRect;

/* instance methods */
- (void)awakeFromFetch;
@end

#endif /* TDAbstractLayerReference_h */