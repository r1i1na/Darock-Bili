//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef _BSCompoundAssertionAcquisitionReference_h
#define _BSCompoundAssertionAcquisitionReference_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "_BSCompoundAssertionAcquisitionRecord.h"

@class NSString;

@interface _BSCompoundAssertionAcquisitionReference : NSObject<BSInvalidatable> {
  /* instance variables */
  struct atomic_flag { atomic  _Value; BOOL x0; } _invalid;
  _BSCompoundAssertionAcquisitionRecord *_record;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)invalidate;
- (void)dealloc;
@end

#endif /* _BSCompoundAssertionAcquisitionReference_h */