//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICachedBoundingPathBitmapDataReferenceCorner_h
#define _UICachedBoundingPathBitmapDataReferenceCorner_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject<NSSecureCoding> {
  /* instance variables */
  struct _UIBoundingPathBitmapDataCorner { unsigned long long location; unsigned long long radius; unsigned long long size; BOOL edgePositionsUseLargeValues; void *referenceEdgePositionsByRow; void *referenceEdgePositionsByCol; } _referenceCorner;
}

/* class methods */
+ (id)cachedReferenceCornerForRadius:(long long)radius;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; void * x4; void * x5; })corner;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (struct _UIBoundingPathBitmapDataCorner { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; void * x4; void * x5; })referenceCornerCopy;
- (void)dealloc;
@end

#endif /* _UICachedBoundingPathBitmapDataReferenceCorner_h */